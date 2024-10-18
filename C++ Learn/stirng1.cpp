#include <iostream>
#include <string>
using namespace std;

int main() {
    // string kata_pertama = "hello";
    // string kata_kedua = " world";
    // string gabungan = kata_pertama.append(kata_kedua);
    // cout << gabungan << endl;


//Number dan string
    
    /*
    string nilai1 = "10";
    string nilai2 = "20";
    string hasil = nilai1 + nilai2;
    cout << hasil;
    */

//string length
    /*
   string huruf = "Muhammad Alfin";
   cout << "jumlah huruf adalah: " << huruf.size()<< endl;
    */

//Akses char dari string
    /*
    string kata = "Makanan";
    cout << kata[kata.length()- 2]<< endl;
    cout << kata[2]<< endl;
    cout << "teks asli: " << kata <<endl;
    cout << "huruf pertama: " << kata.at(0) <<endl;
    cout << "huruf kedua: " << kata.at(2) <<endl;
    cout << "huruf terakhir: " << kata.at(6) <<endl;
    cout << "huruf berbalik: " << kata.at(kata.length() -2 ) <<endl;

    kata.at(0) = 'P';
    cout << "ganti huruf pertama: " <<kata.at(0)<< endl;
    cout << kata ;
    */

//  spesial char
    /*
    string bacaan = "selamat pagi pada hari jum'at saya membaca tulisan \"ayo kita semangat\" ";
    cout << bacaan;
    // \n, \t
    */

//type string
    
    string answ, access, choise;
    do
    {
    cout << "Hello welcome in my computer! please check you verify for access the computer with the key!!\nhave you get it? (type yes/no): \n"; cin >> answ;

    if (answ == "yes")
    {
        cin.ignore();
        cout << "typ key here:  "; getline(cin, access);
        if (access == "kuda laut")
        {
             cout << "Congratulation you are chosen one!\nhave a nice day"<< endl;
            break;

        }else{
            cout << "Sorry you are not chosen, if you want access this pc, you should ask the key to owner's pc " << endl;
        }
        
    }else{
        cout << "get out!"<< endl;
    }
    cout <<"wanna try it again?: (y/n)";cin >> choise;
    } 
    while (choise == "y"|| choise == "Y");

    cout << "Thank you ";
    */

//  
    return 0;

}