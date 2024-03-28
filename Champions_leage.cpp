#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <set>

using namespace std;

string bfs(vector<pair<string, vector<string>>> &players, const string &goalkeeper, const string &attacker) {
    queue<string> fila;
    set<string> visitados;

    fila.push(goalkeeper);
    visitados.insert(goalkeeper);

    while (!fila.empty()) {
        string atual = fila.front();
        fila.pop();

        if (atual == attacker) {
            return "Gol";
        }

        for (const auto &amigos : players) {
            
                for (const auto &jogadores_amigos : amigos.second) {
                    if (visitados.find(jogadores_amigos) == visitados.end()) {
                        fila.push(jogadores_amigos);
                        visitados.insert(jogadores_amigos);
                    }
                
            }
        }
    }

    return "afasta a zaga";
}

int main() {
    string goleiro, atacante, jogador;
    int numero_jogadores_amigos;

    cin >> goleiro >> atacante;

    vector<pair<string, vector<string>>> vetor_jogadores;

    while (cin >> jogador >> numero_jogadores_amigos) {
        vector<string> amigos;
        for (int i = 0; i < numero_jogadores_amigos; i++) {
            string nome;
            cin >> nome;
            amigos.push_back(nome);
            char nextChar;
            cin.get(nextChar);
            if (nextChar == '\n') {
                break;}
        }
        vetor_jogadores.push_back(make_pair(jogador, amigos));
    }

    cout << bfs(vetor_jogadores, goleiro, atacante) << endl;

    return 0;
}
