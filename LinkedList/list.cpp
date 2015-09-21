#include <iostream>
#include <string>
#include "list.h"

using namespace std;

void createList(list &l)
{
    l.first=0;
}

listElement *alokasi(company x)
{
    listElement *newElement = new listElement;
    newElement->info=x;
    newElement->next=0;

    return newElement;
}

void dealokasi(listElement *p)
{
    delete p;
}

void insertFirst(list &l, listElement *p)
{
    if (l.first==0)
    {
        l.first=p;
    }
    else
    {
        p->next=l.first;
        l.first=p;
    }
}

void insertLast(list &l, listElement *p)
{
    if (l.first==0)
    {
        l.first=p;
    }
    else
    {
        listElement *it = l.first;
        while (it->next!=0)
        {
            it = it->next;
        }
        it->next=p;
    }
}

void insertAfter (list &l, listElement *p, listElement *prec)
{
    p->next=prec->next;
    prec->next=p;
}

void deleteFirst(list &l, listElement *&p)
{
    if(l.first==0)
    {
        return;
    }
    else
    {
        p=l.first;
        l.first=p->next;
    }
}

void deleteLast(list &l, listElement *&p)
{
    if(l.first==0)
    {
        return;
    }
    else
    {
        listElement *it = l.first;
        listElement *prev = it;

        while(it->next!=0)
        {
            prev=it;
            it=it->next;
        }

    if(it==l.first)
        l.first=0;
    prev->next=0;
    p=it;
    }
}

void deleteAfter (list &l, listElement *p, listElement *prec)
{
    p = prec->next;
    prec->next = p->next;
    p->next = 0;
}

void printInfo(list &l)
{
    listElement *it=l.first;
    while (it!=0)
    {
        cout<<it->info.id<<", "
            <<it->info.nama<<", "
            <<it->info.depart<<", "
            <<it->info.anggota<<", "
            <<it->info.gaji<<endl;
        it=it->next;
    }
    cout<<endl;
}

listElement *findElm(list &l, company x)
{
    listElement *it = l.first;
    cout<<"Masukkan id yg ingin dicari :"; cin>>x.id;
    while (it!=0)
    {
        if (it->info.id==x.id)
        {
            return it;
        }
        it=it->next;
    }
    cout<<"Data tidak ditemukan";
    return 0;
}
