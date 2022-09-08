/*
    1 
    2 3 
    4 5 6
    7 8 9 10 
    11 12 13 14 15
*/
#include<iostream>
using namespace std;
int main()
{
    int N,k=1;
    cout<<"Enter the value of N : ";
    cin>>N;
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<k++<<" ";
        }
        cout<<endl;
    }
    return 0;
}