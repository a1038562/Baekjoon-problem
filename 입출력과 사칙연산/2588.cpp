#include <iostream>
using namespace std;

int main() {
	int A, B;

	cin >> A >> B;

	int x = B / 100;
	int y = (B % 100) / 10;
	int z = B % 10;

	cout << A * z << endl << A * y << endl << A * x << endl << A * B;
}