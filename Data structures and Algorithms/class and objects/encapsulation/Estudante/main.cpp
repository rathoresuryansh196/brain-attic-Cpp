#include <iostream>

using namespace std;

class Estudante {
private:
    string nome;
    int idade;
    string curso;
public:
    Estudante(string nome,int idade,string curso);
    string getNome();
    void setNome(string nome);
    int getIdade();
    void setIdade(int idade);
    string getCurso();
    void setCurso(string curso);
};
Estudante::Estudante(string nome,int idade,string curso){
    this->nome  = nome;
    this->idade = idade;
    this->curso = curso;
}
string Estudante::getNome()
{
    return nome;
}
void Estudante::setNome(string nome)
{
    this->nome = nome;
}
int Estudante::getIdade()
{
    return idade;
}
void Estudante::setIdade(int idade)
{
    this->idade = idade;
}
string Estudante::getCurso()
{
    return curso;
}
void Estudante::setCurso(string curso)
{
    this->curso = curso;
}

int main()
{
    Estudante lucas = Estudante("Lucas", 19, "Computaçao");
    cout << lucas.getNome() << endl;
    return 0;
}
