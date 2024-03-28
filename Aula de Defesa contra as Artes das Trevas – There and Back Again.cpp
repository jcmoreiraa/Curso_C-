#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <utility>
using namespace std;
bool buscabinaria(const vector<string> & consultas, const string & geral){
    int esquerda = 0;
    int direita = consultas.size() - 1;
     while (esquerda <= direita) {
        int meio = esquerda + (direita-esquerda)/ 2;

        if (consultas[meio] == geral){
            return true;
        }
        if (consultas[meio] < geral){
            esquerda = meio + 1;}
        else{
            direita = meio - 1;}
    }
    return false;
}


int main(){

    vector<string> geral, proibidos, consultas;
    int numero_geral, numero_proibidos, numero_consultas; 
    string feitico;


    cin >> numero_geral;
    for (int i=0; i<numero_geral;i++){
        
        cin >> feitico;
        geral.push_back(feitico);
    }
     cin >> numero_proibidos;
    for (int i=0; i<numero_proibidos;i++){
        cin >> feitico;
        proibidos.push_back(feitico);
    }
     cin >> numero_consultas;
    for (int i=0; i<numero_consultas;i++){
        cin >> feitico;
        consultas.push_back(feitico);
    }

    for (const string& elemento:consultas){
        if (buscabinaria(proibidos, elemento)){
            cout << "Proibido" << endl;
        }
        else{
            cout << "Geral" << endl;
        }

    }






    return 0; 
}