#include<iostream>
using namespace std;
class stack
{
    private:
    int top;
    int arr[5];
    public:
    stack()
    {
        top=-1;
        for(int i=0;i<5;i++)
        {
            arr[i]=0;
        }
    }
    bool isEmpty()
    {
        if(top==-1)
        {
            return true;
        }
        else{
            return false;
        }

    }
    bool isFull()
    {
        if(top==4)
        {
            return true;
        }
        else{
            return false;
        }
    }
    void push()
    {
if(isFull())
{
    cout<<"stack overflow"<<endl;
}
else{
    
    for(int i=0;i<5;i++)
    {
    cin>>arr[i];
    top++;
    }
}
    }
    void pop()
    {
        if(isEmpty())
    {
        cout<<"Stack is underFlow";
    }
    else{
        
        arr[top]=0;
        top--;
        
        

    }
    }
    void display()
    {
        for(int i=0;i<5;i++)
        {
cout<<arr[i]<<endl;

        }
        cout<<top<<endl;
        cout<<endl;
    }
};
int main()
{
    stack s;
    s.isEmpty();
    s.isFull();
    s.push();
    s.display();
    s.pop();
    s.display();
}