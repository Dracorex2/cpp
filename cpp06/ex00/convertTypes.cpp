#include "ScalarConverter.hpp"

static void convertChar(std::string str) {
	char c = str[1];
	std::cout << "char: ";
	if (c >= ' ' && c <= '~')
		std::cout << '\'' << c << '\'' << std::endl;
	else
		std::cout << "Non displayable" << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c) << std::endl;
	std::cout << "double: " << static_cast<double>(c) << std::endl;
}

static void convertInt(std::string str) {
	int i = std::atoi(str.c_str());
	std::cout << "char: ";
	if (i >= 0 && i <= 255) {
		if (i >= ' ' && i <= '~')
			std::cout << '\'' << static_cast<char>(i) << '\'' << std::endl;
		else
			std::cout << "Non displayable" << std::endl;
	}
	else
		std::cout << "impossible" << std::endl;
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << static_cast<float>(i) << std::endl;
	std::cout << "double: " << static_cast<double>(i) << std::endl;
}

static void convertFloat(std::string str) {
	float f = std::atof(str.c_str());
	std::cout << "char: ";
	if (f >= 0 && f <= 255) {
		if (f >= ' ' && f <= '~')
			std::cout << '\'' << static_cast<char>(f) << '\'' << std::endl;
		else
			std::cout << "Non displayable" << std::endl;
	}
	else
		std::cout << "impossible" << std::endl;
	std::cout << "int: " << static_cast<int>(f) << std::endl;
	std::cout << "float: " << f << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(f) << std::endl;
}

static void convertDouble(std::string str) {
	double d = std::atof(str.c_str());
	std::cout << "char: ";
	if (d >= 0 && d <= 255) {
		if (d >= ' ' && d <= '~')
			std::cout << '\'' << static_cast<char>(d) << '\'' << std::endl;
		else
			std::cout << "Non displayable" << std::endl;
	}
	else
		std::cout << "impossible" << std::endl;
	std::cout << "int: " << static_cast<int>(d) << std::endl;
	std::cout << "float: " << static_cast<float>(d) << std::endl;
	std::cout << "double: " << d << std::endl;
}

static void convertNan(void) {
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: nanf" << std::endl;
	std::cout << "double: nan" << std::endl;
}

static void convertPInf(void) {
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: +inff" << std::endl;
	std::cout << "double: +inf" << std::endl;
}

static void convertNInf(void) {
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: -inff" << std::endl;
	std::cout << "double: -inf" << std::endl;
}

void convertType(std::string str, int type) {
	if (type == TYPE_CHAR)
		convertChar(str);
	if (type == TYPE_INT)
		convertInt(str);
	if (type == TYPE_FLOAT)
		convertFloat(str);
	if (type == TYPE_DOUBLE)
		convertDouble(str);
	if (type == TYPE_NAN)
		convertNan();
	if (type == TYPE_PINF)
		convertPInf();
	if (type == TYPE_NINF)
		convertNInf();
}