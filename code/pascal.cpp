#include <iostream>
using namespace std;

// function for binomial coefficient
double binomialcoeff(int n,int k){
    double res=1;
    if(k>n-k)
    {
        k=n-k;
    }
    for(int i=0; i<k ;i++)
    {
        res =res *(n-i);
        res =res/(i+1);
    }
}

int main()
{
    int num;
    cout<<"Entwr the number \n"<<endl;
    cin>>num;


    for (int i=0;i<num;i++)
    {
        for(int j=0;j<num-i;j++)
        {
            cout<<" ";
        }
        for(int k=0;k<i;k++)
        {
            cout<<binomialcoeff(i,k);
        }
        cout<<endl;
    }
}