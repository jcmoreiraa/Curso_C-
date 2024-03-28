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
    struct CompareSecond {
    bool operator()(const pair<string,int> & a, const pair <string, int> & b)const {
        return a.second < b.second; 
    }
};

   priority_queue<pair<string, int> , vector<pair<string, int>>, CompareSecond>  fila_prioridade;
  int quantidade_pessoas, dias_atendimento;
  int pessoas, salvar_valor;
  pair <string, int> pair; 


  cin >> dias_atendimento >> quantidade_pessoas;
  salvar_valor = quantidade_pessoas;
  for (int i=0; i<dias_atendimento; i++){
    cin >> pessoas;
    for (int j=0; j<pessoas; j++){
        cin >> pair.first >> pair.second;
        fila_prioridade.push(pair);}
    quantidade_pessoas=salvar_valor;

    while(quantidade_pessoas!=0){
            cout << fila_prioridade.top().first << endl;
            fila_prioridade.pop();
            quantidade_pessoas--;

        }
    

  }






    return 0;
}