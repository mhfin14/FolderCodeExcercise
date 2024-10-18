#include <iostream>
#include <iomanip>
#include <windows.h>
using namespace std;

int main() {
    int nilai = 10;
    /*
    for (int i = 0; i <= nilai; i++)
    {
        cout << "nilai ke " << i << endl;
    }
    //digunakan jika tahu perulangan tersebut sampai mana
    return 0;

    */
  
    cout << "Loop ke: 1 "<<setw(15) <<" Loop ke: 2"<< endl;

   
   for (int i = 1; i <= nilai; ++i){
        cout << "Bilangan : " << i << setw(15) << "Bilangan: " << i <<endl;
    Sleep(1000);
   }
   return 0;
}