#include<iostream>
#include<stdlib.h>
using namespace std;

class Nodes
{
    public:
    int val;
    Nodes *Next;
    public:
    Nodes(int val)
    {
        this->val=val;
        Next=nullptr;
    };
};

class linkedList
{
    private: 
    Nodes *Head;
    public:
    linkedList()
    {
        Head=nullptr;
    }
    int Max()
    {
        Nodes *p=Head;
        if(!p) return -1;
        int max=p->val;
        while(p)
        {
            if((p->val)>max)
            max=p->val;
            p=p->Next;
        }
        return max;
    }
    int Search(int key)
    {
        Nodes *p=Head;
        while(p)
        {
            if(p->val==key)
            return p->val;
            p=p->Next;
        }
        return -1;
    }
    void Insert(int index, int val)
    {
        Nodes *p=Head;
        Nodes *newNode= new Nodes(val);
        if(index==0)
        {
            newNode->Next=Head;
            Head=newNode;
        }
        else
        {
            for(int i=0;i<index-1 && p;i++)
                p=p->Next;
            if(p)
            {
                newNode->Next=p->Next;
                p->Next=newNode;
            }
            else
            {
                delete newNode;
            }
        }
    }
};

int main()
{
    linkedList list;
    list.Insert(0,10);
    list.Insert(1,18);
    list.Insert(2,12);
    cout<<"Max: "<<list.Max()<<"\n";
    cout<<"Search 18: "<<list.Search(18);
}
