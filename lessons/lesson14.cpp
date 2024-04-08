// Вишневый сад - А.П. Чехов

#include <iostream>
using namespace std;

int arrayMin(int data[], int size, bool isFirst = true) {
if (size == 0) return -1; 

    int min_idx = 0;
    for (int i = 0; i < size; i++) {
        if (data[i] < data[min_idx]) {
            min_idx = i;
    }
        if (!isFirst) {
            if (data[i] == data[min_idx]) min_idx = i;
        }
 }
    return min_idx;
 }  

int main() {
    int arr[] = {1, 5, 7, 47, 28};
    int size = 5;
    cout << arrayMin(arr, size) << endl;
    cout << arrayMin(arr,size, false) << endl;
}

#include <iostream>
using namespace std;

int arrayMin(int data[], int size, bool isFirst=true) {
    int min_idx = 0;
    for (int i = 1; i < size; i++) {
        if (data[i] < data[min_idx]) {
            min_idx = i;
        }
        else if (!isFirst) {
            if (data[i] == data[min_idx]) min_idx = i;
        }
    }
    return min_idx;
}

int main() {
    int arr[] = {45, 1, 5, 4, 7, 78};
    int size = 6;
    cout << arrayMin(arr, size) << endl;
    cout << arrayMin(arr, size, false) << endl;
}
