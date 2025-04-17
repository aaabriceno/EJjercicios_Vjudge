#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector <int> numeros;
    for(int i = 1; i <= n; i++){
        numeros.push_back(i);
    }
    for (int i= 0; i < n; i++){
        cout  << numeros[i];
    }
    cout << endl;
    return 0;
}