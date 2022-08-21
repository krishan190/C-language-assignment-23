#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter the two numbers:";
    cin >> a >> b;
    if (a > b)
        cout << " a is maximum " << a;
    else
        cout << " b is maximum " << b;
    cout << endl;
}