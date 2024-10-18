#include <iostream>
#include <string>
using namespace std;

int main() {

    int nilai = 10;
    //shot hand
    string hasil = (nilai == 11) ? "Nilai 11 " : " Ini bukan nilai 11 ";
    cout << hasil;

    cout << endl;
    //if else original
    if (nilai == 11)
    {
        cout << "INi nilai 11" << endl;
    }else{
        cout << "Ini bukan nilai 11" << endl;
    }
    cout << "====================Latihan ===============" << endl;
    /*

    int nilai2;
    cout << "Masukkan nilai: "; cin >> nilai;

    if (nilai % 2 == 0 )
    {
        cout << "Ini bilangan genap" << endl;
    }else
    {
        cout << "ini bilangan ganjil" << endl;

    }
    */
    int password; 
        char lanjut;
    do
    {
        
    cout << "Masukkan password: ";cin >> password;
        
    
    if (password == 12345){
        cout << "Selamat datang" << endl;
        break;
    }else if(password != 12345){
        cout << "Maaf coba ulang" << endl;
        cout << "Mau coba lagi?:  " ;cin >> lanjut;
    }
    } while (lanjut == 'y' || lanjut == 'Y');
    
    return 0;
}