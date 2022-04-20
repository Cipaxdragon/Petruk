#include <iostream>

using namespace std;

int main(){

    cout << "===== Program Cicilan ======" << endl;
    float harga,bulan,cicilan,bunga;
    cout << "Masukan Harga Sepeda yang Ingin DiCicil => ";
    cin >> harga;
    cout << "Masukan Berapa Bulan Cicilan => ";
    cin >> bulan;
    float persen;
    cout << "Masukan Berapa Persen Bunganya [0-100%]=> ";
    cin >> persen;

    cicilan = harga / bulan;
    bunga = persen / 100;
    bunga = cicilan * bunga; 
    cout << "Bunga["<< persen << "%] = Rp +" << bunga << endl;

    int cicilan_bunga;
    cicilan_bunga = cicilan + bunga;
    cout << endl;
    for(int i = 0;i < bulan;i++){
        cout << "Bulan Ke " << i + 1 << " Rp "<< cicilan_bunga << endl << endl; 
    }
    long total = cicilan_bunga * bulan;
    cout << "Total : " << total << endl;
    float untung;
    untung = cicilan_bunga * bulan  - harga;
    cout << "Untung dari Cicilan : " << untung << endl;
    system("pause");
}