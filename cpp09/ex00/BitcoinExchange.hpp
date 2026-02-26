#ifndef BITCOINEXCHANGE_CPP
#define BITCOINEXCHANGE_CPP

#include <map>
#include <string>
class BitcoinExchange {
	private:
		BitcoinExchange();
		BitcoinExchange(BitcoinExchange &cpy);
		BitcoinExchange &operator=(BitcoinExchange &other);
		std::map<std::string, float> data;
		void getVal(std::string date, float num);
	public:
		BitcoinExchange(std::string path);
		~BitcoinExchange();
		void convertVals(std::string path);
};

#endif
