#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    vector<vector<int>> treco;
    
    int quantVetores, queries, k, indice;
    
    cin >> quantVetores >> queries;
    
    for(int i=0; i<quantVetores; i++){
        vector<int> auxiliar;
        cin >> k;
        for(int j=0; j<k; j++){
            cin >> indice;
            auxiliar.push_back(indice);
        }
        treco.push_back(auxiliar);
    }
    
    for(int i=0; i<queries; i++){
        int a, b;
        cin >> a >> b;
        cout << treco[a][b] << "\n";
    }
      
    return 0;
}
