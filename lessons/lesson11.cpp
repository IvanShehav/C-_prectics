#include <iostream>
#include <string>
using namespace std;

// void inc(int&, int = 1); 
// // прототип - если есть прототип то все умолчания указываются только в нем
 
// int main() {
//     char ch;
//     int state = 0;
//     string arg1 = ""; // для переменной а
//     string arg2 = ""; // для переменной b
//     while(cin.get(ch), ch !='\n') {
//         if (ch == ' ') {
//             state = 1;
//             continue;
//         }

//         if (state == 0) arg1.push_back(ch);
//         if (state == 1) arg2.push_back(ch);
//     }

//     int a = stoi(arg1);
//     if (state == 1) {
//         int b = stoi(arg2);
//         inc(a, b);
//     }
//     else {
//         inc(a);
//     }

//     cout << a << endl;
// }

// void inc(int &x, int y) {
//     x += y;
// }


int main() {
    char ch;
    string arg[4];
    int octet[4];
    int idx = 0;
    while(cin.get(ch), ch != '\n') {
        

        if (ch == '.') {
            idx++;
        } else {
            arg[idx] += ch;
        }
    }

bool error = false;
   for (int i = 0; i < 4; i++) {
    octet[i] = stoi(arg[i]);
    if (octet[i] < 0 || octet[i] > 255) {
        error = true;
        break;
    }
   }
    if (error) cout << "IP error" << endl;
    else cout << "IP it's normal" << endl;

}