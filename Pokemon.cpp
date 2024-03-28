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
#include <sstream>

using namespace std;



int main(){
    int linhas, colunas, codigo, contador=0;
    
    cin >> linhas >> colunas;
    vector <vector<int>> matriz(linhas, vector<int>(colunas));



    for (int i=0; i<linhas;i++){
        for (int j=0; j<colunas; j++){
            cin >> matriz[i][j];
        }
    }
    cin >> codigo;


   for (int i=0; i<linhas;i++){
        for (int j=0; j<colunas; j++){
            if (matriz[i][j] == codigo){
                contador+=1;
            }}}

    cout << "Ash pegou " << contador<<" pokemon";



    



    return 0;
}