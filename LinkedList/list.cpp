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
