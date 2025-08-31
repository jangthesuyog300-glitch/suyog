#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the number\n ";
    cin>>num;

    bool j=false;

    for (int i = 2; i < num; i++)  // stop BEFORE num
        {
            if (num % i == 0) {
                j = true;
                break;
            }
        }
    if(j)
    {
        cout<<"The number is not prime : "<<endl;
    }
    else
    {
        cout<<"The number is the prime : "<<endl;
    }
}