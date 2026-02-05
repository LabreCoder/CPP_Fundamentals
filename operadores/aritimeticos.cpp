#include <iostream>

using namespace std;

int main(int argc, char const* argv[]) {

    int a = 10;
    int b = 3;

    // Operadores Aritméticos
    cout << "Soma: " << (a + b) << endl;          // Adição
    cout << "Subtração: " << (a - b) << endl;     // Subtração
    cout << "Multiplicação: " << (a * b) << endl; // Multiplicação
    cout << "Divisão: " << (a / b) << endl;       // Divisão inteira
    cout << "Divisão (float): " << (static_cast<float>(a) / b) << endl; // Divisão com conversão para float
    cout << "Módulo: " << (a % b) << endl;        // Resto da divisão

    a--; // Decremento
    cout << "Decremento de a: " << a << endl;
    b++; // Incremento
    cout << "Incremento de b: " << b << endl;
    
    return 0;
}