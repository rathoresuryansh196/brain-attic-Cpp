#include <iostream>

using namespace std;

class Pessoa {
private:
    string nome;
    int idade;
public:
    Pessoa(string nome, int idade);
    string getNome();
    void setNome(string nome);
    int getIdade();
    void setIdade(int idade);
};
Pessoa::Pessoa(string nome, int idade){
    this->nome  = nome;
    this->idade = idade;
}
string Pessoa::getNome(){return nome;}
void Pessoa::setNome(string nome){this->nome = nome;}
int Pessoa::getIdade(){return idade;}
void Pessoa::setIdade(int idade){this->idade = idade;}

class Estudante:Pessoa {
private:
    string curso;
public:
    Estudante(string nome, int idade, string curso);
    string getCurso();
    void setCurso(string curso);
};
Estudante::Estudante(string nome, int idade, string curso){
    this->nome  = nome;
    this->idade = idade;
    this->curso = curso;
}
string Estudante::getCurso(){return curso;}
void Estudante::setCurso(string curso){this->curso = curso;}

int main() {
    Pessoa p001 = Pessoa("Lucas",19);
    Estudante e001 = Estudante("Lucas", 19, "Computaçao");
    cout << p001.getNome() << e001.getCurso() << endl;
    return 0;
}
