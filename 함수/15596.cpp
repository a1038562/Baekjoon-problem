#include <vector>
#include <iostream>

long long sum(std::vector<int>& a) {
	long long result = 0;
	for (int i = 0;i < a.size();i++)
	{
		result += a[i];
	}
	long long ans = result;
	return ans;
}

/*
int main()
{
	std::vector<int> a;
	a = { 1,2,3,4,5,6,7,8,9,10 };
	long long ans = sum(a);
	std::cout << ans << std::endl;
	return 0;
}
*/