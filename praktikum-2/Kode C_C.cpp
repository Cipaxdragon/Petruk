#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

string username = "nama";
string password = "nama123";
bool gagal = false;

string kategori[3]={
    "Oli",
    "Ban",
    "Rem",
};
int price[3][3];
string barang[3][3];

void login();
void menu();
void tampilkan();
void data();
    string namatoko;
    string namakasir;
    string barang_1;
    string produk;
    int harga;

int main(){
    // barang kategori 1
    barang[0][0] = "Oli Yamaha Lube"; price[0][0] = 10000;
    barang[0][1] = "Ahm OIl"; price[0][1] = 10000;
    barang[0][2] = "Motul"; price[0][2] = 10000;
    // barang kategori 2
    barang[1][0] = "Dunloop"; price[1][1] = 10000;
    barang[1][1] = "Corsa"; price[1][2] = 10000;
    barang[1][2] = "IRS"; price[1][3] = 10000;
    // barang kategori 3
    barang[2][0] = "Brembo"; price[2][0] = 10000;
    barang[2][1] = "RCB"; price[2][1] = 10000;
    barang[2][2] = "NISIN"; price[2][2] = 10000;

    cout << "===== Barang ======" << endl;
    login();
    if(gagal == true){
        cout << "Kamu akan keluar" << endl;
        system("pause");
        return 0;
    }
    data();
    menu();
    tampilkan();
    system("pause");
}

void login(){
    string input_username;
    string input_pasword;
    int kesempatan = 3;
    while(kesempatan != 0){

        cout << "--- Login ---" << endl;
        cout << endl;
        cout << "-- User name => ";
        cin >> input_username;
        char ch;
        cout << "-- Password => ";
        ch = _getch();
        while(ch != 13){
            input_pasword.push_back(ch);
            ch = _getch();
            cout << '*';
        }
        cout << endl;
        if(input_username == username and input_pasword == password){
            cout << "Login Berhasil" << endl;
            break;
        }
        else if(input_username == username and input_pasword != password){
            cout << "Password Salah" << endl;
        }
        else if(input_username != username and input_pasword == password){
            cout << "Username Salah" << endl;
        }
        else{
            cout << "User name dan password salah" << endl;
        }
        kesempatan--;
        cout << "Kesempatan Sisa : " << kesempatan << endl;

        if(kesempatan == 0){
            cout << "Kesempatan habis" << endl;
            gagal = true;
        }
    }
}
void menu(){
    int pilihan;
    int b;
    cout << "--- Menu ---" << endl;
    cout << "1. " << kategori[0] << endl;
    cout << "2. " << kategori[1] << endl;
    cout << "3. " << kategori[2] << endl;
    cout << "==> "; cin >> pilihan;   
    switch (pilihan){
    case 1:
        cout << "-- " << kategori[0] << endl;
        cout << "1. " << barang[0][0] << endl;
        cout << "2. " << barang[0][1] << endl;
        cout << "3. " << barang[0][2] << endl;
        cout << "[1-3] ===> ";cin >> pilihan;
        if(pilihan == 1){
            produk = kategori[0];
            barang_1 = barang[0][0];
            harga = price[0][0];
        }else if(pilihan == 2){
            produk = kategori[0];
            barang_1 = barang[0][1];
            harga = price[0][1];
        }else if(pilihan == 3){
            produk = kategori[0];
            barang_1 = barang[0][2];
            harga = price[0][2];
        }
        break;
    case 2:
        cout << "-- " << kategori[1] << endl;
        cout << "1. " << barang[1][0] << endl;
        cout << "2. " << barang[1][1] << endl;
        cout << "3. " << barang[1][2] << endl;
        cout << "[1-3] ===> "; cin >> pilihan;
        if(pilihan == 1){
            produk   = kategori [1];
            barang_1 = barang   [1][0];
            harga    = price    [1][0];
        }else if(pilihan == 2){
            produk   = kategori[0];
            barang_1 = barang  [1][1];
            harga    = price   [1][1];
        }else if(pilihan == 3){
            produk = kategori[1];
            barang_1 = barang[1][1];
            harga = price    [1][2];
        }
        break;
    case 3 : 
        cout << "-- " << kategori[2] << endl;
        cout << "1. " << barang[2][0] << endl;
        cout << "2. " << barang[2][1] << endl;
        cout << "3. " << barang[2][2] << endl;
        cout << "[1-3] ===> "; cin >> pilihan;
        if(pilihan == 1){
            produk   = kategori [2];
            barang_1 = barang   [2][0];
            harga    = price    [2][0];
        }else if(pilihan == 2){
            produk   = kategori[2];
            barang_1 = barang  [2][1];
            harga    = price   [2][1];
        }else if(pilihan == 3){
            produk = kategori[2];
            barang_1 = barang[2][2];
            harga = price    [2][2];
        }
        break;

    default:
        cout << "Pilihan cuma 3" << endl;
        break;
    }
}

void data(){
    cout << "Nama Toko :"; cin >> namatoko ;
    cout << "Nama Kasir :"; cin >> namakasir;

}

void tampilkan(){
    system("cls");
    cout << "---- Struct ----" << endl;
    cout << "Nama Toko  : " << namatoko << endl;
    cout << "Nama Kasir : " << namakasir << endl;
    cout << "Kategori   : " << produk << endl;
    cout << "Makanan    : " << barang_1 << endl;
    cout << "Harga      : " << harga << endl;
}
