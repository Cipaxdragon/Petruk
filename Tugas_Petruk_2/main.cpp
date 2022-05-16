#include <iostream>
using namespace std;
string nama[20];
int status[20];
int kondisi[20];
string nohp[20];
int waktu[20];

void tampilkan();
void edit();
void tambah();
int x = 0;

auto statuskamar = [](int i){
    if(i == 1){
        return "ada ";
    }
    else{
        return "kosong";
    }
    
};

auto kondisikamar = [](int a){
    if(a == 1){
        return "ada penyewa";
    }else if(a == 2){
        return "selesai sewa";
    }else{
        return "---";
    }
};


int main(){
    int pilih;
    while (true){
        cout << "===== Maman Homestay ======" << endl;
        cout << "1. Cek Kamar" << endl;
        cout << "2. Set Info Kamar" << endl;
        cout << "3. Tambah penyewa" << endl;
        cout << "[1-2] ==> "; cin >> pilih;
        if(pilih == 1){tampilkan();}
        else if(pilih == 2){edit();}
        else if(pilih == 3){tambah();}
        else{cout << "Pilhan cuma 1-3" << endl;}
        cin.get();
        system("cls");
    }
    


    system("pause");
}

void tampilkan(){
    cout << "==== Status Kamar =====" << endl;
    for(int i = 0;i < 20;i++){
        cout << "============Kamar "<< i+1 << " ====================="<<endl;
        cout << "Status          : " << statuskamar(status[i]) << endl;
        cout << "kondisi         : " << kondisikamar(kondisi[i]) << endl;
        cout << "Nama Penyewa    : " << nama[i]<<endl;
        cout << "No Handphone    : " << nohp[i]<< endl;
        cout << "Lama Sewa       : " << waktu[i] <<  " hari"<<endl;
        cout << endl;
        cout << endl;
    }
}




void edit(){
    int edit;
    cout << "==== Set Edit Kamar ===" << endl;
    tampilkan();
    cout << "[Mau edit kamar berapa]" << endl;
    cout << "[Input] ==>"; cin >> edit;

    cout << "Status          : " << statuskamar(status[edit]) << endl;
    cout << "No Handphone    : " << nohp[edit]<< endl;
    cout << "Lama Sewa       : " << waktu[edit] <<  " hari"<<endl;   

    cout << "==== Editing ====" << endl;
    cout << "-- status --" << endl;
    cout << "1. ada" << endl;
    cout << "2. kosong" << endl;
    cout << "Status   ==> "; cin >> status[edit];

    cout << "-- Kondisi --" << endl;
    cout << "1. ada penyewa" << endl;
    cout << "2. selesai sewa" << endl;
    cout << "kondisi  ==> "; cin >> kondisi[edit];
    
}

void tambah(){
    cout << "===== Tambah Penyewa ======" << endl;
    cout << "Kamar = "<< x + 1 << endl;
    cout << "Nama Penyewa ==> "; cin >> nama[x];
    cout << "No Hp ==> "; cin >> nohp[x];
    cout << "Lama sewa [hari] ==>"; cin >> waktu[x];
    status[x]  = 1;
    kondisi[x] = 1;
    x++;
}
