#include <iostream>
using namespace std;
// 153 is a amstrong number 1^3+5^3+3^3==153
int main()
{
    int num,rem,pow,result=0;
    cout<<"Enter the number"<<endl;
    cin>>num;

    int original=num;

    while(original !=0)
    {
        rem = original%10;

        pow=1;
        for(int i=0;i<3;i++)
        {
            pow*=rem;
        }
        
        result=pow+result;
        original=original/10;
    }
    if(num==result)
    {
        cout<<"The number is amstrong : "<<result;
    }
    else
    {
        
        cout<<"The number is not amstrong : "<<result;
    
    }
}