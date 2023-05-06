#include<iostream>
using namespace std;
int main()
{
    int a[10];
    int n,max=0;
    cout<<"Enter no of elements:";
    cin>>n;
    //input
    for(int i=0;i<n;i++)
    {
        cout<<"Enter value of "<<i+1<<" element:";
        cin>>a[i];
        if(a[i]>max)
            max=a[i];
    }
    //duplicate
    int count=0;
    for(int i=0;i<n-1;i++)
    {
        bool flag=false;
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==0)
                break;
            if(a[i]==a[j])
            {
                flag=true;
                a[j]=0;
            }
        }
        if(flag)
            count++;
    }
    cout<<count;
    return 0;
}