#include<iostream>
using namespace std;
int main()
{
    int i,j;
    int temp;
    int a[4];
    cout<<"Enter the Array Elements:";
   for(int i=0;i<4;i++)
   {
       cin>>a[i];
   }
   cout<<"array elements:";
   for(int i=0;i<4;i++)
   {
       cout<<a[i]<<endl;
   }
   for(int i=0;i<4;i++)
   {
       for(int j=i-1;j>=0;j--)
       {
           if(a[j]>a[j+1])
           {
               int temp=a[j];
               a[j]=a[j+1];
               a[j+1]=temp;
           }
       }
   }
   cout<<"after insertion sorting technique:";
  for(int i=0;i<4;i++)
  {
      cout<<a[i]<<endl;
  }
  return 0;
}