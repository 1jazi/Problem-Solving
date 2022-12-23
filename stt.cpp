#include <bits/stdc++.h>
using namespace std;
#define ll long long
int oneDigit(int num)
{
	return (num >= 0 && num < 10);
}

bool isPalindrom(int num, int *dupNum)
{

	if (oneDigit(num))
		return (num == (*dupNum) % 10);

	if (!isPalindrom(num / 10, dupNum))
		return false;

	*dupNum /= 10;

	return (num % 10 == (*dupNum) % 10);
}

int solve(int num)
{

	if (num < 0)
		num = -num;
	int *dupNum = new int(num);
	return isPalindrom(num, dupNum);
}
int main()
{

	int count = 0, countInput = 0, checkIf = 0;

	while (1)
	{
		ll numbers;
		cin >> numbers;
		countInput++;
		int check = solve(numbers);
		checkIf = check;
		if (check == 1)
		{
			cout << ">> " << numbers << endl;
			count++;
		}
		if (numbers >= 99999 || numbers <= 0)
		{
			break;
		}
	}
	if (countInput == 1 && checkIf == 1)
	{
		cout << 0 << endl;
		return 0;
	}
	//}
	cout << count << endl;
	// cout << countInput << endl;
	return 0;
}
