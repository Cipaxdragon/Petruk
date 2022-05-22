#include <iostream>

using namespace std;

int main(){

    cout << "===== Program Segitiga ======" << endl;
    int k;
    cout << "Masukan Jumlah Baris => "; cin >> k;
    for(int i = 1;i <= k;i++){
        for(int j = 1;j <= i;j++){
            cout << "*";
        }
        cout << endl;
    }
    for(int i = k;i >= 1;i--){
        for(int j = i; j >= 1; j--){
            cout << "*";        
        }
        cout << endl;
    }
    system("pause");
}
