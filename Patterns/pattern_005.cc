/*
    * * * * *
    * * * * 
    * * *
    * * 
    * 
*/
#include<iostream>
using namespace std;
int main()
{
    int N;
    cout<<"Enter the value of N : ";
    cin>>N;
    for(int i=0;i<N;i++)
    {
        for(int j=N-i-1;j>=0;j--)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}