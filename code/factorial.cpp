#include <iostream>
using namespace std;

int main()
{
    int num ,R=1;
    cout<<"Enter the number \n";
    cin>>num;
    for(int i=1;i<=num;i++)
    {
        R=i*R;
    }
    cout<<"The factorial is : "<<R;
}