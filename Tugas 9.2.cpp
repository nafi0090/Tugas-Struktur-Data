#include <iostream>
#include <stdlib.h>
#define N 255

using namespace std;

void gantikata(char *data, char cari, char ganti){
    int i=0;

    while(*data !=0){
        *data=((*data == cari)?ganti:*data);
        data++;
        i++;
    }
}

int main(){

    char data[N], cari, ganti;
    char ulang;
    awal:
        system("cls");

    cout << "==============================="  << endl
        << "     Program Replace kata"         << endl
        << "==============================="   << endl ;

    cout << "Masukkan sebuah kata : ";
    cin >> data;
    cout << "> Masukkan karakter yang dicari: ";
    cin >> cari;
    cout << "> Karakter pengganti: ";
    cin >> ganti;

    gantikata(data,cari, ganti);
    cout <<"\nHasil replace adalah = "<< data;

    cout << endl << endl
        << "========================" << endl
        << "Mau Mencoba Ulang? (Y/N) " ;
    cin >> ulang;
    if(ulang=='Y'||ulang=='y')
        {
            goto awal;
        }
        else if(ulang=='N'||ulang=='n'){
            goto akhir;
        }
        else{
            cout<<"Pilihan yang anda masukkan salah";
        }

    akhir:
    return 0;
}


