// Вводится число N (размер массива), далее вводится N чисел - элементы массива. Затем вводится число k,
// его необходимо вставить в конец массива. Вывести полученный массив на экран.


#include <iostream>
using namespace std;


int main () {
    int n, k;

    cout << "Vvedite razmer massiva: ";
    cin >> n;

    int* arr = (int*) malloc (n*sizeof(int));
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
   

    cout << "Vvedite chislo 'k': " << endl;
    cin >> k;

    n += 1;
    arr[n-1] = k;

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
return 0;
}