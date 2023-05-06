#include<iostream>
using namespace std;
int Binary_search(int a[], int n, int item)
{
    int low=0,high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(item==a[mid])
            return mid;
        if(item<a[mid])
            high=mid-1;
        else
            low=mid+1;
    }
    return -1;
}
int main()
{
    int *a;
    int n,max=0;
    cout<<"Enter no of elements:";
    cin>>n;
    //dynamic memory
    a=new int[n];
    //input
    for(int i=0;i<n;i++)
    {
        cout<<"Enter value of "<<i+1<<" element:";
        cin>>*(a+i);
        if(a[i]>max)
            max=a[i];
    }
    //binary search
    int item,index;
    cout<<"Enter item to search:";
    cin>>item;
    index=Binary_search(a,n,item);
    if(index==-1)
        cout<<"Item not found";
    else
        cout<<"Item found at index "<<index+1;
   
    //free dynamic memory
    delete []a;
    return 0;
}