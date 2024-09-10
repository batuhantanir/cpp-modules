#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
	std::cout << "Default constructor called" << std::endl;
}
ScalarConverter::ScalarConverter(ScalarConverter &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

ScalarConverter &ScalarConverter::operator=(ScalarConverter &src)
{
	std::cout << "Assignment operator called" << std::endl;
	if (this != &src)
		(void)src;
	return (*this);
}

ScalarConverter::~ScalarConverter()
{
	std::cout << "Default destructor called" << std::endl;
}

void ScalarConverter::convert(std::string str)
{
	if (pseudoStr(str))
		return;
	if (isInt(str))
		strToInt(str);
	else if (isChar(str))
		strToChar(str);
	else if (isFloat(str))
		strToFloat(str);
	else if (isDouble(str))
		strToDouble(str);
	else
		std::cout << "Invalid input" << std::endl;
}

bool ScalarConverter::isChar(std::string str)
{
	if (std::isprint(str[0]) && str.length() == 1)
		return true;
	return false;
}
bool ScalarConverter::isInt(std::string str)
{
	long num;
	int i = (str[0] == '+' || str[0] == '-') ? 1 : 0;

	for (; str[i]; i++)
	{
		if (!std::isdigit(str[i]))
			return false;
	}
	num = std::atol(str.c_str());
	if (num > std::numeric_limits<int>::max() || num < std::numeric_limits<int>::min())
		return false;
	return true;
}

bool ScalarConverter::isFloat(std::string str)
{
	size_t i;
	size_t dot_count;

	dot_count = 0;
	i = 0;
	if (str[0] == '-' || str[0] == '+')
		i = 1;
	while (str[i] != '\0')
	{
		if (!std::isdigit(str[i]))
		{
			if (str[i] == '.')
			{
				dot_count++;
				if (dot_count > 1 || std::isdigit(str[i + 1]) == 0 || str[i + 1] == '\0')
					return (false);
			}
			else if ((str[i] == 'F' || str[i] == 'f') && dot_count == 1 && str[i + 1] == '\0')
				return (true);
			else
				return (false);
		}
		i++;
	}
	return (false);
}

bool ScalarConverter::isDouble(std::string str)
{
	size_t i;
	size_t dot_count;

	dot_count = 0;
	i = 0;
	if (str[0] == '-' || str[0] == '+')
		i = 1;
	while (str[i] != '\0')
	{
		if (!std::isdigit(str[i]))
		{
			if (str[i] == '.')
			{
				dot_count++;
				if (dot_count > 1 || std::isdigit(str[i + 1]) == 0 || str[i + 1] == '\0')
					return (false);
			}
			else if ((str[i] == 'F' || str[i] == 'f') && dot_count == 1 && str[i + 1] == '\0')
				return (false);
			else
				return (false);
		}
		i++;
	}
	return (true);
}

void ScalarConverter::strToChar(std::string str)
{
	if (str.length() == 1)
	{
		char c = str[0];
		std::cout << "char: " << "'" << c << "'" << std::endl;
		std::cout << "int: " << static_cast<int>(c) << std::endl;
		std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
	}
	else
	{
		std::cout << "char: " << "Non displayable" << std::endl;
		std::cout << "int: " << "Non displayable" << std::endl;
		std::cout << "float: " << "Non displayable" << std::endl;
		std::cout << "double: " << "Non displayable" << std::endl;
	}
}

void ScalarConverter::strToInt(std::string str)
{
	long num = std::atol(str.c_str());
	std::cout << "char: ";
	if (num < std::numeric_limits<char>::min() || num > std::numeric_limits<char>::max())
		std::cout << "impossible" << std::endl;
	else if (std::isprint(static_cast<char>(num)))
		std::cout << "'" << static_cast<char>(num) << "'" << std::endl;
	else
		std::cout << "Non displayable" << std::endl;
	std::cout << "int: " << static_cast<int>(num) << std::endl;
		std::cout << "float: " << std::fixed << std::setprecision(countDecimalPlaces(num)) << static_cast<float>(num) << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(countDecimalPlaces(num)) << static_cast<double>(num) << std::endl;
}

void ScalarConverter::strToFloat(std::string str)
{
	float num = std::atof(str.c_str());
	std::cout << "char: ";
	if (num < std::numeric_limits<char>::min() || num > std::numeric_limits<char>::max())
		std::cout << "impossible" << std::endl;
	else if (std::isprint(static_cast<char>(num)))
		std::cout << "'" << static_cast<char>(num) << "'" << std::endl;
	else
		std::cout << "Non displayable" << std::endl;
	std::cout << "int: ";
	if (num < std::numeric_limits<int>::min() || num > std::numeric_limits<int>::max())
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(num) << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(countDecimalPlaces(num)) << num << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(countDecimalPlaces(num)) << static_cast<double>(num) << std::endl;
}

void ScalarConverter::strToDouble(std::string str)
{
	double num = std::atof(str.c_str());
	std::cout << "char: ";
	if (num < std::numeric_limits<char>::min() || num > std::numeric_limits<char>::max())
		std::cout << "impossible" << std::endl;
	else if (std::isprint(static_cast<char>(num)))
		std::cout << "'" << static_cast<char>(num) << "'" << std::endl;
	else
		std::cout << "Non displayable" << std::endl;
	std::cout << "int: ";
	if (num < std::numeric_limits<int>::min() || num > std::numeric_limits<int>::max())
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(num) << std::endl;
	std::cout << "float: ";
	if (num < -std::numeric_limits<float>::max() || num > std::numeric_limits<float>::max())
		std::cout << "impossible" << std::endl;
	else
		std::cout << std::fixed << std::setprecision(countDecimalPlaces(num)) << static_cast<float>(num) << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(countDecimalPlaces(num)) << num << std::endl;
}

bool ScalarConverter::pseudoStr(std::string str)
{
	if (str == "nan" || str == "nanf" || str == "+inf" || str == "+inff" || str == "-inf" || str == "-inff")
	{
		std::cout << "char: " << "impossible" << std::endl;
		std::cout << "int: " << "impossible" << std::endl;
		std::cout << "float: " << str << std::endl;
		std::cout << "double: " << str << std::endl;
		return true;
	}
	return false;
}

bool ScalarConverter::isFloatingPoint(std::string str)
{
	size_t i = 0;
	size_t dot_count = 0;

	if (str[0] == '-' || str[0] == '+')
		i = 1;
	for (; str[i]; i++)
	{
		if (!std::isdigit(str[i]))
		{
			if (str[i] == '.')
			{
				dot_count++;
				if (dot_count > 1 || !std::isdigit(str[i + 1]) || str[i + 1] == '\0')
					return (false);
			}
			else if ((str[i] == 'F' || str[i] == 'f') && dot_count == 1 && str[i + 1] == '\0')
				return (true);
			else
				return (false);
		}
	}
	return (true);
}

int ScalarConverter::countDecimalPlaces(double num)
{
	std::string numStr = std::to_string(num);
	std::size_t dotPos = numStr.find('.');
	if (dotPos == std::string::npos)
	{
		return 0;
	}

	std::size_t lastNonZero = numStr.find_last_not_of('0');
	return (lastNonZero > dotPos) ? lastNonZero - dotPos : 0;
}
