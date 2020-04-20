#include <stdlib.h>
#include <iostream>
#include <conio.h>

using namespace std;

void cari (int A[10], int k){

    int index[10], i,j=0,n;

    for (i=0;i<10;i++){
        if(A[i]==k){
            index[j]=i;
            j++;
        }
      }

    if (j>0){
        cout << "Data yang anda cari berada diposisi ke " ;

        for(i=0;i<j;i++){
            cout << index[i] << " ";
        }
    }else{
        cout << endl
            << "Maaf data yang dicari tidak ditemukan";
    }
    getch();
}

int main()
{
    int data[10], i, data2, batas;
    char ulang;
    awal:
    system("CLS");

    cout << "Pencarian Angka" << endl
        << "Masukkan Banyak Angka : " ;
    cin >> batas;

    for(i=1; i<=batas; i++){
        cout << "Masukan Angka ke - " << i << " = " ;
        cin >> data[i] ;
    }
    cout<< endl ;

    cout << "Data yang ingin dicari : " ;
    cin >> data2 ;

    cari(data, data2) ;

    cout << endl << endl
        << "========================" << endl
        << "Mau Mencoba Ulang? Y/N " ;
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
