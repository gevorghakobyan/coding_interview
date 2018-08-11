//check 2 strings being one away from each other (removing, adding or
//replacing one character of one of the strings may return the second one)

#include <iostream>
#include <string>

bool if_ins_or_rem(std::string& str1, std::string& str2);
bool if_replace(std::string& str1, std::string& str2);

int main()
{
	std::string str1;
	std::string str2;
	std::cout << "Enter the first string: ";
	std::getline(std::cin, str1);
	std::cout << "Enter the second string: ";
	std::getline(std::cin, str2);
	std::cout.setf(std::ios_base::boolalpha);
	std::cout << "The strings are one away from each other: " << (if_ins_or_rem(str1, str2) != if_replace(str1, str2)) << std::endl;
	return 0;
};

bool if_ins_or_rem(std::string& str1, std::string& str2)
{
	std::string m_str1;
	std::string m_str2;
	if (str1.size() - str2.size() == 1)
	{
		m_str1 = str1;
		m_str2 = str2;
	}
	else if (str2.size() - str1.size() == 1)
	{
		m_str1 = str2;
		m_str2 = str1;
	}
	else
	{
		return false;
	};
	int char_index = 0;
	while (char_index < m_str2.size() && m_str1[char_index] == m_str2[char_index])
	{
		++char_index;
	};
	while (char_index < m_str2.size() && m_str2[char_index] == m_str1[char_index + 1])
	{
		++char_index;
	};
	if (char_index == m_str2.size())
	{
		return true;
	};
	return false;
};

bool if_replace(std::string& str1, std::string& str2)
{
	if (str1.size() != str2.size())
	{
		return false;
	};
	int char_count = 0;
	while (char_count < str1.size() && str1[char_count] == str2[char_count])
	{
		++char_count;
	};
	++char_count;
	while (char_count < str1.size() && str1[char_count] == str2[char_count])
	{
		++char_count;
	};
	if (char_count == str1.size())
	{
		return true;
	}
	else
	{
		return false;
	};
};
