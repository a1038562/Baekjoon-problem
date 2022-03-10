#include <iostream>
#include <vector>
#include <algorithm>
#define max 10000

using namespace std;

vector<int> not_self_num()
{
	vector<int> sums;
	for (int i = 1;i < max;i++)
	{
		vector<int> num = { 0 };
		int sum = 0;
		int current = i;
		num.push_back(current);

		while (current > 0)
		{
			num.push_back(current % 10);
			current /= 10;
		}

		for (int j = 0;j < num.size();j++)
		{
			sum += num[j];
		}

		if (sum > 0 && sum < max)
			sums.push_back(sum);
	}
	return sums;
}

vector<int>self_num(vector<int>sums)
{
	vector<int> self_n;
	for (int i = 1;i < max;i++)
	{
		vector<int>::iterator it = find(sums.begin(), sums.end(), i);
		if (it == sums.end())
		{
			self_n.push_back(i);
		}
	}
	return self_n;
}

int main()
{
	vector<int> sums;
	sums = not_self_num();

	sort(sums.begin(), sums.end());
	sums.erase(unique(sums.begin(), sums.end()), sums.end());

	vector<int>self_n = self_num(sums);

	for (int i = 0;i < self_n.size();i++)
	{
		cout << self_n[i] << endl;
	}
	return 0;
}