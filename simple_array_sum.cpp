#include <iostream>
#include <vector>
using namespace std;

int main(){
    int resultado = 0;
    int n; cin >> n;
    vector <int> numeros(n);
    for (int i =0; i < n; i++){
        cin >> numeros[i];
        resultado += numeros[i];
    }

    cout << resultado << endl;
    return 0;
}