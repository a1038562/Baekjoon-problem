#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int num;
	vector<int> list;
	cin >> num;

	for (int i = 0;i < num;i++)
	{
		int n;
		cin >> n;
		list.push_back(n);
	}
	sort(list.begin(), list.end());

	cout << list[0] << " " << list[num-1] << endl;
}