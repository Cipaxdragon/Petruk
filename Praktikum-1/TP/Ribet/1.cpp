#include <iostream>
#include <cmath> // membutuhkan fungsi sqrt() untuk penarikan akar pangkat 2
using namespace std;

void sisimiring();
void keliling();

int main(){
    int pilihan;
    cout << "===== Program Segitiga ======" << endl;

    cout << "Ingin Menghitung Apa : " << endl;
    cout << "1. Sisi Miring\n2. Keliling Siku Siku" << endl;
    
    cout << endl;

    cout << "[1/2]===> ";
    cin >> pilihan;

    switch (pilihan){
        case 1:
            sisimiring();
            break;
        case 2 :
            keliling();
            break;
        default:
            break;
    }

    system("pause");
    system("cls");
    main();
}


void sisimiring(){
    int a,b;
    cout << "Masukan Tinggi Segitiga ==> ";
    cin >> a;

    cout << "Masukan Alas Segitiga ==> ";
    cin >> b;

    cout << "Panjang Sisi Miringnya  Adalah : " << sqrt((a*a) + (b*b)) << endl; 
}


void keliling(){
    int a,b,c;
    cout << "Masukan Panjang Tinggi ==> ";
    cin >> a;

    cout << "Masukan Panjang Alas ==> ";
    cin >> b;

    cout << "Masukan Panjang Sisi Miring ==> ";
    cin >> c;

    cout << " Kelilingnya Aadalah : " << a+b+c << endl;

}