#include<iostream>

using namespace std;

int main()
{
    int num, r=1;
    cout<<"Enter the number "<<endl;
    cin>>num;

    for(int i=1;i<=num;i++)
    {
        r=i*r;
    }
    cout<<r;

}