#include <vector>
#include <string>
#include <iostream>

using namespace std;

struct Contato {
    string nome;
    string numero;
};

int main() {
    vector<Contato> agenda;
    Contato inicial;
    Contato segundo;

    segundo.nome = "Cicranim dos Santos";
    segundo.numero = "88888888";

    inicial.nome = "Fulanim da Silva";
    inicial.numero = "999999999";

    agenda.push_back(inicial);
    agenda.push_back(segundo);

    cout << agenda[0].nome << "\n" << agenda[0].numero << "\n";

    agenda.pop_back();

    cout << agenda[0].nome << "\n" << agenda[0].numero << "\n";
    cout << agenda[1].nome << "\n" << agenda[1].numero << "\n";

    return 0;
}