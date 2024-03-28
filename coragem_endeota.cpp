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
    int quantidade_frases;
    map<string, int> palavras;
    vector<string> verdadeiras;



    cin >> quantidade_frases;
    cin.ignore();
    for(int i=0; i< quantidade_frases; i++){
        string frase;
        getline(cin, frase);
        istringstream iss(frase);
        string palavra;
        while (iss >> palavra){
            palavras[palavra]++;
        }

        }


int contador = 0;
    for (const auto &palavra:palavras){
        if (palavra.second == 1){
            contador+=1;
            verdadeiras.push_back(palavra.first);
        }
    }
cout << contador << endl;
    for (const auto &elemento: verdadeiras){
        cout << elemento << endl;
    }


    return 0;
}