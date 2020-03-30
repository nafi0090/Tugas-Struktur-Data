#include <iostream>

using namespace std;

struct node{
    string mahasiswa;
    int nim;
    node* next;
};
node* a;
node* b;
node* c;
node* hapus;
node* bantu;

void inisial(){
    a = NULL;
    b = NULL;
}

void masukin_data(){
    node* baru;
    for(int i=1; i<=4; i++){
        baru = new node;
        cout<<"Masukan Nama Mahasiswa ke-"<<i<<" : ";
        cin>>baru -> mahasiswa;
        cout<<"Masukan NIM Mahasiswa ke-"<<i<<"  : ";
        cin>>baru -> nim;
        cout<<endl;
        baru -> next = NULL;
        if(a==NULL){
            a = baru;
            a -> next = NULL;
        }
        else {
            bantu = a;
            while(bantu -> next != NULL){
                bantu = bantu -> next;
            }
            bantu -> next = baru;
        }
    }
}

void delet(){
    string z;
    if(a != NULL){
        if(a->next !=NULL){
            bantu = a;
            while(bantu -> next -> next!=NULL){
                bantu = bantu ->next;
            }
            hapus = bantu->next;
            z= hapus->mahasiswa;
            bantu->next =NULL;
            delete hapus;
        }
        else{
            z=a->mahasiswa;
            a=NULL;
        }
        cout<<"Data "<<z<<" telah terhapus"<<endl;
    }
    else{
        cout<<"Tidak ada linked list";
    }
}

void cetak(){
    c = a;
    cout<<"DATA MAHASISWA"<<endl;
    if ( a == NULL){
        cout<<"tidak ada linked list"<<endl;
    }
    else{
        cout<<"\tNama\t\tNIM"<<endl;
        while (c!=NULL){
            cout<<"\t"<<c->mahasiswa<<"\t\t"<<c->nim<<endl;
            c = c->next;
        }
        cout<<endl;
    }
}

int main(){
    string mahasiswa;
    int nim;
    cout<<"\t\tPROGRAM SENARAI BERANTAI"<<endl;
    cout<<endl;
    inisial();
    masukin_data();
    cetak();
    delet();
    cout<<endl;
    cetak();
    return 0;
}
