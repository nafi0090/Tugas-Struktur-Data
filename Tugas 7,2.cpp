#include <iostream>
#include <stdbool.h>
#include <stdlib.h>
#define MAX 100

using namespace std;

struct Queue {
	int front, rear, data[MAX];
}
Q;

bool isFull() {
	return Q.rear == MAX;
}

bool isEmpty() {
	return Q.rear == -1;
}

void printQueue() {
	if (isEmpty()) {
    cout<<"Antrian kosong"<<endl;
	}
	else {
		cout<<"Antrian : ";
		for (int i = Q.front; i < Q.rear; i++)
        cout<<Q.data[i]<<((Q.rear-1 == i) ? " " :", ");
		cout<<endl;
  }
  cout<<endl;
}

void enqueue(){
	if (isFull())
	{
		cout<<"Antrian penuh!"<<endl;
	}
	else{
		int data;
		cout<<"Masukkan plat nomor mobil : ";
		cin>>data;
		Q.data[Q.rear] = data;
		Q.rear++;
        cout<<"Plat nomor mobil "<<data<<" telah ditambahkan "<<endl;
    }
	cout<<endl;
}

void dequeue() {
	if (isEmpty())
	{
		cout<<"Antrian masih kosong"<<endl;
	}
	else{
		cout<<"Mengambil data "<<Q.data[Q.front]<< endl;
		for(int i=Q.front; i<Q.rear; i++)
        Q.data[i] = Q.data[i + 1];
		Q.rear--;
	}
	cout<<endl;
}

int main() {
	int pilihan;
	do
	{
		cout<< "======================\n";
		cout<< "ANTRIAN PARKIRAN MOBIL\n";
        cout<< "======================\n";
        cout<< " 1 Antrian parkir mobil \n";
        cout<< " 2 Keluarkan mobil\n";
        cout<< " 3 Tampilkan antrian mobil \n";
        cout<< " 4 exit \n";
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
            printQueue();
            break;
        case 4:
            return 0;
            break;
		default:
			cout << "Pilihan tidak tersedia"<<endl;
			break;
		}
	} while (pilihan !=4);
	return 0;
}
