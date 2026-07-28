void Delete(int index)
    {
        Nodes *p=Head;
        Nodes *q=nullptr;
        if(index<0 || Head==nullptr)
        return;
        if(index==0)
        {
            Head=Head->Next;
            delete p;
            return;
        }
        else
        {
        for(int i=0;i<index-1 && p;i++)
        {
            q=p;
            p=p->Next;
        }
        q->Next=p->Next;
        delete p;
    }
    }
