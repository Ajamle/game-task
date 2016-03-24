//zadatak vjezba

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string mystr;

    cout << "Hello!";
    cout << "What is your name? ";
    getline (cin, mystr);
    cout << "Hello " << mystr ;
    cout << " How old are you? ";
    getline (cin, mystr) ;
    cout << "You are " << mystr << " years old. " ;
    int a;
    cout << "Enter one number: " ;
    cin >> a;
    int b;
    cout << "Enter number b? " ;
    cin >> b;
    cout << "Result is:" << a+b <<endl;
    }
