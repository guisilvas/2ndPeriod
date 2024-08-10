#include <iostream>

using namespace std;

int main()
{
    int x=2, y=3;
    int sum, sub, mult, remainder, quoc;
    float div;

    sum = x+y;
    cout << "x + y = " << sum << "\n";
    sub = x-y;
    cout << "x - y = " << sub << "\n";
    mult = x*y;
    cout << "x * y = " << mult << "\n";
    div = x/y;
    cout << "x / y = " << div << "\n";
    remainder = x%y;
    cout << "x % y = " << remainder << "\n";
    quoc = x/y;
    cout << "x / y = " << quoc << "\n";

    return 0;
}