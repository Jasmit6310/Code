// code for finding gcd of two numbers
#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll gcd(ll a, ll b){
  if(b==0)
    return a;
  else
    return gcd(b,a%b);
}
// kem palty
int main(){
  ll a,b;
  cin>>a>>b;
  cout<<"GCD of "<<a<<" and "<<b<<" is "<<gcd(a,b)<<endl;
  return 0;
}
