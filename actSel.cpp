#include<bits/stdc++.h>
using namespace std;
int main()
{   int n,t1,t2,c;
   cout<<"Enter no. of elements : ";
    cin>>n;
    int a[n][2];
    cout<<"Enter start and finish time : \n";
    for(int i=0;i<n;i++)
    {
        cin>>a[i][0]>>a[i][1];
    }

    for (int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i][1]<a[j][1])
            {
                t1=a[i][1];
                a[i][1]=a[j][1];
                a[j][1]=t1;

                 t2=a[i][1];
                a[i][1]=a[j][1];
                a[j][1]=t2;


            }
        }
    }
    cout<<"Selected activity : \n";
    cout<<a[0][0]<<","<<a[0][1];
    c=0;
    for(int j=1;j<n;j++)
    {
        if(a[c][1]<=a[j][0])
        {    cout<<a[j][0]<<","<<a[j][1];
            c=j;
        }
    }
  /*  for(int i=0;i<n;i++)
    {
        cout<<a[i][0]<<" "<<a[i][1]<<endl;
       // cout<<result[i]<<" ";
    }*/

return 0;
}
