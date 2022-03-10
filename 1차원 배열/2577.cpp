#include <iostream>

using namespace std;

int main()
{
	int a, b, c, mul, num;
	int arr[10] = { };
	cin >> a >> b >> c;
	mul = a * b * c;

	while (mul > 0)
	{
		num = mul % 10;
		arr[num]++;
		mul /= 10;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}

	return 0;
}