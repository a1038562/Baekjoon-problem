#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

int main()
{
	double n;
	cin >> n;
	for (int i = 0;i < n;i++)
	{
		double stu, ave, per, num = 0, score = 0, sum = 0;
		vector<double> list;
		cin >> stu;

		for (int j = 0;j < stu;j++)
		{
			cin >> score;
			list.push_back(score);
			sum += score;
		}

		ave = sum / stu;

		for (int k = 0;k < list.size();k++)
		{
			if (list[k] > ave)
				num++;
		}
		per = (num / stu) * 100;
		cout << fixed;
		cout.precision(3);
		cout << per << "%" << endl;
	}
	return 0;
}