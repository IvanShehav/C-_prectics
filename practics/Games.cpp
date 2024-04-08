#include <iostream>
#include <windows.h>
#include <cstdlib>
using namespace std;

int main() {
    int n, i, a, b, cash, j; 
    string A[6] {" ", "!", "@", "#", "$", "%"}; // создаем массив с элементами карточек
    char Output[10]; // массив для вывода значений
    int* arr = (int*) malloc (n*sizeof(int)); //создаем массив

    setlocale(0, " ");
    cout << "Input count cards:  ";
    cin >> n; // вводим количество карт
    for (i = 0; i < n; i++) {
        cin >> cash;
        if (cash <= 5) {
            arr[i] = cash;
        } else {
            cout << "Inputed error count!";
        }
    }

    cout << "Input card #1:  ";
    cin >> a; // вводим первую ячейку карты

    cout << "Input card #2:  ";
    cin >> b; // вводим вторую ячейку карты

    // cout << "Answer has been received, Click 'Enter' to continue ";
    // cin.get();
    // system("cls");
    
    
    for (i = 0; i < n; i++) {  //выводим открывшиеся значения
    if (a == i+1) {
        Output[i] = A[arr[i]];
    } else if (b == i+1) {
        Output[i] = A[arr[i]];
    } else {
        Output[i] = i+1;
    }
    }

    for (i = 0; i < n; i++) { 
        cout << "[ " << Output[i] << " ]" << " "; //вывод массива
    }


     for (i = 0; i < n; i++) { //проверяем совпадения
        for (j = 0; j < n-1, j++) {
            if (Output[i] == Output[j]) {
                Output[i] = " ";
                Output[j] = " ";
            }
        }
     }

     for (i = 0; i < n; i++) { 
        cout << "[ " << Output[i] << " ]" << " "; //вывод массива
    }
    // cin.get();
    return 0;
}
