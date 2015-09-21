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
