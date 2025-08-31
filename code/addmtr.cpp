#include <iostream>
using namespace std;

int main()
{
    int arr[3][3];
    int arr2[3][3];
    cout<<"Enter the matrix \n";

    for(int i=0;i<3;i++)//accept
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }

    cout<<"The mitrix is \n";
    for(int i=0;i<3;i++) //display 
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }

    cout<<"Transpose matrix \n";
    for(int i=0;i<3;i++)//transpose 
    {
        for(int j=0;j<3;j++)
        {
            arr2[j][i]=arr[i][j];
            
        }
        
    }
    for (int i=0;i<3;i++)//display 
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr2[i][j]<<"\t";
        }
        cout<<endl;
    }
}