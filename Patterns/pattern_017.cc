/*
            A
          A B A 
        A B C B A 
      A B C D C B A 
    A B C D E D C B A
*/
#include<iostream>
using namespace std;
int main()
{
    int N,l=65;
    cout<<"Enter the value of N between 1 to 26 : ";
    cin>>N;
    if(N<=0 || N>26)
    {
        cout<<"You did not entered the right number.\n";
        return 0;
    }
    for(int i=1;i<=N;i++)
    {
        for(int j=i;j<N;j++)
        {
            cout<<"  ";
        }
        for(int k=0;k<i;k++)
        {
            cout<<(char)l<<" ";
            l++;
        }
        l--;
        for(int m=1;m<i;m++)
        {
            l--;
            cout<<(char)l<<" ";
        }
        cout<<endl;
    }
    return 0;
}