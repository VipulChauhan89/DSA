/*
    * * * * 
    *     * 
    *     * 
    *     * 
    * * * * 
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
        if(i==0||i==N-1)
        {
            for(int j=1;j<N;j++)
            {
                cout<<"* ";
            }
            cout<<endl;
        }
        else
        {
            cout<<"* ";
            for(int j=3;j<N;j++)
            {
                cout<<"  ";
            }
            cout<<"* "<<endl;  
        }
    }
    return 0;
}