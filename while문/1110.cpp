#include <iostream>

using namespace std;

int main(void)
{
    int a, b, cnt = 0;
    cin >> a;
    b = a;
    while (1)
    {
        int tens = a / 10;
        int units = a % 10;
        int sum = tens + units;
        int num = 10 * units + sum % 10;
        cnt++;
        
        if (b == num)
        {
            cout << cnt << endl;
            break;
        }
        a = num;
    }
}