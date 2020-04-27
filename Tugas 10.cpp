#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

main(){
    int i, j, k, a, b, jumlah;
    char huruf[100][100], temp[40], ulang ;
    awal :
        system("cls") ;

    cout << "=========================================" << endl
        << "Selamat Datang Dalam Program Pengurut Huruf" << endl
        << "===========================================" << endl
        << " Masukkan Jumlah Huruf Yang Anda Ingin Urutkan : " ;
    cin >> jumlah ;

    for ( i=1; i<=jumlah; i++){
        cout << "Masukkan Huruf KE - " << i << " = ";
        cin >> huruf[i] ;
        if (i>1){
            for (j=1; j<=(i-1); j++){
                a = ( strcmp (huruf[i], huruf[j]) ) ;
                if (a<=0){
                    strcpy (temp, huruf[i]) ;
                    for (k=(i-1);k>=j;k--){
                        b = (k+1) ;
                        strcpy (huruf[b], huruf[k]) ;
                    }
                strcpy (huruf[j], temp) ;
                }
            }
        }
    }
    cout << "Hasil setelah diurutkan adalah : " ;
    for ( i=1; i<=jumlah; i++ ){
        cout << " " << huruf[i] ;
    }
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
        cout << endl
            << "Terima Kasih Telah Menggunakan Program Ini :)"
            << endl;
    return 0;
}

