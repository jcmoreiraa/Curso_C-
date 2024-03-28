#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <utility>
using namespace std;


int main(){    
    int quantidade_missoes;
    vector<int> missoes, bonus, missoes_resultante;
    int total, bonus_adicional;


    cin >> quantidade_missoes;
    for(int i=0;i<quantidade_missoes; i++){
        int m;
        cin >> m;
        missoes.push_back(m);

    }
    for(int i=0;i<quantidade_missoes; i++){
        int b;
        cin >> b;
        bonus.push_back(b);

    }

    cin >> total >> bonus_adicional;
    int acumulador=0;

    for(int i=0;i<quantidade_missoes; i++){
        acumulador = acumulador+ ((missoes[i]) *( bonus[i]+ bonus_adicional));




    }
    if (acumulador>total){
        cout << "Upou de Nivel!";
    }
    else{
        cout << "Nao foi dessa vez!";
    }









    return 0;
}