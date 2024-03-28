#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <stack>

using namespace std;

int comparador(const string& palavra_antiga, const string& palavra) {
    for (int i = 0; i < 3; i++) {
        if (palavra_antiga[i] == palavra[i]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int altura_maxima, numero_empilhar;
    int score = 0;
    stack<string> fila;
    string palavra;
    int somador =1;

    cin >> numero_empilhar >> altura_maxima;

    for (int contador = 0; contador < numero_empilhar; contador++) {
        cin >> palavra;
        
        if (fila.empty()) {
            fila.push(palavra);
        } else {
            string palavra_antiga = fila.top();
            int valor = comparador(palavra_antiga, palavra);
            
            if (valor == 1) {
                score += 10;
                fila.pop();
                somador = somador - 1;
            }
            else if (valor == 0) {
                fila.push(palavra);
                somador = somador + 1;

               
            }
        }
    }
   
    if (somador>=altura_maxima){
        cout << "game over";
        return 0;
    }
    cout  << score << endl;

    return 0;
}
