#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter two numbers:";
    cin >> a >> b;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "Swap the numbers:" << a << " " << b;
    cout << endl;
}