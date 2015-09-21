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
