#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED
#include <string>

using namespace std;

struct company{
    string id;
    string nama;
    string depart;
    int anggota;
    int gaji;
};

struct listElement {
    company info;
    listElement *next;
};

struct list {
    listElement *first;
};

void createList (list &l);
listElement *alokasi (company x);
void dealokasi (listElement *p);
void insertFirst (list &l, listElement *p);
void insertAfter (list &l, listElement *p, listElement *prec);
void insertLast (list &l, listElement *p);
listElement *findElm (list &l, company x);
void deleteFirst (list &l, listElement *&p);
void deleteAfter (list &l, listElement *p, listElement *prec);
void deleteLast (list &l, listElement *&p);
void printInfo (list &l);

#endif // LIST_H_INCLUDED
