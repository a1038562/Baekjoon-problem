#include <iostream>
using namespace std;

int main()
{
	int A;

	cin >> A;

	if (A > 89)
	{
		cout << "A" << endl;

	}
	else if (79 < A && A< 90)
	{
		cout << "B" << endl;
	}
	else if (69 < A && A < 80)
	{
		cout << "C" << endl;
	}
	else if (59 < A && A < 70)
	{
		cout << "D" << endl;
	}
	else
	{
		cout << "F" << endl;
	}
}