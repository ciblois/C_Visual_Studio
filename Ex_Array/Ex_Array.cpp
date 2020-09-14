// Ex_Array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    // Primeira parte... entendendo as variáveis simples

    //int i = 0;
    
    //cout << i <<  "\n";
    //cout << sizeof(i) << "\n\n";

    //float f = 0;
    //cout << f << "\n";
    //cout << sizeof(i) << "\n\n";

    //double d = 0;
    //cout << d << "\n";
    //cout << sizeof(d) << "\n\n";

    //bool b = true;
    //cout << b << "\n";
    //cout << sizeof(b) << "\n\n";

    //string s = "Ana Maria";
    //cout << s << "\n";
    //cout << sizeof(s) << "\n\n";

    //cout << "\n\n\n"; 

    int meuArray[4];

    meuArray[0] = 754;
    meuArray[3] = 444;

    cout << meuArray[0] << "\n";
    cout << meuArray[1] << "\n";
    cout << meuArray[2] << "\n";
    cout << meuArray[3] << "\n";

    cout << sizeof(meuArray) << "\n";
    cout << sizeof(meuArray[2]) << "\n";

    int soma = 0;

    for (size_t i = 0; i < 4; i++)
    {
        soma = soma + meuArray[i];
    }

    //----------------------------------------------------------------------------------------------

    int minhaMatriz[4][4]; //declaração

    minhaMatriz[0][0] = 1; //atribuição
    minhaMatriz[0][1] = 1; //atribuição
    minhaMatriz[1][0] = 1; //atribuição
    minhaMatriz[1][1] = 1; //atribuição
        
    int somaB = 0;

    for (size_t i = 0; i <= 1; i++)
    {
        for (size_t j = 0; j <= 1; j++)
        {
            somaB = somaB + minhaMatriz[i][j];
        }
    }

    cout << somaB;

    cout << "\n\n\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
