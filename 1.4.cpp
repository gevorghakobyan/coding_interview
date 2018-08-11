//program checks if the given string is a permutation of a palindrome

#include <iostream>
#include <string>

bool perm_pal(std::string const & str);

int main()
{
	std::string str;
	std::cout << "Enter the first string: ";
	std::getline(std::cin, str);
	std::cout.setf(std::ios_base::boolalpha);
	std::cout << "The string is a permutation of a palindrome: " << perm_pal(str) << std::endl;
	return 0;
}

bool perm_pal(std::string const & str)
{
	int str_arr[26] = {0};
	for (int i = 0; i < str.size(); ++i)
	{
		if ((str[i] - 65) % 32 < 26)
		{
			++str_arr[(str[i] - 65) % 26];
		};	
	};
	int perm_pal = 2;
	for (int i = 0; i < 26; ++i)
	{
		if (str_arr[i] % 2 != 0)
		{
			--perm_pal;
		};
	};
	return (perm_pal > 0);	
};

