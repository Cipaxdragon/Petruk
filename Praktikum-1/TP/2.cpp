#include <iostream>

using namespace std;

int main(){
    cout << "==== No - 2 =====" << endl;
    float rata,praktikum,teori,tugas_final;

    cout << "[Nilai praktikum]==> "; cin >> praktikum;  
    cout << "[Nilai teori]==> "; cin >> teori;  
    cout << "[Nilai tugas_final]==> "; cin >> tugas_final;  

    cout << "Nilai  Rata-Rata : "<<  (praktikum * 0.4) + (teori * 0.4) + (tugas_final * 0.2)  << endl;  

    system("pause");
}