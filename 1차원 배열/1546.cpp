#include <iostream>

using namespace std;

int main()
{
	double n, num, average, sum = 0, max = 0;
	double arr[1000];
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> num;
		arr[i] = num;
	}

	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}

	for (int i = 0;i < n;i++)
	{
		sum += arr[i];
	}

	average = (sum / max * 100) / n;
	cout << average << endl;

	return 0;
}