#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <utility>
#include <stack>
#include <istream>
#include <string>

using namespace std;

char analisa_topo(stack<char> &pilha) {
    char elemento_topo = pilha.top();
    return elemento_topo;
}

void removedor(stack<char> &pilha) {
    pilha.pop();
}

int main() {
    stack<char> pilha;
    int quantidade;
    string input; 
    string expressoes_abertas = "(,{,[,<";
    string expressoes_fechadas = "),},],>";

    cin >> quantidade;
    cin.ignore();

    for (int i = 0; i < quantidade; i++) {
        getline(cin, input);

        for (const char &elemento : input) {
            if (expressoes_abertas.find(elemento) != string::npos) {
                pilha.push(elemento);
            } else if (expressoes_fechadas.find(elemento) != string::npos && pilha.empty()) {
                pilha.push(elemento);
            } else if (elemento == '}') {
                char topo_analisado = analisa_topo(pilha);
                if (topo_analisado == '{') {
                    removedor(pilha);
                }
            } else if (elemento == ']') {
                char topo_analisado = analisa_topo(pilha);
                if (topo_analisado == '[') {
                    removedor(pilha);
                }
            } else if (elemento == ')') {
                char topo_analisado = analisa_topo(pilha);
                if (topo_analisado == '(') {
                    removedor(pilha);
                }
            } else if (elemento == '>') {
                char topo_analisado = analisa_topo(pilha);
                if (topo_analisado == '<') {
                    removedor(pilha);
                }
            }
        }
        
        if (pilha.empty()) {
            cout << "Y" << endl;
        } else {
            cout << "N" << endl;
            while (!pilha.empty()) {
            pilha.pop();
        }
        }
    }

    return 0;
}
