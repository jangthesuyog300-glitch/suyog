#include<iostream>
using namespace std;

int main()
{

    int n,i;
    cout<<"Enter the number of rows :";
    cin>>n;
     for(i=n;i>=1;i--)
     {
        for(int k=n-i;k>0;k--){
            cout<<" ";
        }
        for(int j=i;j>0;j--)
        {
            cout<<"* ";
        }
        cout<<endl;
     }
     
}