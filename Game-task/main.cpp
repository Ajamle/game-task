#include <iostream>

using namespace std;

int main()
{
    int a = 52;
    cout << "Enter one number: " ;
    cin >> a;
    while (a > 51);
    {
    cout << "Secret number is bigger!";
    }
    while (a < 53);
    {
    cout << "Secret number is smaller!";
    }
    while (a = a);
    {
    cout <<  "You won!";
    }
    return 0;
}
