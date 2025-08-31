#include<iostream>
using namespace std;

int main()
{
    int i;
    int n=5;

    for(i=5;i>=0;i--)
    {
        for (int j=0;j<i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}