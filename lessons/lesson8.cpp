#include <iostream>
using namespace std;

void swap(int&, int&); // прототип функции - состоит из сигнатуры функции
void MySwap(int*, int*); // прототип функции - состоит из сигнатуры функции



int summ(int[], int); //прототип

int main() {
    int size = 6;
    int* arr2 = (int*) malloc(6*sizeof(int)); // динамическая память
    int arr[] = {1, 2, 3 , 4 ,5 ,6}; //статическая память
    cout << arr << endl;
    cout << *arr << endl; // разименование


    
    // cout << summ(arr, size) << endl; // arr - указатель, который хранит адрес ячейки

    // int x = 100, y = 200;
    // int&ref_x = x; // псевдоним переменной x
    // int&ref_y = y;// псевдоним переменной y

    // swap(x, y);

    // cout << ref_x << " " << ref_y << endl;


    int x = 100, y = 200;
    MySwap(&x,&y);
    cout << x << " " << y;

}


int summ(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
return sum;
}

void swap(int& a, int& b) {
    int tmp = a;
    a = b;
    b = tmp;
}

void MySwap(int* a, int* b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}