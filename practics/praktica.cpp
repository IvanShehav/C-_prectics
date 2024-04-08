#include <iostream>
using namespace std;

int main() {
    int click_x, click_y, win_x1, win_x2, win_y1, win_y2, table_x, table_y1, table_y2;
    cout << "Vvedite koordinati x, y: " << endl;
    cin >> click_x >> click_y;

    cout << "Vvedite koordinati okna x1, x2, y1, y2: " << endl;
    cin >> win_x1 >> win_x2 >> win_y1 >> win_y2;

    cout << "Vvedite koordinati stola x, y1, y2: " << endl;
    cin >> table_x >> table_y1, table_y2;

    if ((win_x1 <= click_x && win_x2 >= click_x)&&(win_y1 <= click_y && win_y2 >= click_y)) {  //для окна
    cout << "YES, it's window" << endl;
    } 
    else if (table_x == click_x && (table_y1 <= click_y && table_y2 >= click_y )) { // для стола
        cout << "YES, it's table" << endl;
    }
    else {
        cout << "No, it's void" << endl;
    }

    return 0;
}