#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

int kesempatan = 3;

string username = "nama";
string password = "nama123";

string barangpembeli,kategoripembeli,hargabarangpembeli;
int bayar,kembalian;

string kategori[3] = {
    "Barang  Fiksi",
    "Barang  Masakan",
    "Barang  Sejarah",
};
string barang [3][3];
string harga[3][3];

string toko;
string kasir;
void tampilkan();
void login();
void gantisandi();
void menu();

bool keluar = false;

int main(){

    barang[0][0] = "Sang Pemimpi";
    barang[0][1] = "Si kancil";
    barang[0][2] = "Sangkuriang";

    barang[1][0] = "Kue kering";
    barang[1][1] = "Resep Aneka Nasi Goreng";
    barang[1][2] = "Kue basah";

    barang[2][0] = "Sejarah indonesia";
    barang[2][1] = "Sejarah kerajaan besar";
    barang[2][2] = "Sejarah sumatra";

    harga[0][0] = "20000";
    harga[0][1] = "30000";
    harga[0][2] = "40000";

    harga[1][0] = "20000";
    harga[1][1] = "30000";
    harga[1][2] = "40000";

    harga[2][0] = "20000";
    harga[2][1] = "30000";
    harga[2][2] = "40000";

    cout << "===== Program  ======" << endl;
    login();
    if(keluar == true) return 0;
    menu();
    tampilkan();
    system("pause");
}

void login(){
    char ch;
    string u;
    string p;
    while(kesempatan != 0){
        cout << "[username] => "; cin >> u; 
        cout << "[password] => ";
        ch = _getch();
        while(ch != 13){
            p.push_back(ch);
            ch = _getch();
            cout << '*';
        }
        cout << endl;
        if(u == username and p == password){
            cout << "Login berhasil" << endl;
            break;
        }
        else if(u == username and p != password){
            cout << "password salah" << endl;
            kesempatan--;
        }
        else if(u != username and p == password){
            cout << "username salah" << endl;
            kesempatan--;
        }
        else {
            cout << "Username dan Password salah" << endl;
            kesempatan--;
        }
        if(kesempatan == 0){
            gantisandi();
        }
    }
}
void gantisandi(){
    char yn;
    cout << "Kesempatan habis" << endl;
    cout << "Mau ganti sandi?[Y ,N] ==> "; cin >> yn;
    if(yn == 'y'){
        cout << "[password baru]==> "; cin >> password;
        kesempatan = 3;
    }else{
        keluar = true;
    }
}
void menu(){
    char pilih,pilih2;
    cout << "-- Toko Barang  --" << endl;
    cout << "- Kategori" << endl;
    cout << "A. "<< kategori[0] << endl;
    cout << "B. "<< kategori[1] << endl;
    cout << "C. "<< kategori[2] << endl;
    cout << "[A-C] ==> "; cin >> pilih;
        int a,b;
    pilih = toupper(pilih);
    switch (pilih){
        case 'A':    
            cout << kategori[0] << endl;
            cout << "A. "<<  barang[0][0] << endl;
            cout << "B. "<<  barang[0][1] << endl;
            cout << "C. "<<  barang[0][2] << endl;
            cout << "[A-C] ==> "; cin >> pilih2;
            pilih2 = toupper(pilih2);
            if(pilih2 == 'A'){
                a = 0;
                b = 0;
            }
            else if(pilih2 == 'B'){
                a = 0;
                b = 1;
            }
            else if(pilih2 == 'C'){
                a = 0;
                b = 2;
            }else{
                cout << "Cuma A,B,C" << endl;
            }
            kategoripembeli =  kategori[0];
            barangpembeli =  barang[a][b];
            hargabarangpembeli = harga[a][b];
            cout << "Barang  "<< barang[a][b] << " berhasil di beli" << endl; 
            break;
        case 'B':    
            cout << kategori[1] << endl;
            cout << "A. "<<  barang[1][0] << endl;
            cout << "B. "<<  barang[1][1] << endl;
            cout << "C. "<<  barang[1][2] << endl;
            cout << "[A-C] ==> "; cin >> pilih2;
            pilih2 = toupper(pilih2);

            if(pilih2 == 'A'){
                a = 1;
                b = 0;
            }
            else if(pilih2 == 'B'){
                a = 1;
                b = 1;
            }
            else if(pilih2 == 'C'){
                a = 1;
                b = 2;
            }else{
                cout << "Cuma A,B,C" << endl;
            }
            kategoripembeli =  kategori[0];
            barangpembeli =  barang[a][b];
            hargabarangpembeli = harga[a][b];
            cout << "Barang  "<< barang[a][b] << " berhasil di beli" << endl; 
            break;
        case 'C':    
            cout << kategori[2] << endl;
            cout << "A. "<<  barang[2][0] << endl;
            cout << "B. "<<  barang[2][1] << endl;
            cout << "C. "<<  barang[2][2] << endl;
            cout << "[A-C] ==> "; cin >> pilih2;
            pilih2 = toupper(pilih2);

            if(pilih2 == 'A'){
                a = 2;
                b = 0;
            }
            else if(pilih2 == 'B'){
                a = 2;
                b = 1;
            }
            else if(pilih2 == 'C'){
                a = 2;
                b = 2;
            }else{
                cout << "Cuma A,B,C" << endl;
            }
            kategoripembeli =  kategori[0];
            barangpembeli =  barang[a][b];
            hargabarangpembeli = harga[a][b];
            cout << "Barang  "<< barang[a][b] << " berhasil di beli" << endl; 
            break;
        default:
            cout << "Pilihan cuma A-C" << endl;
            break;
    }
    cout << "Nama Toko  ==> "; cin >> toko;
    cout << "Nama Kasir ==> ";cin >> kasir;
    cout << "Bayar ==> "; cin >> bayar;
}

void tampilkan(){
    int hargaa;
    hargaa = stoi(hargabarangpembeli);
    cout << "-- Info Pembelian --" << endl;
    cout << "Nama Toko    : " << toko <<endl;
    cout << "Nama Kasir   : " << kasir << endl;
    cout << "Nama Barang  : " << barangpembeli << endl;
    cout << "Kategori     : " << kategoripembeli << endl;
    cout << "Harga Barang : " << hargabarangpembeli << endl;
    cout << "Uang         : " << bayar << endl;
    kembalian = bayar - hargaa;
    cout << "Kembalian    : " << kembalian << endl;
}