#include<iostream>
using namespace std;
int main()
{
    int n,a[20];
    cout<<"Enter the number of elements:";
    cin>>n;
    cout<<"Enter the array:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int max=a[0];
    int min=a[0];
    for(int i=1;i<n;i++)
    {
        if(min>a[i])
            min=a[i];
        if(max<a[i])
            max=a[i];
    }
    cout<<"Max="<<max;
    cout<<" Min="<<min;
    return 0;
}
