#include <iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    vector <long> numeros;
    long sum=0;
    cin >> n;
    for (int i = 0; i < n; i++){
        long t;
        cin >> t;
        numeros.push_back(t);
        sum += t;
    }
    cout << sum;
    return 0;
}