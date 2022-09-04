// Akshat Mittal
// 20107
// Ques 1

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int n;
	float standard, sum = 0, sumsqr = 0, mean, k, variance = 0.0, a[100];
	cout << " Enter n : ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "\n Number " << i + 1 << " : ";
		cin >> a[i];
		sum += a[i];
	}
	mean = sum / n;
	sumsqr = 0;
	for (int i = 0; i < n; i++)
	{
		k = a[i] - mean;
		sumsqr += k * k;
	}
	variance = sumsqr / n;
	standard = sqrt(variance);
	cout << "\n Mean = " << mean;
	cout << "\n Variance = " << variance;
	cout << "\n Standard deviation = " << standard << endl;
	return 0;
}