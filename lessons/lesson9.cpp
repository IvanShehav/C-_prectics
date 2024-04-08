// #include <iostream>
// using namespace std;

// int main() {
//  int i, count = 0;
//  string word;

//     getline (cin, word);
//     for (int i = 0; i < word.size(); i++) {
//         if (word[i]== '.') {
//             break;
//         }
//         else if (word[i] != ' ') {
//             count += 1;
//         }
//     }
//     cout << count;
// }
// =========================================================================================
// #include <stdio.h>
// #include <string.h>

// int main() {
//     int count = 0;
//  // СТАРЫЕ КОМАНДЫ ЧИСТОГО C
//     char str[255] = "Hello.";
//     fgets(str,sizeof(str),stdin); // старая версия getlin, для ввода строки до нажатия ентер
//     int size = strlen(str);

//     for (int i = 0; i < size; i++) {
//         if (str[i] == '.') {
//             break;
//         } else if (str[i] != ' '){
//             count += 1;
//         }
//     }

//     printf("%d", count);

// ===============================================

//    char ch =  getchar(); // старая версия cin.get() - для ввода одного символа
//     scanf("%d", &a); // старая версия cin для ввода данных в переменную
//     printf("Вы ввели число: %d\n", a); // старая версия cout для вывода 
//}

// ==============================================================================================

#include <iostream>
using namespace std;


char toLower(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        return ch + (char)32;
    }
    return ch;
}

int main() {

    char ch;
    while (ch = getchar(), ch != '.') { //гетчар считывает посимвольно
        printf("%c", toLower(ch));
    }
}