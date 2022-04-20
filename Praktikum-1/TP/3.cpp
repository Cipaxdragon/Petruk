#include <iostream>

using namespace std;

int main(){
    double hsepeda,bunga,bulan;
    double hperbulan,total,untung;

    cout << "==== No 3 =====" << endl;

    cout << "[Harga Sepeda]==> "; cin >> hsepeda;
    cout << "[Lama Bulan  ]==> "; cin >> bulan;

    do{
        cout << "[Bunga 0-100%]==> "; cin >> bunga;

    }while(!(bulan<= 100 and bulan >= 0));

    bunga     =  hsepeda * (bunga / 100);
    hperbulan = (hsepeda /  bulan) + bunga;
    total     = hperbulan * bulan;
    untung    = total - hsepeda;

    cout << "Cicilan Perbulan : Rp" << hperbulan << endl;
    cout << "Total            : Rp" << total << endl;
    cout << "Untung           : Rp" << untung << endl;

    system("pause");
}