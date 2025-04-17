#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n; 
    cin >> n;
    vector<vector<int>>matriz(n,vector<int>(n));
    for(int i=0;i<n;i++){
        for (int j=0; j<n;j++){
            cin >> matriz[i][j];
        }
    }
    int suma_principal = 0;
    int suma_secundaria = 0;
    for(int i = 0;i < n; i++){
        suma_principal +=matriz[i][i];
        suma_secundaria +=matriz[i][n-1-i];
    }
    int sum =abs (suma_principal - suma_secundaria);
    cout <<  sum;
    return 0;
}