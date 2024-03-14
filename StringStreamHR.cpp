#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    vector<int> resultado;
	stringstream x(str);
    char virg;
    int inteiro;
     while(x >> inteiro){
         resultado.push_back(inteiro);
         
         if(x >> virg && virg != ','){
            exit(1);
         }
     }
    
    return resultado;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
