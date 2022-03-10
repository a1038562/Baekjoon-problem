#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int x, result = 0;;
	cin >> x;

	for (int i = 1; i <= x;i++)
	{
		int num = i;
		vector<int>nums, n;

		while (num > 0)
		{
			nums.push_back(num % 10);
			num /= 10;
		}

		for (int j = 0;j < nums.size();j++)
		{
			if (j < nums.size() - 1)
			{
				int a = nums[j] - nums[j + 1];
				n.push_back(a);
			}

			if (nums.size() == 1)
				result++;
		}
		int c = 0;
		vector<int>::iterator it;

		if (n.size() > 0)
		{
			it = find(n.begin(), n.end(), n[0]);

			for (int k = 0;k < n.size();k++)
			{
				if (*it == n[k])
					c++;
			}

			if (c == n.size())
				result++;
		}
	}
	cout << result << endl;
	return 0;
}