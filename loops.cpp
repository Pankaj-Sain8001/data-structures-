#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int i,j,k,l,n=5;
    // for(i=1,j=1,k=1;i<=n,j<=n,k<=2*(n-i)-1;i++,j++,k++){
    //     cout<<i<<" ";
    //     cout<<j<<" ";
    //     cout<<" "<<"\n";
    // }

    for(int i=1;i<=5;i++){
    for(int j=1;j<=i;j++)
    cout<<j<<" ";
    for(int k=1;k<((n-i)*2)*2-1;k++)
    cout<<" ";
    for(int l=i;l>=1;l--)
    {
    if(l==n)
    continue;
    cout<<l<<" ";
    }
    cout<<endl;


}
    //for(i=1;i<=5,j<=5;j++)
    //cout<<i<<j<<" "<<"\n";
    // for(j=1;j<=5;j++)
    return 0;
}