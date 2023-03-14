#include <vector>
#include <string>

using namespace std;

struct Contato {
    string nome;
    string numero;
};

int main() {
    vector<Contato> agenda;
    Contato inicial;

    inicial.nome = "Fulanim da Silva";
    inicial.numero = "999999999";

    return 0;
}