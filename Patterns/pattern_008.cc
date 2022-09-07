/*
    * * * * * * * * *
      * * * * * * * 
        * * * * * 
          * * * 
            *
*/
#include<iostream>
using namespace std;
int main()
{
    int N;
    cout<<"Enter the value of N : ";
    cin>>N;
    for(int i=N;i>0;i--)
    {
        int k=0;
        for(int j=i;j<N;j++)
        {
            cout<<"  ";
        }
        while(k<2*i-1)
        {
            cout<<"* ";
            k++;
        }
        cout<<endl;
    }
    return 0;
}