#include <iostream>
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
class Linkedlist
{
    private:
    Node* head;
    Node* rear;
    public:
    Linkedlist()
    {
        head=NULL;
        rear=NULL;

    }
    void insertbegin()
    {
        Node *newnode=new Node();
        int e;
        cout<<"Enter the value:";
        cin>>e;
    newnode->data=e;
    newnode->next=NULL;
    if(head==NULL)
    {
        rear=head=newnode;
    }
    else{
        newnode->next=head;
        head=newnode;
        
        
    }
    }
    void insertend()
    {
        Node *newn=new Node();
        int i;
        cout<<"Enter the Integer Value:"<<endl;
        cin>>i;
        newn->data=i;
        newn->next=NULL;
        if(head==NULL)
        {
head=rear=NULL;
        }
        else{
            rear->next=newn;
            rear=newn;
    

        }
        
        

    }
    void deletebegin()
    {
        if(head==NULL)
        {
            cout<<"The List is Empty:"<<endl;
        }
        if(head==rear)
        {
            cout<<"Elements are Deleted:"<<head->data<<endl;
        }
        else{
            Node *temp=new Node();
            temp=head;
            head=head->next;
            temp->next=NULL;
            delete temp;
        }
        
    }
    void deleteend()
    {
        if(head==NULL)
        {
            cout<<"The List is Empty:"<<endl;
        }
        if(head==rear)
        {
            cout<<"The Element are Deleted:"<<rear->next<<endl;
            rear=head=NULL;
        }
        else{
            Node *temp=new Node();
            temp=head;
            while(temp->next!=rear)
            {
                temp=temp->next;
            }
            temp->next=NULL;
            rear=temp;
            delete temp;
        }
        
        
    }
    void display()
    {
        Node*temp=head;
        if(temp==NULL)
        {
cout<<"List is Empty"<<endl;
        }
        else{
while(temp!=NULL)
{
    cout<<"List -Data:"<<temp->data<<endl;
    temp=temp->next;
}
        }
    
        cout<<"This Is Null pointer:"<<endl;
    
}


};
int main()
{
    Linkedlist l1;
 int option;
 cout<<"Choose the Options:"<<endl;
 cout<<"1.InsertBegin()."<<endl;
 cout<<"2.InsertEnd():"<<endl;
 cout<<"3.Deletebegin():"<<endl;
 cout<<"4.DeleteEnd():"<<endl;
 cout<<"5.Display():"<<endl;
 
 do{
    cout<<"Choose The Options:"<<endl;
 cin>>option;
switch(option)
{
    case 0:
    {
cout<<"You choose the Option (0):"<<endl;
break;

    }
    
    case 1:
    {
cout<<"You choose the Option (1):"<<endl;
l1.insertbegin();
break;
    }
     case 2:
    {
        cout<<"You Choosen option 3:";
        l1.insertend();
        break;
    }
 case 3:
    {
        cout<<"You Choosen option 3:";
        l1.deletebegin();
        break;
    }
     case 4:
    {
        cout<<"You Choosen option 4:";
        l1.deleteend();
        break;
    }
    case 5:
    {
cout<<"You choose the Option (2):"<<endl;
l1.display();
break;

    }
    default:
    {

        cout<<"UR option is invalid:"<<endl;
    }
}
 }while(option!=0);
 return 0;
}