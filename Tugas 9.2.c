#include <stdio.h>
#include <stdlib.h>
#define N 255

void replace(char *data, char cari, char ganti){
    int i=0;

    while(*data !='\0'){
      *data=((*data == cari)?ganti:*data);
         data++;
        i++;
    }
}

int main(){
    char data[N], cari, ganti, ulang;
    awal:
        system("cls");

    printf("Masukkan sebuah kalimat: ");
    scanf("%[^\n]", data);
    printf("> Masukan karakter yang dicari: ");
    getchar();
    scanf("%c", &cari);
    printf("> Karakter pengganti: ");
    getchar();
    scanf("%c", &ganti);

    replace(data,cari, ganti);
    printf("Hasil replace adalah sebagai berikut: %s\n\n", data);

    return 0;
}


