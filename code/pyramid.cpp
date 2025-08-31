#include <iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the number of row :";
    cin>>num;

    for(int i=0;i<num;i++)
    {
        for(int j=0;j<num-i;j++)
        {
            cout<<" ";
        }
         for(int k=1;k<=i;k++)
        {
            cout<<k<<" ";
        }
        cout<<endl;
    }

}