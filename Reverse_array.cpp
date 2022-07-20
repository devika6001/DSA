#include<iostream>
using namespace std;
int main()
{
    int m,n,a[20],temp;
    cout<<"Enter the number of arrays to be reversed:";
    cin>>m;
    for(int j=0;j<m;j++)
    {
        cout<<"Enter the size of the array:";
        cin>>n;
        int k=n;
        k--;
        cout<<"Enter the array:";
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n/2;i++,k--)
        {
            temp=a[i];
            a[i]=a[k];
            a[k]=temp;
        }
        cout<<"Reversed array:";
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
    }
    return 0;
}
