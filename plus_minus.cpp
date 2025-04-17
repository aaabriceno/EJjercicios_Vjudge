#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int positivos = 0, negativos = 0, ceros = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) positivos++;
        else if (arr[i] < 0) negativos++;
        else ceros++;
    }

    cout << fixed << setprecision(6);
    cout << (double)positivos / n << endl;
    cout << (double)negativos / n << endl;
    cout << (double)ceros / n << endl;

    return 0;
}
