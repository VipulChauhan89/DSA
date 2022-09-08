/*
    * * * * * * * *
    * * *     * * *
    * *         * *
    *             *
    *             *
    * *         * *
    * * *     * * *
    * * * * * * * *
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
            cout<<"* ";
        }
        for(int k=2*(N-i-1);k<2*N-2;k++)
        {
            cout<<"  ";
        }
        for(int j=N-i;j>0;j--)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"* ";
        }
        for(int k=0;k<2*(N-i-1);k++)
        {
            cout<<"  ";
        }
        for(int j=i;j>=0;j--)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}