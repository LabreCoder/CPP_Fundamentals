#include <iostream>

using namespace std;

int main(int argc, char const* argv[])
{
    // int - 4 bytes
    // -2, 147, 345, 901
    int i1 = 50;
    cout << "Valor de i1: " << i1 << endl;
    cout << "Tamanho de i1: " << sizeof(i1) << " bytes" << endl;

    // long int - 8 bytes
    // -9, 223, 372, 036, 854, 775, 808
    long int i2 = 5000000000;
    cout << "Valor de i2: " << i2 << endl;
    cout << "Tamanho de i2: " << sizeof(i2) << " bytes" << endl;    

    // short int - 2 bytes
    // -32, 768
    short int i3 = 30000;   
    cout << "Valor de i3: " << i3 << endl;
    cout << "Tamanho de i3: " << sizeof(i3) << " bytes" << endl;    

    // float - 4 bytes
    // 6 a 7 dígitos de precisão
    float f1 = 5.99f;
    cout << "Valor de f1: " << f1 << endl;
    cout << "Tamanho de f1: " << sizeof(f1) << " bytes" << endl;

    // double - 8 bytes
    // 15 dígitos de precisão
    double d1 = 19.99;
    cout << "Valor de d1: " << d1 << endl;
    cout << "Tamanho de d1: " << sizeof(d1) << " bytes" << endl;

    // char - 1 byte
    // armazena um único caractere/ símbolo
    char c1 = 'A';
    cout << "Valor de c1: " << c1 << endl;
    cout << "Tamanho de c1: " << sizeof(c1) << " bytes" << endl;

    // string - depende da quantidade de caracteres
    // armazena uma sequência de caracteres/ símbolos
    string s1 = "Hello";
    cout << "Valor de s1: " << s1 << endl;
    cout << "Tamanho de s1: " << sizeof(s1) << " bytes" << endl;

    // bool - 1 byte
    // true ou false
    bool b1 = true;
    cout << "Valor de b1: " << b1 << endl;
    cout << "Tamanho de b1: " << sizeof(b1) << " bytes" << endl;

    int i4 = -20;
    cout << i4 << endl;

    unsigned int i5 = 20;
    cout << "Valor de i5: " << i5 << endl;

    return 0;

}