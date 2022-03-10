#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	vector<int> list, copy;
	int max = 0, index;

	for (int i = 0;i < 9;i++)
	{
		int n;
		cin >> n;
		list.push_back(n);
	}

	for (int i = 0;i < list.size();i++)
	{
		if (list[i] > max)
		{
			max = list[i];
			index = i;
		}
	}
	cout << max << "\n" << index + 1 << endl;

	return 0;
}