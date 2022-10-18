#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node()
    {
        data=0;
        next=NULL;
    }
};
class Queue{
    Node* front;
    Node* rear;
    public:
    Queue()
    {
        front=NULL;
        rear=NULL;
    }
    void push(int x)
    {
        Node* temp=new Node();
        temp->data=x;
        temp->next=NULL;
        if(front==NULL)
            front=temp;
        else
            rear->next=temp;
        rear=temp;
    }
    void pop()
    {
        if(front==NULL)
        {
            cout<<"Queue is empty\n";
            return ;
        }
        else{
            cout<<"Popped element is:"<<front->data<<endl;
            front=front->next;
        }
    }
    void display()
    {
        Node* temp;
        temp=front;
        cout<<"Queue elements:\n";
        while(temp!=NULL)
        {
            cout<<temp->data<<"\t";
            temp=temp->next;
        }
        cout<<"\n";
    }
    void isEmpty()
    {
        if(front==NULL)
            cout<<"Queue is empty\n";
        else
            cout<<"Queue is not empty\n";
    }

};
int main()
{
    int ch,el;
    Queue n;
    while(1)
    {
        cout<<"1.Push\n2.Pop\n3.Display\n4.IsEmpty\n5.Exit\n";
        cout<<"Enter your choice:";
        cin>>ch;
        switch(ch)
        {
            case 1:
                cout<<"Enter the element to push:";
                cin>>el;
                n.push(el);
                break;
            case 2:
                n.pop();
                break;
            case 3:
                n.display();
                break;
            case 4:
                n.isEmpty();
                break;
            case 5:
                exit(1);
                break;
            default:
                cout<<"Wrong choice"<<endl;
                break;
        }
    }
    return 0;
}
