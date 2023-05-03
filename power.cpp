#include<iostream>
#include<math.h>
using namespace std;
int main(){
double answer=1;
double base;
double exponent;
cout<<"enter the base value"<<endl;
cin>>base;
cout<<"enter the exponent"<<endl;
cin>>exponent;
// answer=pow(base,exponent);
// cout<<answer;
 for(int i=1;i<=exponent;i++){
     answer= answer*base;
 }
 cout<<answer;
return 0;
}