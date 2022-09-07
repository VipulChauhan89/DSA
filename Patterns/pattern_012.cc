/*
    1             1
    1 2         2 1
    1 2 3     3 2 1
    1 2 3 4 4 3 2 1
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
            cout<<j+1<<" ";
        }
        for(int k=0;k<2*(N-i-1);k++)
        {
            cout<<"  ";
        }
        for(int j=i;j>=0;j--)
        {
            cout<<j+1<<" ";
        }
        cout<<endl;
    }
    return 0;
}