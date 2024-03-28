#include <iostream>
#include <vector>
#include <iterator>
using namespace std;




int main(){
    int tamanho, distancia, valor_km, valor_pedagio;

    cin >> tamanho >> distancia;
    cin >> valor_km >> valor_pedagio; 

    int valor_total = tamanho*valor_km  + (tamanho/distancia)*valor_pedagio;

    cout << valor_total;


}