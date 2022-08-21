#include <iostream>
using namespace std;
int main()
{
    int l, b, h, volume;
    cout << "Enter the length ,width and height of cuboid";
    cin >> l >> b >> h;
    volume = l * b * h;
    cout << " Volume of cuboid " << volume;
    cout << endl;
    return 0;
}