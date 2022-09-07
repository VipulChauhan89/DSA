/*
    1 2 3 4 5
    1 2 3 4 
    1 2 3
    1 2 
    1 
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
        for(int j=0;j<N-i;j++)
        {
            cout<<j+1<<" ";
        }
        cout<<endl;
    }
    return 0;
}