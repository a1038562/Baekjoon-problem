#include <iostream>

using namespace std;

int main()
{
	int n, cnt = 0;
	int arr[10] = { };
	int num[42] = { };

	for (int i = 0; i < 10; i++)
	{
		cin >> n;
		arr[i] = n % 42;
	}

	for (int i = 0;i < 10;i++)
	{
		num[arr[i]]++;
	}

	for (int i = 0;i < 42;i++)
	{
		if (num[i] != 0)
			cnt++;
	}
	cout << cnt << endl;

	return 0;
}