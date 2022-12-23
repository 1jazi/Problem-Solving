#include <iostream>
using namespace std;

class jazi
{
public:
	int age;
	void print()
	{
		cout << "Hello" << endl;
	}
};

int main()
{
	jazi jazi1;
	jazi1.age = 20;
	cout << jazi1.age << endl;
	jazi1.print();

	int num;
	cout << "Enter an array size : " << endl;
	cin >> num;
	int count = 0;
	int array[num];
	cout << "Enter the elements :" << endl;
	for (int i = 0; i < num; i++)
	{

		cin >> array[i];

		count += array[i];
	}
	cout << "The sum of array is -> " << count << endl;

	return 0;
}
