#include<iostream>
using namespace std;
int main()
{
    int n, i, m=0, flag=0;
    cout<<"\nEnter the number to check prime: ";
    cin>>n;
    m=n/2;
    for(i=2;i<=m;i++)
    {
        if(n%i ==0)
        {
            cout<<"\nNumber is not prime"<<endl;
            flag=1;
            break;
        }
    }
    if(flag==0)
    
        cout<<"Number is prime."<<endl;
        return 0;
}