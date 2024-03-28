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

int main(){

    int dias_de_aula; 
    int grifinolia, sonserina, quantidade_de_duplas;
    priority_queue <pair<int, string> , vector<pair<int, string>>, less<pair<int, string>>> fila_prioridade_grifinolia;
    priority_queue <pair<int, string> , vector<pair<int, string>>, greater<pair<int, string>>> fila_prioridade_sonserina;

    pair <int, string> pares;
cin >> dias_de_aula;

    for (int i=0; i<dias_de_aula; i++){
        cin >> grifinolia >> sonserina >> quantidade_de_duplas;

        for (int j=0; j< grifinolia; j++){
            cin >> pares.first >> pares.second;
            fila_prioridade_grifinolia.push(pares);

        }
           for (int k=0; k< sonserina; k++){
            cin >> pares.first >> pares.second;
            fila_prioridade_sonserina.push(pares);

        }
        int contador = 0;
        while (contador!=quantidade_de_duplas && !fila_prioridade_grifinolia.empty() && !fila_prioridade_sonserina.empty()){
            cout << fila_prioridade_grifinolia.top().second << " e " << fila_prioridade_sonserina.top().second << endl;

            fila_prioridade_grifinolia.pop();
            fila_prioridade_sonserina.pop();
            contador++;
            }


        

    }




    return 0;
}