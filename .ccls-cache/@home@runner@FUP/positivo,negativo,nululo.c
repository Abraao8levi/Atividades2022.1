#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x;
    // Declaro a variável que vou usar
    
    cin >> x;
    // Leio o inteiro

    if(x < 0) // Se for menor que 0 é negativo
    {
        cout << "negativo\n";
    }
    else if(x == 0) // Ou se for nulo
    {
        cout << "nulo\n";
    }
    else // Caso não seja nem menor que 0 ou nulo, é positivo
    {
        cout << "positivo\n";
    }

    return 0;
}
