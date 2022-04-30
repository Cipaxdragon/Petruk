#include <iostream>
using namespace std;
int main(){
    char yn;
    int a,b,c;
    ulang : 
    cout << "===== Program  ======" << endl;

    cout << "Input A = "; cin >> a;
    cout << "Input B = "; cin >> b;
    cout << "Input C = "; cin >> c;
    
    for(int i = 1;i <= 100;i++){
        if(i % 2 == 0 ){
            if(i > b and i < c){
                cout << "Bilangan Genap yang Lebih dari " << b << " dan kurang dari " << c << " == " << i << endl;
            }
        }
    }

    cout << endl;

    for(int i = 1;i <= 100;i++){
        if(i % a == 0){
            if(i > b and i < c){
                cout << "Bilangan Kelipatan " << a << " Yang Lebih Besar dari " << b << " dan lebih kecil dari " << c << " == " << i << endl;
            }
        }
    }

    while (true){        
        cout << endl;
        cout << "Restart the program? [y/n]==> ";
        cin >> yn;
        if(yn == 'y'){
            break;
        }else if(yn == 'n'){
            cout << endl << "exiting........" << endl;
            system("pause");
            return 0;
        }else{
            cout << "Inputan Cuma [y/n] (Huruf Kecil)" << endl;
        }
    }
    goto ulang;
}