#include "ScalarConverter.hpp"

static int isChar(std::string str) {
	if (str.length() == 3 && str[0] == '\'' && str[2] == '\'') {
		return 1;
	}
	return 0;
}

static int isInt(std::string str) {
	for (size_t i = 0; i < str.length(); i++)
		if ((str[i] < '0' || str[i] > '9') && str[i] != '-')
			return 0;
	return 1;
}

static int isFloat(std::string str) {
	size_t i = 0;
	int dots = 0;
	if (str[0] == '-')
		i++;
	for (; i < (str.length() - 1); i++) {
		if (str[i] == '.') {
			if ((i > 0 && i < str.length()) &&
				((str[i - 1] < '0' || str[i - 1] > '9') || (str[i + 1] < '0' || str[i + 1] > '9')))
				return 0;
			dots++;
			i++;
		}
		if (str[i] < '0' || str[i] > '9')
			return 0;
	}
	if (dots > 1)
		return 0;
	if (str[str.length() - 1] == 'f')
		return 1;
	return 0;
}

static int isDouble(std::string str) {
	size_t i = 0;
	int dots = 0;
	if (str[0] == '-')
		i++;
	for (; i < str.length(); i++) {
		if (str[i] == '.') {
			if ((i > 0 && i < str.length()) &&
				((str[i - 1] < '0' || str[i - 1] > '9') || (str[i + 1] < '0' || str[i + 1] > '9')))
				return 0;
			dots++;
			i++;
		}
		if (str[i] < '0' || str[i] > '9')
			return 0;
	}
	if (dots > 1)
		return 0;
	return 1;
}

int isPInf(std::string str) {
	if (str == "-inff" || str == "-inf")
		return 1;
	return 0;
}

int isNInf(std::string str) {
	if (str == "+inff" || str == "+inf")
		return 1;
	return 0;
}

int isNan(std::string str) {
	if (str == "nan" || str == "nanf")
		return 1;
	return 0;
}

int getType(std::string str) {
	if (isChar(str))
		return TYPE_CHAR;
	else if (isInt(str))
		return TYPE_INT;
	else if (isFloat(str))
		return TYPE_FLOAT;
	else if (isDouble(str))
		return TYPE_DOUBLE;
	else if (isNan(str))
		return TYPE_NAN;
	else if (isPInf(str))
		return TYPE_PINF;
	else if (isNInf(str))
		return TYPE_NINF;
	else
		return 0;
}
