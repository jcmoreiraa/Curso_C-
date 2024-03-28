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
    int quantidade_palavras, tamanho_frase;
    map <string, string> palavras;

cin >> quantidade_palavras;
    for (int i=0; i<quantidade_palavras; i++){
        string codigo, traducao;
        cin >> codigo >> traducao;
        palavras.insert(make_pair(codigo,traducao));
    }

    cin >> tamanho_frase;
    string frase = " ";

    for (int i=0; i<tamanho_frase; i++){
        string palavra;
        cin >> palavra;
        frase = frase + " " + palavra;

    }
       istringstream iss(frase);
string palavra;
while (iss >> palavra) {
    auto it = palavras.find(palavra);
    if (it != palavras.end()) {
        cout << it->second << " ";
    } else {
        cout << palavra << " ";
    }
}
  """istringstream iss(frase);
    string palavra;
    while (iss >> palavra) {
        if (palavras.find(palavra) != palavras.end()) {
            cout << palavras[palavra] << " ";
        } else {
            cout << palavra << " ";
            }"""


}

 
 





    return 0;
}