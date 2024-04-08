#include <iostream>
using namespace std;


// task number 1
//
// int main() {
//     int lng = 15;

//     int arr[lng];
//     for (int i = 0; i < lng; i++) {
//         cin >> arr[i];
//     } 

//     int f;
//     f = arr[4];
//     arr[4] = arr[9];
//     arr [9] = f;

//     for (int i=0; i < lng; i++) {
//         cout << arr[i] << ' ';
//     }

//     return 0;
// }
// -------------------------------

//tusk number 2

// int main() {
//     int n;
//     int* a = (int*)malloc(n*sizeof(int));

//     cout << "Vvedite chislo elementov: " << endl;
//     cin >> n;

//     for (int i = 0; i < n; i++) {
//         cin >> a[i];
//     }

//     int s, k, f;
//     cout << "Vvedite s, k (s>k): ";
//     cin >> s >> k;

//     f = a[s];                      /// s > K
//                                   /// сдвинуть от k до s-1
//     for (int i = s; i >= k; i--) { //двигаем K-elements
//         a[i] = a[i-1];
//     }

//     a[k] = f;

//     for (int i = 0; i < n; i++) {
//         cout << a[i] << ' ';
//     }
//      delete [] a;
//        return 0;
// }
//=================================================================

//task number 3


// int main() {
//     int a[100], n;
//     cin >> n;
//     for (int i = 0; i < n; i++) {
//         cin >> a[i];
//     }


//     int f;

//     if (n % 2 == 0) {
//     for (int i = 0; i < n; i+=2) {
//         f = a[i];
//         a[i] = a[i+1];
//         a[i+1] = f;
//     }
//     }

//     else {
//       for (int i = 0; i < n-1; i+=2) {
//         f = a[i];
//         a[i] = a[i+1];
//         a[i+1] = f;
//     }  
//     }

//     for (int i = 0; i < n; i++) {
//         cout << a[i] << ' ';
//     }

//     return 0;
// }

// int main() {

//     int n, j;
//     j = 0;

//     int* arr = (int*)malloc(n*sizeof(int));
//     int* a = (int*)malloc(n*sizeof(int));

    

//     cin >> n;
//     for (int i = 0; i < n; i++) { // вводим данные в массив
//         cin >> arr[i];
//     }

//     for (int i = n-1; i >= 0; i--) {
//         a[j] = arr[i];
//         j += 1;
//     }

//     for (int i = 0; i < n; i++) { // выводим данные из массив
//         cout << a[i] << ' ';
//     }

//     return 0;
// }


//==================================
//task number 5

int main () {

    int n, j;
    j = 0;

    int* arr = (int*)malloc(n*sizeof(int));
    int* a = (int*)malloc(n*sizeof(int));

    cin >> n;
    for (int i = 0; i < n; i++) { // вводим данные в массив
        cin >> arr[i];
    }

    for (int i = n-3; i < n; i++) {
        a[j] = arr[i];
        j += 1;
    }

for (int i = 3; i < n-3; i++) {
        a[j] = arr[i];
        j += 1;
    }

for (int i = 0; i < 3; i++) {
        a[j] = arr[i];
        j += 1;
    }


for (int i = 0; i < n; i++) {
        cout << a[i] << ' ';
    }
    return 0;
}
