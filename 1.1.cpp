//program checks whether the given string is character-unique

#include <iostream>
#include <string>

bool char_unique(std::string const & str);

int main()
{
	std::string str;
	std::cout << "Enter the first string: ";
	std::getline(std::cin, str);
	std::cout.setf(std::ios_base::boolalpha);
	std::cout << "The string is character-unique: " << char_unique(str) << std::endl;

	return 0;
};

bool char_unique(std::string const & str)
{
	int bitset = 0;
	int runner = 1;
	for (int i = 0; i < str.size(); ++i)
	{
		char ch = str[i];
		runner <<= ((ch - 65) % 32);
		if ((bitset & runner) != 0)
		{
			return false;
		};
		bitset |= runner;
		runner = 1;
	};	
	return true;
};

