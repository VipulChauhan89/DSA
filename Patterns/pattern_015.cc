/*
    A B C D E
    A B C D 
    A B C
    A B
    A 
*/
#include<iostream>
using namespace std;
int main()
{
    int N,k;
    cout<<"Enter the value of N between 1 to 26 : ";
    cin>>N;
    if(N<=0 || N>26)
    {
        cout<<"You did not entered the right number.\n";
        return 0;
    }
    for(int i=0;i<N;i++)
    {
        k=65;
        for(int j=0;j<N-i;j++)
        {
            cout<<(char)k++<<" ";
        }
        cout<<endl;
    }
    return 0;
}