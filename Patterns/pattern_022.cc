/*
    5 5 5 5 5 5 5 5 5 
    5 4 4 4 4 4 4 4 5 
    5 4 3 3 3 3 3 4 5 
    5 4 3 2 2 2 3 4 5 
    5 4 3 2 1 2 3 4 5 
    5 4 3 2 2 2 3 4 5 
    5 4 3 3 3 3 3 4 5 
    5 4 4 4 4 4 4 4 5 
    5 5 5 5 5 5 5 5 5
*/
#include<iostream>
using namespace std;
int main()
{
    int N;
    cout<<"Enter the value of N : ";
    cin>>N;
    for(int i=N;i>=1;i--)
    {
        int k=0;
        for(int j=N;j>i;j--)
        {
            cout<<j<<" ";
        }
        while(k<2*i-1)
        {
            cout<<i<<" ";
            k++;
        }
        for(int j=i+1;j<=N;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    for(int i=1;i<N;i++)
    {
        int k=0;
        for(int j=0;j<N-i;j++)
        {
            cout<<N-j<<" ";
        }
        while(k<2*i-1)
        {
            cout<<i+1<<" ";
            k++;
        }
        for(int j=i;j<N;j++)
        {
            cout<<j+1<<" ";
        }
        cout<<endl;
    }
    return 0;
}