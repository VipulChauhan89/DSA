/*
    1 
    0 1 
    1 0 1
    0 1 0 1 
    1 0 1 0 1
*/
#include<iostream>
using namespace std;
int main()
{
    int N,k;
    cout<<"Enter the value of N : ";
    cin>>N;
    for(int i=0;i<N;i++)
    {
        k=(i+1)%2;
        for(int j=0;j<=i;j++)
        {
            cout<<k%2<<" ";
            k++;
        }
        cout<<endl;
    }
    return 0;
}