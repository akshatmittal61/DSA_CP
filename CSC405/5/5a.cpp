#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s1, s2, temp;
	cout << " Enter string 1: ";
	cin >> s1;
	cout << " Enter string 2: ";
	cin >> s2;
	temp = s2;
	s2 = s1;
	s1 = temp;
	cout << "\n After swapping: ";
	cout << "\n String 1: " << s1;
	cout << "\n String 2: " << s2;
	return 0;
}
// Akshat Mittal
// 20107