#include <iostream>

using namespace std;

int main(){
    int baris;
    cout << "===== Program Segitga ======" << endl;
    cout << "Masukan jumlah baris => "; cin >> baris;
   int i,j;


    i = 1;
    while(i <= baris){
        j = 1;
        while(j <= i){
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }

    i = baris;
    while(i >= 1){
        j = i;
        while(j >= 1){
            cout << "*";
            j--;
        }
        cout << endl;
        i--;
    }

    system("pause");
}
