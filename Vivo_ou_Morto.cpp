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

using namespace std;

int main() {
    int quantidade_vivas, quantidade_mortas;
    set<string> pessoas_vivas, pessoas_mortas;

    cin >> quantidade_vivas;

    cin.ignore();

    for (int i = 0; i < quantidade_vivas; i++) {
        string vivo;
        getline(cin, vivo);
        pessoas_vivas.insert(vivo);
    }

    cin >> quantidade_mortas;

    cin.ignore();

    for (int i = 0; i < quantidade_mortas; i++) {
        string morto;
        getline(cin, morto);
        if (pessoas_vivas.find(morto) != pessoas_vivas.end()) {
            pessoas_mortas.insert(morto);
            pessoas_vivas.erase(morto);
        } else {
            pessoas_mortas.insert(morto);
        }
    }


    set<string>::iterator it;
	for(it = pessoas_vivas.begin(); it != pessoas_vivas.end(); it++){ 
		cout << *it << endl;

    }
    set<string>::iterator its;
	for(its = pessoas_mortas.begin(); its != pessoas_mortas.end(); its++){ 
		cout << *its << endl;

    }

    return 0;
}
