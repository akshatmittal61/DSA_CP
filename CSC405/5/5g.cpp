#include <iostream>
#include <cstring>
#include <string.h>
using namespace std;
class CompareString
{
public:
	char str[25];
	CompareString(char str1[])
	{
		strcpy(this->str, str1);
	}
	int operator==(CompareString s2)
	{
		return strcmp(str, s2.str) == 0 ? 1 : 0;
	}
	int operator<=(CompareString s3)
	{
		return strlen(str) <= strlen(s3.str) ? 1 : 0;
	}
	int operator>=(CompareString s3)
	{
		return strlen(str) >= strlen(s3.str) ? 1 : 0;
	}
};
void compare(CompareString s1, CompareString s2)
{
	if (s1 == s2)
		cout << "\n " << s1.str << " is equal to " << s2.str << endl;
	else
	{
		cout << "\n " << s1.str << " is not equal to " << s2.str << endl;
		if (s1 >= s2)
			cout << "\n " << s1.str << " is greater than " << s2.str << endl;
		else
			cout << "\n " << s2.str << " is greater than " << s1.str << endl;
	}
}
int main()
{
	char str1[10];
	cout << " String 1: ";
	cin.getline(str1, 10);
	char str2[10];
	cout << " String 2: ";
	cin.getline(str2, 10);
	CompareString s1(str1), s2(str2);
	compare(s1, s2);
	return 0;
}
// Akshat Mittal
// 20107