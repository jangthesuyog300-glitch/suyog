#include<iostream>
using namespace std;

class stud{
    
    int roll,marks;
    char name [50];
    public:
    
     void accept();
     void display();

};
int num;
void stud:: accept()
{
    
    
        cout<<"enter the sudent roll number ";
        cin>>roll;
        cout<<"enter the sudent name ";
        cin>>name;
        cout<<"enter the sudent marks ";
        cin>>marks;
    
    
}
void stud::  display()
    {
        
            cout<<"Name :"<<name<<endl;
            cout<<"Roll :"<<roll<<endl;
            cout<<"marks :"<<marks<<endl;
       
    }


int main()
{

    stud s1[50];
    cout<<"Enter the student :\n";
    cin>>num;
    for(int i=0;i<num;i++){
         s1[i].accept();
         
    }
      for(int i=0;i<num;i++){
         s1[i].display();
    }
}    