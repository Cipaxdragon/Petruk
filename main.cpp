#include <iostream>

using namespace std;
void rokok();
void cemilan();
void minuman();

int main(){
    string username = "nama";
    string password = "nama123";
    string a,b;
    int kesempatan = 3;
    bool berhasil = false;
    do{
        cout << "Tekan Enter Untuk Lanjut ...." << endl;
        cin.ignore();
        cout << "===== Login =====" << endl;
        cout << "Masukan Username ==> "; cin >> a;
        cout << "Masukan Password ==> "; cin >> b;
        if(a == username and b == password){
            berhasil == true;
            break;
        }
        else if(a != username and b == password){
            cout << "username salah" << endl;
            kesempatan--;
        }
        
        else if(a == username and b != password){
            cout << "password salah" << endl;
            kesempatan--;
        }
        
        else{
            cout << "Username dan password salah" << endl;
            kesempatan--;
        }
        
        if(kesempatan == 0){
            cout << "Kesempatan habis" << endl;
            cout << "Kamu di blokir" << endl;
            cout << endl;
            cout << endl;
            cin.get(); 
            return 'a';
        }

        cout << "Kesempatan sisa " << kesempatan << "x" <<endl;
        cout << endl;
        cout << endl;
    }while(berhasil == false);
    cout << "Berhasil login" << endl;

    cout << endl;
    cout << endl;
    int pilihan;
    bool c = false;
    while(c == false){
        cout << "====== Menu kategori barang =====" << endl;
        cout << "1.Rokok" << endl;
        cout << "2.Cemilan" << endl;
        cout << "3.Minuman" << endl;
        
        cout << endl;
        cout << "[Menu 1-3] ==> "; cin >> pilihan;

        switch (pilihan){
        case 1:
            rokok();

            break;
        case 2:
            cemilan();
            break;
        
        case 3:
            minuman();
            break;
        
        default:
            cout << "Pilihan cuma 1-3" << endl;
            cout << endl;
            cout << endl;
            cin.get();
            break;
        }
        cin.get();
    }
}


void rokok(){
    int pilihan;
    string surya = "Surya 16 (Rp 25.000)"; 
    string soemporna = "Soemporna 16 (Rp 20.000)"; 
    string malboro = "malboro 16 (Rp 40.000)"; 
    cout << "==== Kategori rokok =====" << endl;
    cout << endl;
    bool exit = false;
    while (exit == false){
        /* code */
        cout << "=== Kategori Rokok ===" << endl;
        cout << "1. " << surya << endl;
        cout << "2. " << soemporna << endl;
        cout << "3. " << malboro << endl;
        cout << "4. Exit" << endl;
        cout << "[1-4] ==> " ;
        cin >> pilihan;

        switch (pilihan){
        case 1:
            cout << "Anda Memilih " <<  surya <<endl;
            break;
        case 2:
            cout << "Anda Memilih " <<  soemporna <<endl;
            break;
        case 3:
            cout << "Anda Memilih " <<  malboro <<endl;
            break;
        case 4 :
            cout << "exitting..." << endl;
            exit = true;
            break;
        default:
            cout << "Pilihan cuma 1-4" << endl;
            break;
            
        }
        cout << endl;
    }
    
    cin.get();
    cout << endl << endl;
}

void cemilan(){
    cout << "==== Kategori cemilan =====" << endl;
    cin.get();
    cout << endl << endl;
}

void minuman(){
    cout << "==== Kategori minuman =====" << endl;
    cin.get();
    cout << endl << endl;
}


