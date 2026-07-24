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
    void Display()
    {
        Nodes *p=Head;
        while(p)
        {
            cout<<p->val<<"\n";
            p=p->Next;
        }
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
                cout<<"Index out of bound";
                delete newNode;
            }
        }
    }
};

int main()
{
    linkedList list;
    list.Insert(0,10);
    list.Insert(1,11);
    list.Insert(2,12);
    list.Insert(3,13);
    list.Insert(2,18);
    list.Display();
}
