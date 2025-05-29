#include<iostream>
using namespace std;
int main()
{
    int i,j;
    int temp;
    int n;
    cout<<"Enter the Number of Array Elements:";
    cin>>n;
    int a[n];
    cout<<"Enter the Array Elements:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Before Sorting algorithms:";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if(a[j]>a[j+1])
{
    temp=a[j];
    a[j]=a[j+1];
    a[j+1]=temp;
}        }
    }
    cout<<"After Sorting Elements:";

    for(i=0;i<n;i++)
{
    cout<<a[i]<<endl;
}

return 0;
    
}