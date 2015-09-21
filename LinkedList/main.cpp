#include <iostream>
#include <string>
#include <stdlib.h>
#include <conio.h>
#include "list.h"

using namespace std;

void input_data(company &x)
{
    cout <<"Masukkan ID Divisi: "; cin >>x.id;
    cout <<"Masukkan Nama Divisi: "; cin >>x.nama;
    cout <<"Masukkan Departemen: "; cin >>x.depart;
    cout <<"Masukkan jumlah Anggota: "; cin >>x.anggota;
    cout <<"Masukkan Gaji Divisi: "; cin >>x.gaji;
    cout <<endl;
}

int pilih;
int main()
{

    list l;
    listElement *p;
    listElement *prec;
    company x;
    createList(l);
    do
    {
    cout<<"\t Single Link List"<<endl;
    cout<<"1. Insert First"<<endl;
    cout<<"2. Insert After"<<endl;
    cout<<"3. Insert Last"<<endl;
    cout<<"4. Delete First"<<endl;
    cout<<"5. Delete After"<<endl;
    cout<<"6. Delete Last"<<endl;
    cout<<"7. View Data"<<endl;
    cout<<"8. Search Data"<<endl;
    cout<<"9. Keluar"<<endl;
    cout<<"Pilihan :"; cin>>pilih;
    switch(pilih)
    {
    case 1:
        input_data(x);
        p=alokasi(x);
        insertFirst(l,p);
        cout<<"Data pertama dimasukkan";
        getch();
        system("cls");
        break;
    case 3:
        input_data(x);
        p=alokasi(x);
        insertLast(l,p);
        cout<<"Data terakhir dimasukkan";
        getch();
        system("cls");
        break;
    case 4:
        deleteFirst(l,p);
        dealokasi(p);
        cout<<"Data pertama terhapus"<<endl;
        getch();
        system("cls");
        break;

    case 6:
        deleteLast(l,p);
        dealokasi(p);
        cout<<"Data terakhir terhapus"<<endl;
        getch();
        system("cls");
        break;

    case 8:
        p=findElm(l,x);
        cout << p->info.nama<<endl<<endl;
        getch();
        system("cls");
        break;

    case 7:
        printInfo(l);
        getch();
        system("cls");
        break;

    case 2:
        input_data(x);
        p=alokasi(x);
        insertAfter(l,p,prec);
        cout<<"Data dimasukkan";
        getch();
        system("cls");
        break;

    case 5:
        deleteAfter(l,p,prec);
        dealokasi(p);
        cout<<"Data terhapus"<<endl;
        getch();
        system("cls");
        break;
    }
    }while(pilih!=9);
    return 0;
}
