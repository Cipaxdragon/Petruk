#include <iostream>
#include <conio.h>
using namespace std;

string username = "nama";
string password = "nama123";
bool gagal = false;

void login();
void menu();
void tampilkan();
void data();
    string namatoko;
    string namakasir;
    string kategori;
    string barang;
    string harga;
int main(){
    cout << "===== Toko Grosir Ratna ======" << endl;
    login();
    if(gagal == true){
        cout << "Kamu Diblokir" << endl;
        system("pause");
        return 0;
    }
    data();
    menu();
    tampilkan();
    system("pause");
}

void login(){
    string a;
    string b;
    int kesempatan = 3;
    while(kesempatan != 0){
        
        cout << "--- Log in ---" << endl;
        cout << endl;
        cout << "[User name] => ";
        cin >> a;
        cout << "[Password] => ";
        cin >> b;
        cout << endl;
        if(a == username and b == password){
            cout << "Login Sukses " << endl;
            break;
        }
        else if(a == username and b != password){
            cout << "Password Salah" << endl;
        }
        else if(a != username and b == password){
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
    cout << "=== Menu Kategori ===" << endl;
    cout << "1. Alat Mandi  " << endl;    
    cout << "2. Minuman     " << endl;    
    cout << "3. Bumbu Dapur " << endl;
    cout << "==> "; cin >> pilihan;   
    switch (pilihan){
    case 1:
        kategori = "Alat Mandi";
        cout << "-- Perlengkapan Mandi" << endl;
            cout << "1. Live Boy (Rp 3.000)" << endl;
            cout << "2. Head and Shoulders (Rp 21.000)" << endl;
            cout << "3. Pepsodent (Rp 5.000)" << endl;
            cout << "==> "; cin >> b;   
            if(b == 1){
                harga = "Rp 3.000";
                barang = "Live Boy";
            }
            else if(b == 2){
                harga = "Rp 21.000";
                barang = "Head and Shoulders";
            }else if(b == 3){
                harga = "Rp 5.000";
                barang = "Pepsodent";
            }
            break;
    case 2:
        kategori = "Minuman";
        cout << "--- Minuman" << endl;
            cout << "1. Teh Kotak (Rp 5.000)" << endl;
            cout << "2. Fruit Tea (Rp 24.000)" << endl;
            cout << "3. Fanta (Rp 25.000)" << endl;
            cout << "==> "; cin >> b;   
            if(b == 1){
                harga = "Rp 5.000";
                barang = "Teh Kotak";
            }
            else if(b == 2){
                harga = "Rp 24.000";
                barang = "Fruit Tea";
            }else if(b == 3){
                harga = "Rp 25.000";
                barang = "Fanta";
            }
            break;
    case 3:
        kategori = "Bumbu Dapur";
        cout << "bumbu" << endl;
            cout << "1. Kecap ABC(Rp 7.000)" << endl;
            cout << "2. Tepung Terigu (Rp 20.000)" << endl;
            cout << "3. Masako (Rp 9.000)" << endl;
            cout << "==> "; cin >> b;   
            if(b == 1){
                harga = "Rp 7.000";
                barang = "Kecap ABC";
            }
            else if(b == 2){
                harga = "Rp 20.000";
                kategori = "Tepung Terigu";
            }else if(b == 3){
                harga = "Rp 9.000";
                barang = "Masako";
            }     
        break;

        
    default:
        cout << "Pilihan cuma 3" << endl;
        break;
    }
}

void data(){
    cout << "Nama Toko :"; cin >> namatoko ;
}

void tampilkan(){
    system("cls");
    cout << "---- Info Transaksi ----" << endl;
    cout << "Nama Toko  : " << namatoko << endl;
    cout << "Nama Kasir : " << username << endl;
    cout << "Kategori   : " << kategori << endl;
    cout << "Barang     : " << barang << endl;
    cout << "Harga      : " << harga << endl;
}

