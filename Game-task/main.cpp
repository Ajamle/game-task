#include <iostream>

using namespace std;

int main()
{
    int a = rand() % 100;
    int b;
    int numofguesses = 0;
    cout << "Enter one number: " ;
    cin >> b;


    while (b != a)
    {
        if (a > b)
        {cout << "Secret number is bigger!";}
                if (a < b)
        {cout << "Secret number is smaller!"; }
               if ( b%2 == 0)
        { cout << b << " is even.";}
              else {cout << b << " is odd."; }
        cout << "Enter one number: " ;
        cin >> b;
numofguesses++;
    }
    if (b == a)
    {
        cout <<  "You won!";

    }
    numofguesses++;
            {cout << "You guessed after " << numofguesses << "times";}
    return 0;
}
