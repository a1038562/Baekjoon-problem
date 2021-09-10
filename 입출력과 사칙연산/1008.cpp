#include <iostream>
using namespace std;

int main() {
	cout.precision(9);
	double a, b;
	cin >> a >> b;
	cout << fixed;
	cout << a / b << endl;
}