#include<bits/stdc++.h>
using namespace std;
int main()
{   int n,t1,t2,t3,k;
   cout<<"Enter no. of elements : ";
    cin>>n;
    int a[n][3],used[n],result[n],c=0;
    cout<<"Enter id job slot and profit : \n";
    for(int i=0;i<n;i++)
    {
        cin>>a[i][0]>>a[i][1]>>a[i][2];
    }
    for (int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i][2]<a[j][2])
            {
                t1=a[i][2];
                a[i][2]=a[j][2];
                a[j][2]=t1;

                 t2=a[i][1];
                a[i][1]=a[j][1];
                a[j][1]=t2;

                 t3=a[i][0];
                a[i][0]=a[j][0];
                a[j][0]=t3;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        used[i]=0;
    }
    for(int i=0;i<n;i++)
    {   k=a[i][1];
        for(int j=k;j>0;j--)
        {
            if(used[j]==0)
            {
                used[j]=1;
                result[j]=a[i][0];
                c++;
                break;
            }

        }
    }


    for(int i=1;i<=c;i++)
    {
       // cout<<a[i][0]<<" "<<a[i][1]<<" " <<a[i][2]<<endl;
        cout<<result[i]<<" ";
    }


}
