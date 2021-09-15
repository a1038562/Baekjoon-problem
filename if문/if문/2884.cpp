#include <iostream>
using namespace std;

int main()
{
	int A, B;

	cin >> A >> B;

	if (B >= 45)
	{
		cout << A << " " << B - 45 << endl;
	}
	else if (A > 0 && B < 45)
	{
		cout << A-1 << " " << B + 15 << endl;
	}
	else if (A == 0 && B < 45)
	{
		cout << 23 << " " << B + 15 << endl;
	}
}