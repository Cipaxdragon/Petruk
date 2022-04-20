#include <iostream>
#include <cmath>
using namespace std;


int main(){
    float a,b,c;
    cout << "==== No - 1 =====" << endl;
    int pilih;
    cout << "== Menghitung ==" << endl;
    cout << "1. keliling - segitiga" << endl;
    cout << "2. Sisi Miring segitiga" << endl;
    cout << "[1/2]==> ";
    cin >> pilih;

    switch(pilih){
        case 1:

            cout << "Masukan Nilai a => "; cin >> a;
            cout << "Masukan Nilai b => "; cin >> b;
            cout << "Panjang Sisi Miring segitiganya :  " << sqrt((a*a) + (b*b)) << endl;

            break;
        case 2:
            cout << "Masukan Nilai a => "; cin >> a;
            cout << "Masukan Nilai b => "; cin >> b;
            cout << "Masukan Nilai c => "; cin >> c;
            cout << "Panjang Keliling segitiganya :  " << a + b + c << endl;
            break;
        default:
            cout << "Pilihan tidak dikenali" << endl;
            break;
            
    }


    if (pilih == 1){

    }else if(pilih == 2){
        
    }



    system("pause");
    system ("cls");
    main();
}