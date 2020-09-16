// Task_Functions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int sum(int a, int b, int c)
{
    return a + b + c;
}

int myarray[3]; //variavel global

void InicializaArray()
{
    for (size_t i = 0; i <= 2; i++)
    {
        cout << "Type a number: ";
        cin >> myarray[i];
    }
}
void ListaArray()
{
    for (size_t i = 0; i <= 2; i++)
    {
        cout << myarray[i] << ", ";
    }
}

int main()
{
    int n1, n2, n3, s;
    cout << "Let's sum 3 numbers!\n\n";
    cout << ("Type number: ");
    cin >> n1;
    cout << ("Type number: ");
    cin >> n2;
    cout << ("Type number: ");
    cin >> n3;

    s = sum(n1, n2, n3);

    cout << "\n\n The sum is " << s << "\n\n";

    cout << "Let's make an array! \n\n";
    InicializaArray();
    cout << "Now this is the array: ";
    ListaArray();
}