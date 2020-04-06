#include <iostream>
#include <stdlib.h>
#define MAX 100

using namespace std;

struct Queue {
	int front, rear, data[MAX];
}
Q;

bool isFull() {
	return Q.rear==MAX;
}

bool isEmpty() {
	return Q.rear==-1;
}

void Tampil(){
	if (isEmpty()) {
    cout<<"Antrian kosong"<<endl;
	}
	else{
		cout<<"Antrian : ";
		for(int i = Q.front; i < Q.rear; i++)
        cout<<Q.data[i]<<((Q.rear-1 == i)?" ":", ");
		cout<<endl;
    }
  cout<<endl;
}

void enqueue(){
	if(isFull())
	{
		cout<<"Antrian penuh!"<<endl;
	}
	else{
		int data;
		cout<<"Masukkan Data : ";
		cin>>data;
		Q.data[Q.rear]=data;
		Q.rear++;
		cout<<"Data "<<data<<" telah ditambahkan"<<endl;
	}
	cout<<endl;
}

void dequeue(){
	if(isEmpty())
	{
		cout<<"Antrian masih kosong"<<endl;
	}
	else{
		cout<<"Mengambil data "<<Q.data[Q.front]<<endl;
		for (int i=Q.front; i<Q.rear;i++)
		Q.data[i]=Q.data[i + 1];
        Q.rear--;
    }
	cout<<endl;
}

void Clear(){
    Q.front=Q.rear=-1;
    cout<<"Data telah dihapus";
    cout<<endl<<endl;
}

void banyak_data(){
    if(isEmpty()==0){
        for(int i=Q.front;i<=Q.rear;i++){
        }
        cout<<"Banyak data adalah : "<<Q.rear;
        cout<<endl<<endl;
    }
    else{
        cout<<"Data Kosong!"<<endl;
    }
}

void jumlah(){
    int jumlah=0;

    if(isEmpty()==0){
        for(int i=Q.front;i<=Q.rear;i++){
            jumlah=jumlah+Q.data[i];
        }
        cout<<"Jumlah Data adalah : "<<jumlah;
        cout<<endl<<endl;
    }
    else{
        cout<<"Data Kosong!"<<endl;
    }
}

void rata(){
    int jumlah=0;
    int a=Q.rear;
    float rata;

    if(isEmpty()==0){
        for(int i=Q.front;i<=Q.rear;i++){
            jumlah=jumlah+Q.data[i];
        }

        rata=jumlah/a;
        cout<<"Rata-rata Data adalah : "<<rata;
        cout<<endl<<endl;
    }
    else{
        cout<<"Data Kosong!"<<endl;
    }
}

int main() {
	int pilihan;
	awal:
    system("CLS");
	do
	{
		cout<< "=======================\n";
		cout<< "       Menu Queue      \n";
        cout<< "=======================\n";
        cout<< " 1. Enqueue \n";
        cout<< " 2. Dequeue \n";
        cout<< " 3. Tampil \n";
        cout<< " 4. Clear \n";
        cout<< " 5. Banyak Data \n";
        cout<< " 6. Jumlah Data \n";
        cout<< " 7. Rata-Rata \n";
        cout<< " 8. exit \n";
        cout<< "-------------------\n";
        cout<< "Masukkan pilihan : ";
        cin >> pilihan ;
        cout<< "--------------------\n";
		switch (pilihan)
		{
		case 1:
			enqueue();
			break;
		case 2:
			dequeue();
			break;
        case 3:
            Tampil();
            break;
        case 4:
            Clear();
            goto awal;
            break;
        case 5:
            banyak_data();
            break;
        case 6:
            jumlah();
            break;
        case 7:
            rata();
            break;
        case 8:
            return 0;
            break;
		default:
			cout << "Pilihan tidak tersedia"<<endl;
			break;
		}
	} while (pilihan !=8);
	return 0;
}
