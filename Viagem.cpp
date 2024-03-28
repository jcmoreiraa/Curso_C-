#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <utility>
#include <stack>
#include <istream>
#include <string>
#include <queue>
#include <set>
#include <iterator>
#include <map>
#include <iostream>
#include <sstream>

using namespace std;

auto dfs(int tamanho_grafo, int tamanho_galaxias, vector<pair<int,int>> &galaxias_unidas) {
    vector<vector<int>> grafo(tamanho_grafo+1);
    vector<bool> visited(tamanho_grafo+1, false);
    queue<int> fila;
    int contador = 0;

    for (int i=0; i< tamanho_galaxias; i++) {
        int primeira_galaxia = galaxias_unidas[i].first;
        int segunda_galaxia = galaxias_unidas[i].second;
        grafo[primeira_galaxia].push_back(segunda_galaxia);
        grafo[segunda_galaxia].push_back(primeira_galaxia);
    }

    fila.push(1);
    visited[1] = true;
    while (!fila.empty()) {
        int atual = fila.front();
        fila.pop();
        
        for (int v: grafo[atual]) {
            if (!visited[v]) {
                fila.push(v);
                visited[v] = true;
            }
        }
    }
    for (int i: visited){
        if (visited[i]){
            contador++;
        }}
    if (contador == tamanho_grafo){
        return "Sim";
    }
    else{
        return "Nao";
    }


    
    

}

int main() {
    int quantidade_de_galaxias, quantidade_de_galaxias_maximas;
    vector<pair<int,int>> galaxias_unidas; 

    cin >> quantidade_de_galaxias >> quantidade_de_galaxias_maximas;

    for (int i=0; i<quantidade_de_galaxias_maximas; i++) {
        int G1, G2;
        cin >> G1 >> G2;
        galaxias_unidas.push_back(make_pair(G1,G2));
    }

    auto retornador = dfs(quantidade_de_galaxias, quantidade_de_galaxias_maximas, galaxias_unidas);
    cout << retornador;

    return 0;
}
