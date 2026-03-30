#include <iostream>
#include <string>
int main () {
    std::string nome;
    int idade;
    float nota;

    std::cout << "\n---Cadastro Moderno em C++\n" << std::endl;

    std::cout <<"\nDigite aqui seu nome completo:\n";
    std::getline(std::cin, nome);

    std::cout <<"\nDigite aqui a sua idade:\n";
    std::cin >> idade;

    std::cout <<"\nDigite aqui a sua nota:\n";
    std::cin >> nota;

    std::cout <<"\nO(a) aluno(a) " << nome << ", de " <<idade<< " anos, tirou " <<nota<< " pontos \n"<< std::endl;
    return 0;
}
