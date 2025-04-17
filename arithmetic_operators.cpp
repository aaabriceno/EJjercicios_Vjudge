#include <iostream>

using namespace std;

void operaciones(int a , int b){
    cout << a + b << endl;
    cout << a - b << endl; 
    cout << a * b << endl;
}
int main(){
    int a, b;
    cin >> a >> b;
    operaciones(a, b);
    return 0;
}