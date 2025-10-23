#include <iostream> 
#include <iomanip> 
#include <string>

using namespace std;

int main()
{
    int idade;
    double salario, altura;
    char genero;
    string nome;

    idade = 15;
    salario = 200;
    altura = 1.63;
    genero = 'F';
    nome = "Ana Ester Nascimento Feitosa";

    cout   << fixed << setprecision(4);
    cout  << "IDADE: " << idade << endl;
    cout << "SALARIO: " << salario << endl;
    cout  << "ALTURA: " << altura << endl;
    cout  << "GENERO: " << genero << endl;
    cout  << "NOME: " << nome <<  endl;

    return 0;

}