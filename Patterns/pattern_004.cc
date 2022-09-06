/*
    1 
    2 2 
    3 3 3
    4 4 4 4 
    5 5 5 5 5
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
        for(int j=0;j<=i;j++)
        {
            cout<<i+1<<" ";
        }
        cout<<endl;
    }
    return 0;
}