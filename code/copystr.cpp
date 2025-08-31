#include<iostream>
using namespace std;
void  user_copy(char*s2,char*s1);

int main()
{
    char str1[50]="Hello";
    char str2[50];
    user_copy(str2,str1);
    cout<<"The string 2 is : "<<str2;
}

void  user_copy(char*s2,char*s1)
{
    while(*s1!='\0')
    {
        *s2=*s1;
        *s1++;
        *s2++;
    }
    *s2='\0';

}