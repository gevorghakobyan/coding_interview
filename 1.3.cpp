//program replaces spaces in a given string with characters "%20"

#include <iostream>
#include <string>

std::string& mutate(std::string& str, std::string& mutated_str);

int main()
{
	std::string str;
	std::string mutated_str = "";
	std::cout << "Enter the string: ";
	std::getline(std::cin, str);
	std::cout << mutate(str, mutated_str) << std::endl;
	return 0;
};

std::string& mutate(std::string& str, std::string& mutated_str)
{
	for (int i = 0; i < str.size(); ++i)
	{
		if (str[i] != 32)
		{
			mutated_str += str[i];
		}
		else
		{
			mutated_str += "%20";
		};
	};
	return mutated_str;
};
