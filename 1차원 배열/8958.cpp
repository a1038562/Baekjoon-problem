#include <iostream>

using namespace std;

int result(string& s)
{
	int sum = 0, cumulative = 1;
	for (int i = 0;i < s.size();i++)
	{
		if (s[i] == 'O')
		{
			sum += cumulative;
			cumulative++;
		}
		else
			cumulative = 1;
	}
	return sum;
}

int main()
{
	int n;
	string s;
	cin >> n;
	for (int i = 0;i < n;i++)
	{
		cin >> s;
		int score = result(s);
		cout << score << endl;
	}
	return 0;
}