#include<iostream>
using namespace std;

int main()
{
    int i,n;
    char ch;
    cout<<"Enter the row :";
    cin>>n;
    cout<<"Enter the charecter :" ;
    cin>>ch;
    for(i=1;i<=n;i++)
    {
        char B=ch;
        for(int k=n-i;k>0;k--)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<B<<" ";
           B++;  
        }
        
        cout<<endl;

    }
}