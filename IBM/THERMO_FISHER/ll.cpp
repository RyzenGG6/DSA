#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class linkedlist
{
public:
    int x;
    linkedlist *next;

    linkedlist(int a)
    {
        x = a;
        next = NULL;
    }

    linkedlist *insertnode(int x, linkedlist *head)
    {
        linkedlist *newnode = new linkedlist(x);
        if (head == NULL)
        {

            return newnode;
        }
        else
        {
            linkedlist *cur = head;
            while (cur != NULL)
            {
                if (cur->next == NULL)
                {
                    break;
                }
                cur = cur->next;
            }
            cur->next = newnode;
            return head;
        }
    }


void print(linkedlist* head){
    linkedlist* cur=head;
    while (cur!=NULL)
    {
      cout<<cur->x<<" ";
      cur=cur->next;
    }
    
}
};
int main()
{
linkedlist* obj=new linkedlist(10);
obj=obj->insertnode(30,obj);
obj->print(obj);
}
