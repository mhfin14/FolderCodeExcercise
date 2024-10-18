#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    int nilai = 0;
    int ke = 1;
    while (nilai < 10)
    {
        cout << "loop ke: "<< ke << " nilai: "<<nilai<< endl;
        ke++, nilai ++;
    Sleep(1000);
    }
    cin.get();
    return 0;
}