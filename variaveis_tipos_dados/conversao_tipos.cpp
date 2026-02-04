#include <iostream>

using namespace std;

int main(int argc, char const* argv[]) {
    
    double d1 = 10.5;
    int i1 = 5;

    int i2 = (int)d1; // Conversão explícita (casting)
    double d2 = (double)i1; // Conversão explícita (casting)

    cout << "Valor de d1: " << d1 << endl;
    cout << "Valor de i1: " << i1 << endl;

    int i3 = int(d1); // Outra forma de conversão explícita
    double d3 = double(i1); // Outra forma de conversão explícita

    cout << i3 << endl;
    cout << d3 << endl;

    string s1 = "123";
    string s2 = "123.456";

    int i4 = stoi(s1); // Converte string para int
    double d4 = stod(s2); // Converte string para double

    cout << i4 << endl;
    cout << d4 << endl;

    // existem várias fórmas de conversão de string> padrão s (string) - to - i (int), l (long), ll (long long), f (float), d (double), ld (long double)

    return 0;
}