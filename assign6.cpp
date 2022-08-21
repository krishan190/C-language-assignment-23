#include <iostream>
using namespace std;
int main()
{
    int a, b, c, sum;
    float avg;
    cout << "Enter the three numbers:";
    cin >> a >> b >> c;
    sum = a + b + c;
    avg = sum / 3;
    cout << "Average of the three numbers;" << avg;
    cout << endl;
}