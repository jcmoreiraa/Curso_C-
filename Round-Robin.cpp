#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <utility>
#include <stack>
#include <istream>
#include <string>
#include <queue>

using namespace std;

int analisa_inicio(queue<int> fila) {
    return fila.front();
}

int main() {
    int numero_de_processos, tempo;
    queue<int> fila;

    cin >> numero_de_processos >> tempo;

    for (int i = 0; i < numero_de_processos; i++) {
        int valor;
        cin >> valor;
        fila.push(valor);
    }

    while (tempo != 0) {
        int inicio_fila = analisa_inicio(fila);
        tempo -= 1;
        inicio_fila -= 1;
        if (inicio_fila==0){
            fila.pop();
        }
        else{
        fila.push(inicio_fila);
        fila.pop();}
    }

    if (fila.empty()) {
        cout << "pronto";
    } else {
        cout << fila.size() << endl;
        while (!fila.empty()) {
            cout << fila.front()<<" ";
            fila.pop();
        }
    }

    return 0;
}
