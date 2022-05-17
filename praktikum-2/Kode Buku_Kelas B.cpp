#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

int kesempatan = 3;

string username = "qila";
string password = "qila123";

string bukupembeli,kategoripembeli,hargabukupembeli;
int bayar,kembalian;

string kategori[3] = {
    "Buku Fiksi",
    "Buku Masakan",
    "Buku Sejarah",
};
string buku [3][3];
string harga[3][3];

string toko;
string kasir;
void tampilkan();
void login();
void gantisandi();
void menu();

bool keluar = false;

int main(){

    buku[0][0] = "Sang Pemimpi";
    buku[0][1] = "Si kancil";
    buku[0][2] = "Sangkuriang";

    buku[1][0] = "Kue kering";
    buku[1][1] = "Resep Aneka Nasi Goreng";
    buku[1][2] = "Kue basah";

    buku[2][0] = "Sejarah indonesia";
    buku[2][1] = "Sejarah kerajaan besar";
    buku[2][2] = "Sejarah sumatra";

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
        while(true){
            ch = _getch();
        if(ch == 13){
            break;
        }else if(ch == '\b'){
            p.pop_back();
        }else{
            p.push_back(ch);
            cout << "*";
        }
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
    cout << "-- Toko buku --" << endl;
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
            cout << "A. "<<  buku[0][0] << endl;
            cout << "B. "<<  buku[0][1] << endl;
            cout << "C. "<<  buku[0][2] << endl;
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
            bukupembeli =  buku[a][b];
            hargabukupembeli = harga[a][b];
            cout << "Buku "<< buku[a][b] << " berhasil di beli" << endl; 
            break;
        case 'B':    
            cout << kategori[1] << endl;
            cout << "A. "<<  buku[1][0] << endl;
            cout << "B. "<<  buku[1][1] << endl;
            cout << "C. "<<  buku[1][2] << endl;
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
            bukupembeli =  buku[a][b];
            hargabukupembeli = harga[a][b];
            cout << "Buku "<< buku[a][b] << " berhasil di beli" << endl; 
            break;
        case 'C':    
            cout << kategori[2] << endl;
            cout << "A. "<<  buku[2][0] << endl;
            cout << "B. "<<  buku[2][1] << endl;
            cout << "C. "<<  buku[2][2] << endl;
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
            bukupembeli =  buku[a][b];
            hargabukupembeli = harga[a][b];
            cout << "Buku "<< buku[a][b] << " berhasil di beli" << endl; 
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
    hargaa = stoi(hargabukupembeli);
    cout << "-- Info Pembelian --" << endl;
    cout << "Nama Toko    : " << toko <<endl;
    cout << "Nama Kasir   : " << kasir << endl;
    cout << "Nama Barang  : " << bukupembeli << endl;
    cout << "Kategori     : " << kategoripembeli << endl;
    cout << "Harga Barang : " << hargabukupembeli << endl;
    cout << "Uang         : " << bayar << endl;
    kembalian = bayar - hargaa;
    cout << "Kembalian    : " << kembalian << endl;
}
