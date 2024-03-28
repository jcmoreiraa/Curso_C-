#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <utility>
using namespace std;

bool cmp(const pair<int,int> &a, const pair<int,int>&b){
    return a.second+a.first<b.first+b.second  ;
    
}

int main(){
vector<pair<int,int>> domino;
int a, b; 
for (int i=0;i<10;i++){
    cin >> a >> b;
    domino.push_back(make_pair(a,b));


}
sort(domino.begin(), domino.end(), cmp);
for (int i=0;i<10;i++){
    cout << domino[i].first <<" "<< domino[i].second <<" "<< "="<<" "<< domino[i].first + domino[i].second << endl;
}





    return 0;
}