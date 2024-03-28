#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <utility>
using namespace std;

bool cmp(const pair<int,int>& a, const pair<int, int> &b){
    return a.second > b.second;}


int main(){
    int quantidade;
    int representante, valor; 

    vector<pair<int, int>> planetas;
    cin >> quantidade;

    for (int i=0;i<quantidade;i++){
        cin >> representante >> valor ;
        planetas.push_back(make_pair(representante, valor));


    }

        sort(planetas.begin(), planetas.end(), cmp);
        for (int i=0;i<quantidade;i++){
            cout << planetas[i].first <<" " <<  planetas[i].second << endl;
        }


        




    return 0;
}