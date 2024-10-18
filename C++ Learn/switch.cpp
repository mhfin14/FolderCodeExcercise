#include <iostream>
using namespace std;

int main() {
    char opsi;
    cout << "a. bulan\n b. hari" << endl;
    cout << "Masukkan opsi: (a/b)" ;cin >> opsi;
    switch (opsi)
    {
    case 'a':
        cout << "Kamu memasuki bulan:" << endl;
        break;
    case 'b':
        cout << "Kamu memasuki minggu:" << endl;
        break;
    
    default:
        break;
        cout << "error" << endl;
    }
    return 0;
}