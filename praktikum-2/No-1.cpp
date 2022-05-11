#include <iostream>

using namespace std;

int main(){

    int a;
    int akhir;

    cout << "===== Mencari (Bilangan Genap Kelipatan 4 dan  Kelipatan 8) ======" << endl;
    int pilih;
    cout << "Mau Bilangan Positif atau negatif [1/2]?"; cin >> pilih;
    cout << "[Sampe angka berapa] ==> " ; cin >> akhir;

    for( a = -999;a <= akhir;a++){
        if(pilih  == 1){
            if((a % 2 == 0 and a % 4 == 0 ) and (a > 0  and a % 8 == 0)){
                cout << "=== > "<< a << endl;
            }
        }else{
                if((a % 2 == 0 and a % 4 == 0 ) and (a < 0  and a % 8 == 0)){
                cout << "=== > "<< a << endl;
            }
        }
    }

    system("pause");
}