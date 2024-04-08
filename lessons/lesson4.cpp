#include <iostream>
using namespace std;

int main() {
    // cout << sizeof(int) << endl;
    // cout << sizeof(float) << endl;
    // cout << sizeof(double) << endl;
    // cout << sizeof(bool) << endl;
    // cout << sizeof(char) << endl;


    // long long x;
    // cout << sizeof(x) << endl;

    // long double a;
    // cout << sizeof(a) << endl;
// ---------------------------------
    // int x = 5;
    // cout <<&x << endl;
    // int x = 5;
    // int* ptr = &x; // указатель - переменна, которая хранит адрес ячейки памяти

    // cout << &x << endl;
    // cout << ptr << endl;
    // cout << ptr+1 << endl;


    // -----------------------------

    int n;
    cout << "Введите размер массива " << endl;
    cin >> n;

    int* arr = (int*) malloc (n*sizeof(int));
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] *2 << " ";
    } 

    cout << endl;

    return 0;
}