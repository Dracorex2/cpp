#include "BitcoinExchange.hpp"
#include <cstddef>
#include <cstdlib>
#include <fstream>
#include <stdexcept>
#include <string>
#include <iostream>
#include <cstdint>

BitcoinExchange::BitcoinExchange(std::string path) {
	std::ifstream fd = std::ifstream(path);
	if (!fd.is_open())
		throw std::runtime_error("can't open file" + path);
	std::string line;
	std::getline(fd, line);
	while (std::getline(fd, line)) {
		size_t sep = line.find(',');
		if (!sep)
			throw std::runtime_error("file" + path + "mal formated");
		this->data[line.substr(0, sep)] = std::atof(line.substr(sep + 1).c_str());
	}
}
void BitcoinExchange::getVal(std::string date, float num) {
	std::string closest_date = "";
	for (std::map<std::string, float>::iterator it = this->data.begin(); it != this->data.end(); ++it) {
		if (it->first <= date)
			closest_date = it->first;
	}
	if (closest_date == "") {
		std::cout << "Error: not data for " << date << "." << std::endl;
		return ;
	}
	std::cout << date << " => " << num << " = " << num * this->data[closest_date] << std::endl;
}

static std::string removeSpaces(std::string str) {
	std::string ret;
	size_t i = 0;
	size_t y = 0;

	while (str[i] == ' ')
		i++;
	y = str.length() - 1;
	while (str[y] == ' ' && y > i)
		y--;
	ret = str.substr(i, y - i + 1);
	return (ret);
}

static int checkDate(std::string date) {
	if (date.length() != 10)
		return 0;
	if (date[4] != '-' || date[7] != '-')
		return 0;
	for (int i = 0; i < 10; i++) {
		if (i == 4 || i == 7)
			continue;
		if (date[i] < '0' || date[i] > '9')
			return 0;
	}
	int year = (date[0] - '0') * 1000 + (date[1] - '0') * 100 + (date[2] - '0') * 10 + (date[3] - '0');
	int month = (date[5] - '0') * 10 + date[6] - '0';;
	int day = (date[8] - '0') * 10 + date[9] - '0';
	if (month > 12 || month == 0 || day == 0)
		return 0;
	uint64_t lst = 0xffbfefffdff7f9f;
	uint64_t lst_leap = 0xffbfefffdff7fbf;
	uint64_t month_end = lst;
	if (year % 4)
		month_end = lst;
	else if (year % 100)
		month_end = lst_leap;
	else if (year % 400 == 0)
		month_end = lst_leap;
	return (month_end >> ((day - 1) * 5)) & 0b11111;
}

static int checkVal(std::string val) {
	int dots = 0;
	for (size_t i = 0; i < val.length(); i++) {
		if (val[i] == '.') {
			dots++;
			continue;
		}
		if (val[i] < '0' || val[i] > '9')
			return 0;
	}
	if (dots > 1)
		return 0;
	return 1;
}

void BitcoinExchange::convertVals(std::string path) {
	std::ifstream fd = std::ifstream(path);
	if (!fd.is_open())
		throw std::runtime_error("can't open file" + path);
	std::string line;
	std::getline(fd, line);
	while (std::getline(fd, line)) {
		size_t sep = line.find("|");
		if (sep == std::string::npos) {
			std::cout << "Error: bad input => " << line << std::endl;
			continue;
		}
		std::string date = removeSpaces(line.substr(0, sep));
		std::string val = removeSpaces(line.substr(sep + 1));
		if (!checkVal(val)) {
			std::cout << "Error: not a positive number." << std::endl;
			continue;
		}
		if (!checkDate(date)) {
			std::cout << "Error: bad input => " << line << std::endl;
			continue;
		}
		float nb = std::atof(val.c_str());
		if (nb > 1000) {
			std::cout << "Error: too large a number." << std::endl;
			continue;
		}
		this->getVal(date, nb);
	}
}
BitcoinExchange::~BitcoinExchange() {
}
