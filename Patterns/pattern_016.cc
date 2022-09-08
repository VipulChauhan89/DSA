/*
    A 
    B B
    C C C
    D D D D 
    E E E E E
*/
#include<iostream>
using namespace std;
int main()
{
    int N,k=65;
    cout<<"Enter the value of N between 1 to 26 : ";
    cin>>N;
    if(N<=0 || N>26)
    {
        cout<<"You did not entered the right number.\n";
        return 0;
    }
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<(char)k<<" ";
        }
        k++;
        cout<<endl;
    }
    return 0;
}