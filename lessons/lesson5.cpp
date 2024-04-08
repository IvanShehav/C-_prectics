#include <iostream>
using namespace std;


int main () {
int n;
cout << "Vvedite chislo: ";
cin >> n;

     int arr[n];

    for (int i = 0; i < n; i++) {  // вводим числа в массиав
        cin >> arr[i];
    }


    int max = -231;
    int min = 231;
    int sch = 0;
    for (int i = 0; i < n; i++) { //ищем макс и мин
        if (arr[i] > max) {
            max = arr[i];
        
        }
        else if (arr[i] < min) {
            min = arr[i];
            sch +=1;
        }
    }

    cout << "Max: " << max << endl;
    cout << "Min: " << min << endl;

    int j = 0;
    // int two[j];  //???????
    int two[n+sch];
   

    for (int i = 0; i < n; i++) { // дописывает к мин максимум
        if (arr[i] == min){
            two[i+j]=arr[i];
            j+=1;
            two[i+j]=max;
        } else {
            two[i+j]=arr[i];
        }
    }


for (int i = 0; i < n+sch; i++) {  // вывод
    cout << two[i] << " ";
}
// if (two[-2] == min) {
//     cout << two[-1];
// }
    return 0;
}