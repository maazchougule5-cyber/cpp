#include<iostream>
using namespace std;
int main()
{
    int a[100];
    int i,small; 
    cout<<"Enter The numbers=";
    for
    {(i=0;i<5;i++)
        cin>>a[i];
    }
    small=a[0];
    for(i=0;i<5;i++)
    {
   if(a[i]<small)
        {
            small=a[i];
        }
    }
    cout<<"The smallest Number is ="<<small<<endl;

}        