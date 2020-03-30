#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

using namespace std;

int main(){
    char kata[15];
    int data, i,  flag=0;
    char ulang;
    awal:
    system("CLS");

    cout<<"Aplikasi Stack untuk Membalik Kalimat"<<endl;
    cout<<"====================================="<<endl;
    cout<<"Masukan kata : ";
    cin>>kata;
    cout <<endl;

    data=strlen(kata);

    cout<<"Jumlah Huruf   : "<<data<<endl;
    cout<<"Kata Asli      : "<<kata<<endl;
    cout<<"Kata Setelah di balik adalah : ";

    for(i=data;i>=1;i--){
        char stack=kata[i-1];
        cout<<stack<<" ";
    }
    cout<<endl;

    for(i=0;i < data ;i++){
        if(kata[i] != kata[data-i-1]){
            flag = 1;
            break;
        }
    }
    if(flag){
        cout<<endl<<kata<<" bukanlah kata palindrome"<<endl;
    }
    else{
        cout<<endl<<kata<<" adalah kata palindrome"<<endl;
    }

    cout<< "\n========================\n";
    cout << "Mau Mencoba Ulang? Y/N\n";
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
