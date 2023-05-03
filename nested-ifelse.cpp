#include<iostream>

int main(){
using namespace std;
int i,j,k,n;

cout<<"enter the rows : ";
cin>>n;
for(i=1;i<=n;i++)
{
    for(j=1;j<=i;j++)
    cout<<j<<" ";
    for(int k=n-1;k>=(n-i)*2-1;k--)
    cout<<" ";

    for(int l=1;l<=i;l++)
    cout<<l<<" ";
cout<<"\n";
}
for(i=n-1;i>=1;i--)
{
    for(j=1;j<=i;j++)
    cout<<j<<" ";
cout<<"\n";
}
return 0;
}
