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
};

int main()
{
    linkedList list;
    return 0;
}
