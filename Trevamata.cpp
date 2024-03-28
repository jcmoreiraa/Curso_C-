#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <utility>
using namespace std;

bool cmp(const pair<string,int>& a, const pair<string, int> &b){
    return a.second > b.second;
}


int main(){    


    struct Trevamata
    {
        string nome;
        int valor; 
        int indice;

    
    };
    int quantidade;
    cin >> quantidade; 
    Trevamata trev;
    int acumulador=0;
    vector<pair<string, int>> trevamatas;
    vector<string> nomes;

    for (int i=1;i<=quantidade;i++){
        cin >> trev.nome >> trev.valor;
        trevamatas.push_back(make_pair(trev.nome, trev.valor));


    }
    int total;
    cin >> total;
    
    for(int i=0; i<quantidade;i++){
        if (trevamatas[i].second > total){
            acumulador+=1;
            nomes.push_back(trevamatas[i].first);
        }
    }
    if (acumulador == 0 ){
        cout << "Vamos todos encontrar a montanha!";
        
    }
    else{
         cout << "Vamos virar almoço de aranhas gigantes!"<<endl;
        for (int i=0;i<acumulador;i++){
            cout << nomes[i] << endl;
        }


    }



   return 0;
}