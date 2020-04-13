#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

typedef struct node
{
	string password;
	node* next;
	node* prev;
}*list;

list head;
list tail;
int batas;

void initData()
{
	head = NULL;
	tail = NULL;
}

int cekHead()
{
	return (head == NULL) ? 1 : 0;
}

void tampilList()
{
	list bantu;
	bantu = head;
	if (cekHead() == 1)
	{
		cout << "Password Masih Kosong";
	}
	else
	{
		for (int x = 1; x <= batas; x++)
		{
			cout << "Password Ke-" << x << " : " << bantu->password << endl;
			bantu = bantu->next;
		}
	}
}

void tampilListBaru()
{
	list bantu;
	bantu = head;
	if (cekHead() == 1)
	{
		cout << "Password Masih Kosong";
	}
	else
	{
		for (int x = 1; x <= batas; x++)
		{
			cout << bantu->password;
			bantu = bantu->next;
		}
	}
}


void Enkripsi()
{
	list bantu, tempat;
	char random;
	bantu = head;
	for (int x = 1; x <= batas; x++)
	{
		if (x == batas - 2)
		{
			bantu->prev->next = NULL;
			bantu->prev = NULL;
			head = bantu;
		}
		else
		{
			bantu = bantu->next;
		}
	}

	bantu = head;
	do
	{
		bantu = bantu->next;
	} while (bantu->next != NULL);
	tail = bantu;
	head->prev = tail;
	tail->next = head;

	int jarak, a, b, hasil;
	jarak = 33 - 47;
	a = rand();
	b = a % jarak;
	hasil = b + 33;
	random = hasil;

	tempat = new node;
	tempat->password = random;
	bantu = head;
	for (int x = 1; x <= 3; x++)
	{
		bantu = bantu->next;
	}
	bantu->prev->next = tempat;
	tempat->prev = bantu->prev;
	tempat->next = bantu;
	bantu->prev = tempat;
	batas++;
}

void Deskripsi()
{
	list bantu, hapus;
	hapus = bantu = head;
	for (int x = 1; x <= 3; x++)
	{
		hapus = hapus->next;
	}
	hapus->prev->next = hapus->next;
	hapus->next->prev = hapus->prev;
	delete hapus;
	batas--;

	for (int x = 1; x <= 3; x++)
	{
		bantu = bantu->next;
	}
	bantu->prev->next = NULL;
	bantu->prev = NULL;
	head = bantu;

	bantu = head;
	do
	{
		bantu = bantu->next;
	} while (bantu->next != NULL);
	tail = bantu;
	head->prev = tail;
	tail->next = head;
}

int main()
{
	initData();
	list n;
	list bantu;
    string data;
    int pilihan, pilih;
	bantu = new node;
	system("cls");
        cout << "===============================================" << endl
            << "Selamat Datang di System Enkripsi dan Deskripsi" << endl
            << "===============================================" << endl
            << "Apakah Anda ingin melanjutkan" << endl
            << "1. Lanjut" << endl
            << "2. Tidak" << endl
            << "Pilihan : ";
		cin >> pilih;
		switch (pilih)
		{
		case 1:
			system("cls");
			cout << "Panjang Password Tidak Boleh kurang Dari 6 !" << endl
                << "Masukkan Panjang Password : ";
			cin >> batas;
			if (batas < 6)
			{
				cout << "Panjang Password Tidak Boleh kurang Dari 6";
				return 0;
				break;
			}
			else
			{
				for (int x = 1; x <= batas; x++)
				{
					if (x == 1)
					{
						cout << "Masukkan Karakter Ke-" << x << " : ";
						cin >> data;
						n = new node;
						n->password = data;
						n->prev = tail;
						head = n;
						bantu = n;
					}
					else if (x == batas)
					{
						cout << "Masukkan Karakter Ke-" << x << " : ";
						cin >> data;
						n = new node;
						n->password = data;
						bantu->next = n;
						n->prev = bantu;
						n->next = head;
						tail = n;
						head->prev = tail;
						bantu = head;
						cout << "Password Telah Masuk Ke Data" << endl;
						system("pause");
					}
					else
					{
						cout << "Masukkan Karakter Ke-" << x << " : ";
						cin >> data;
						n = new node;
						n->password = data;
						bantu->next = n;
						n->prev = bantu;
						bantu = bantu->next;
					}
				}
				do
				{
                system("cls");
                cout << "Program Enkripsi-Deskripsi Password " << endl
                    << "1. Tampil Password Data"
                    << "2. Enkripsi Password Data" << endl
                    << "3. Deskripsi Password Data" << endl
                    << "4. Keluar dari Program" << endl
                    << "Pilihan: ";
                cin >> pilihan;
                switch (pilihan)
                {
                    case 1:
                        tampilList();
                        system("pause");
                        break;
                    case 2:
                        {
                            cout << "Password Asli: ";
                            tampilListBaru();
                            Enkripsi();
                            cout << endl
                                << "Password Setelah Di Enkripsi: ";
                            tampilListBaru();
                            cout << endl << endl;
                            system("pause");
                            break;
                        }
                    case 3:
                        {
                            cout << "Password Asli: ";
                            tampilListBaru();
                            Deskripsi();
                            cout << endl
                                << "Password Setelah Di Deskripsi: ";
                            tampilListBaru();
                            cout << endl ;
                            system("pause");
                            break;
                        }
                    case 4:
                        return 0;
                    default:
                        cout<<"Input anda salah"<<endl;
                        break;
                }
            }while(pilihan !=5);

                case 2:
                    return 0;
                default:
                    cout << "salah memasukan pilihan";
                    return 0;
                }
            } while (pilih !=2);
}
