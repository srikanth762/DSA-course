#include <iostream>
using namespace std;
class queue{
    private:
    int rear;
    int front;
int arr[5];
public:
queue(){
    rear=-1;
    front=-1;
    for(int i=0;i<5;i++)
    {
        arr[i]=0;
        
    }
}
bool isempty()
{
    if(front==-1&&rear==-1)
    {
        return true;
    }
    else{
        return false;
    }
}
bool isFull()
{
    if(rear==5)
    {
        return true;
    }
    else{
        return false;
    }
}
void enqueue(int val)
{
    if(isFull())
    {
        cout<<"Queue is full"<<endl;
    }
    else if(isempty())
    {
        rear=front=0;
        arr[rear]=val;
    }
    else{
        rear++;
        arr[rear]=val;
    }
}
int dequeue()
{
    int x;
    if(isempty())
    {
        cout<<"queue is empty"<<endl;
        return 0;
    }
    else if(front==rear){
        x=arr[front];
        arr[front]=0;
        rear=-1;
        front=-1;
        return x;
        
    }
    else{
        x=arr[front];
        arr[front]=0;
        front++;
        return x;
    }
}
int count()
{
    return (rear-front+1);
}
int display(){
for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<endl;
        
    }
    return 0;
}

};

int main() {
    queue q;
    int option,value;
    do{
        cout<<"We Select the option numbe.Enter 0 to exit."<<endl;
        cout<<"1.Enqueue()"<<endl;
        cout<<"2.Dequeue()"<<endl;
        cout<<"3.isempty()"<<endl;
        cout<<"4.isFull()"<<endl;
        cout<<"5.Count()"<<endl;
        cout<<"6.Display()"<<endl;
        cout<<"7.clear Screen()"<<endl;
        cin>>option;
        switch(option)
        {
            case 0:
            break;
            case 1:
            cout<<"Enqueue Operation:"<<endl;
            cin>>value;
            q.enqueue(value);
            break;
            case 2:
            cout<<"Dequeue Operation:"<<endl;
            cout<<q.dequeue()<<endl;
            break;
            case 3:
            if(q.isempty()){
            cout<<"queue is empty :"<<endl;
            }
            else{
        cout<<"Queue is not empty:"<<endl;
            }
            break;
            case 4:
            if(q.isFull()){
            cout<<"queue is Full:"<<endl;
            }
            else{
        cout<<"Queue is not Full:"<<endl;
            }
            break;
            case 5:
            cout<<"Count Operation:"<<q.count()<<endl;
            break;
            
            case 6:
            cout<<"display Operation:"<<endl;
            q.display();
            break;
            case 7:
            system("cls");
            break;
            default:
            cout<<"Enter correct option";
            break;
}
}while(option!=0);

    return 0;
}