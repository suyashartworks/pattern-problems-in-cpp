#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter size of the butterfly : ";
    cin>>n;
    n=n*2;
    for(int i=1;i<=n/2;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        for(int j=i+1;j<=(n-i);j++)
        {
            cout<<" ";
        }
        for(int k=n-i+1;k<=n;k++)
        {
            cout<<"*";
        }
        
        cout<<endl;
    }
      for(int i=n/2;i>=1;i--)
    {
    
        for(int k=n-i+1;k<=n;k++)
        {
            cout<<"*";
        }
        for(int j=i+1;j<=(n-i);j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
      
        cout<<endl;
    }
    return 0;
}