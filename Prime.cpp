#include<iostream>
using namespace std;

int main()
{
	int n, flag = 0;
	cout << "your number:";
	cin >> n;
	if (n == 1)
	{
		flag = 3;
		cout << "1 is special";
	}
	for (int i = 2; i <= n / 2; i++)
	{
		if (n % i == 0)
		{
			flag = 1;
			break;
		}
	}
	if (flag == 0)
		cout << n << " Is Prime.";
	else if (flag == 1)
		cout << n << " Is Composite.";
}
