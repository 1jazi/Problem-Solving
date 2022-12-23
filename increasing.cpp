#include <bits/stdc++.h>
using namespace std;
int main()
{

	int t;
	cin >> t;

	while (t--)
	{
		int n;
		cin >> n;
		set<int> array;
		for (int i = 0; i < n; i++)
		{
			int x;
			cin >> x;
			array.insert(x);
			// cin >> array[i];
		}
		int count = 0;
		// sort(array, array + n);
		/*for (int i = 0; i < n; i++)
		{
			cout << array[i] << " ";
			if (array[i] == array[i + 1])
				count++;
		}
		if (count >= 1)
			printf("NO\n");
		else
			printf("YES\n");*/
		// cout << array.size() << "------------";
		if (array.size() == n)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
	return 0;
}
