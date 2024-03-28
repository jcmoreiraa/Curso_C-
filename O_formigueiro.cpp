#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct Coordenada {
    int x;
    int y;
    Coordenada(int _x, int _y) : x(_x), y(_y) {}
};

int calcularAreaFormigueiro(vector<vector<int>>& formigueiro, int X, int Y) {
    int area = 0;
    int N = formigueiro.size();
    vector<vector<bool>> visitado(N, vector<bool>(N, false));
    queue<Coordenada> fila;

    visitado[X][Y] = true;
    fila.push(Coordenada(X, Y));

    int deslocamentos_x[] = {-1, 1, 0, 0};
    int deslocamentos_y[] = {0, 0, -1, 1};

    while (!fila.empty()) {
        Coordenada atual = fila.front();
        fila.pop();
        area++;

        for (int i = 0; i < 4; i++) {
            int novo_x = atual.x + deslocamentos_x[i];
            int novo_y = atual.y + deslocamentos_y[i];

            if (novo_x >= 0 && novo_x < N && novo_y >= 0 && novo_y < N && formigueiro[novo_x][novo_y] == 1 && !visitado[novo_x][novo_y]) {
                visitado[novo_x][novo_y] = true;
                fila.push(Coordenada(novo_x, novo_y));
            }
        }
    }

    return area;
}

int main() {
    int N, X, Y;
    cin >> N;

    vector<vector<int>> formigueiro(N, vector<int>(N));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> formigueiro[i][j];
        }
    }

    cin >> X >> Y;

    int area = calcularAreaFormigueiro(formigueiro, X, Y);
    cout << area << endl;
    cout << formigueiro.size();

    return 0;
}
