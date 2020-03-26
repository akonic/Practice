#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,s=0;
    cout<<"Enter no. of terms : ";
    cin>>n;
    int a[n];
    cout<<"Enter elements :\n";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    cout<<"Merging :\n";
    for(int i=0;i<n-1;i++)
    {
       a[i+1]=a[i]+a[i+1];

       s+=a[i+1];
       sort(a,a+n);
    }
    cout<<"\nSum="<<a[n-1];
    cout<<"\nTotal time="<<s;

}
