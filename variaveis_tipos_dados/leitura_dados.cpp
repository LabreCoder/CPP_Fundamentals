#include <iostream>
#include <limits> // Inclui a biblioteca para manipulação de limites de tipos de dados, como std::numeric_limits

using namespace std;

int main(int argc, char const* argv[]) {

    int x, y;
    cout << "Primeiro valor: ";
    cin >> x; // Lê o valor digitado pelo usuário e armazena na variável x
    cout << "Segundo valor: ";
    cin >> y; // Lê o valor digitado pelo usuário e armazena na variável y
 
    double sum = x + y; // Calcula a soma dos dois valores e armazena na variável sum
    cout << "A soma é: " << sum << endl; // Exibe o resultado

    string fruta;
    cout << "Digite o nome de uma fruta: ";
    cin >> fruta; // Lê uma string digitada pelo usuário e armazena na variável name
    cout << "O nome da fruta é: " << fruta << endl;

    string name;
    cout << "Digite seu nome: ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignora o caractere de nova linha deixado no buffer pelo cin anterior
    // O buffer é uma área de memória onde os dados de entrada são armazenados temporariamente antes de serem processados. O cin >> name; lê apenas a primeira palavra digitada pelo usuário, deixando o restante da linha (incluindo o caractere de nova linha) no buffer. O cin.ignore(); é usado para limpar esse buffer, permitindo que a próxima leitura com getline() funcione corretamente.
    getline(cin, name); // Lê uma linha completa de texto digitada pelo usuário e armazena na variável name
    cout << "O nome digitado foi: " << name << endl;

    return 0;
}