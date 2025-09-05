#include<iostream>
using namespace std;

int main()
{

    int n,i,coef;
    cout<<"Enter the number of rows :";
    cin>>n;
     for(i=1;i<=n;i++)
     {
        coef=1;
        for(int k=n-i;k>0;k--)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<coef<<" ";
            coef=coef*(i-j)/j;
        }
        cout<<endl;
     }
}