#include <iostream>

using namespace std;

int main()
{
    int a = rand() % 100;
    int b;
    cout << "Enter one number: " ;
    cin >> b;

    while (b != a)
    {
        if (a > b)
        {cout << "Secret number is bigger!";}
        if (a < b)
        {cout << "Secret number is smaller!"; }
        cout << "Enter one number: " ;
        cin >> b;


    }
    if (b == a)
    {
        cout <<  "You won!";
    }
    return 0;
}
