#include<iostream>
using namespace std;
void user_con(char*str1,char*str2);
int main()
{
    char str1[50]="Hello";
    char str2[50]="Bye";
    user_con(str1,str2);
    cout<<str1;
}
void user_con(char*s1,char*s2)
{
    while(*s1 !='\0')
    {
        s1++;
    }
     while(*s2!='\0')
    {
        *s1=*s2;
        s1++;
        s2++;
    }
    *s1='\0';
}