#include <iostream>
using namespace std;

int main() {
    // задача 2
    // int n, i;
    // cin >> n;
    // int* arr = (int*)malloc(n*sizeof(int));
    // for (i = 0; i<n; i++) {
    //     cin >> arr[i];
    // }

    // for (i = 0; i < n; i++) {
    //     if (arr[i] < 0) {
    //         cout << i+1 << " ";
    //     }
    // }

    float arr[18];
    float a, z, i, vout;

    cout <<  "Vvedite a and z: ";
    cin >> a >> z;

    for (i = 0; i<17; i++) {
        arr[i] = a*(18-i)*z;
    }

    for (i=0; i <17, i++) {
        cout << printf("%.2f", arr[i]);
    }


    return 0;
}