#include <iostream>
#include <conio.h>
using namespace std;

string username = "Pani";
string password = "Pani";
bool gagal = false;

string kategori[0]={
    "Korean Food",
    "Japan Food",
    "indonesian food",
}
string barang[2][2];
barang[0][0] = "Chicken Katsu"; 
barang[0][1] = "Kimbab"; 
barang[0][2] = "Toppoki"; 

barang[1][0] = "Susi"; 
barang[1][1] = "Ramen"; 
barang[1][2] = "Onigiri"; 

barang[2][0] = "Nasi Goreng"; 
barang[2][1] = "Mie Goreng"; 
barang[2][2] = "Soto"; 


void login();
void menu();
void tampilkan();
void data();
    string namatoko;
    string namakasir;
    string hp;
    string produk;
    string harga;

void kategori();
int main(){
    
    cout << "===== Toko HP ======" << endl;
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
    cout << "1. Samsum" << endl;    
    cout << "2. Vivo" << endl;    
    cout << "3. Asus" << endl;
    cout << "==> "; cin >> pilihan;   
    switch (pilihan){
    case 1:
        produk = "Samsum";
        cout << "--- Samsum ---" << endl;
            cout << "1. samsum j2 prime (Rp 1.000.000)" << endl;
            cout << "2. samsum s30 (Rp 2.000.000)" << endl;
            cout << "3. samsum lipat (Rp 3.000.000)" << endl;
            cout << "==> "; cin >> b;   
            if(b == 1){
                harga = "Rp 1.000.000";
                hp = "samsum j2 prime";
            }
            else if(b == 2){
                harga = "Rp 2.000.000";
                hp = "samsum s30";
            }else if(b == 3){
                harga = "Rp 3.000.000";
                hp = "samsum lipat";
            }
            break;
    case 2:
        produk = "Vivo";
        cout << "--- Vivo ---" << endl;
            cout << "1. Vivo G70 (Rp 1.000.000)" << endl;
            cout << "2. Vivo y21 (Rp 2.000.000)" << endl;
            cout << "3. Vivo 23e (Rp 3.000.000)" << endl;
            cout << "==> "; cin >> b;   
            if(b == 1){
                harga = "Rp 1.000.000";
                hp = "Vivo G70";
            }
            else if(b == 2){
                harga = "Rp 2.000.000";
                hp = "Vivo y21";
            }else if(b == 3){
                harga = "Rp 3.000.000";
                hp = "Vivo 23e";
            }
            break;
    case 3:
        produk = "Asus";
        cout << "--- Asus ---" << endl;
            cout << "1. Asus Zenfone (Rp 1.000.000)" << endl;
            cout << "2. Asus Zenfone Max (Rp 2.000.000)" << endl;
            cout << "3. Asus Max Pro M2 (Rp 3.000.000)" << endl;
            cout << "==> "; cin >> b;   
            if(b == 1){
                harga = "Rp 1.000.000";
                hp = "Asus Zenfone";
            }
            else if(b == 2){
                harga = "Rp 2.000.000";
                hp = "Asus Zenfone Max";
            }else if(b == 3){
                harga = "Rp 3.000.000";
                hp = "Asus Max Pro M2";
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
    cout << "jenis hp   : " << hp << endl;
    cout << "Harga      :  " << harga << endl;
}
