#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <utility>
using namespace std;

int buscabinaria(const vector<pair<string, int>> &livros, const string &elemento) {
    int esquerda = 0;
    int direita = livros.size() - 1;
    while (esquerda <= direita) {
        int meio = esquerda + (direita - esquerda) / 2;

        if (livros[meio].first == elemento) {
            if (livros[meio].second == 1) {
                return 1;
            } else if (livros[meio].second == 2) {
                return 2;
            }
        }
        if (livros[meio].first < elemento) {
            esquerda = meio + 1;
        } else {
            direita = meio - 1;
        }
    }
    return 0; 
}

int main() {
    int quantidade_livros, quantidade_consultas;
    vector<string> livros_consultados;
    vector<pair<string, int>> livros;

    cin >> quantidade_livros;

    for (int i = 0; i < quantidade_livros; i++) {
        string nome;
        int numero;
        cin >> nome >> numero;
        livros.push_back(make_pair(nome, numero));
    }

    cin >> quantidade_consultas;

    for (int i = 0; i < quantidade_consultas; i++) {
        string nome;
        cin >> nome;
        livros_consultados.push_back(nome);
    }

    for (const string &elemento : livros_consultados) {
        int resultado = buscabinaria(livros, elemento);
        if (resultado == 1) {
            cout << "Disponivel" << endl;
        } else if (resultado == 2) {
            cout << "Emprestado" << endl;
        } else {
            cout << "Nao encontrado" << endl;
        }
    }

    return 0;
}
