//12:19
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of number pyramid : ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<=n;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
//12:23