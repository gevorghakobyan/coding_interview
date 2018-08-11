//program checks whether the two strings are a permutation to each other


#include <iostream>
#include <string>

int* str_to_arr(std::string const & str);
bool arr_compare(int* arr1, int* arr2);

int main()
{
	std::string str1;
	std::string str2;
	std::cout << "Enter the first string: ";
	std::getline(std::cin, str1);
	std::cout << "Enter the second string: ";
	std::getline(std::cin, str2);
	std::cout.setf(std::ios_base::boolalpha);
	std::cout << "The 2nd string is a permutation of the 1st: " << arr_compare(str_to_arr(str1), str_to_arr(str2)) << std::endl;
	return 0;
}

int* str_to_arr(std::string const & str)
{
	int* str_arr = new int[26];
	for (int i = 0; i < str.size(); ++i)
	{
		if ((str[i] - 65) % 32 < 26)
		{
			++str_arr[(str[i] - 65) % 26];
		};	
	};
	return str_arr;
};

bool arr_compare(int* arr1, int* arr2)
{
	for (int i = 0; i < 26; ++i)
	{
		if (arr1[i] != arr2[i])
		{
			return false;
		};
	};
	return true;
};
