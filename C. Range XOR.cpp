#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
#define pb push_back
#define mp make_pair
#define all(v) v.begin(), v.end()


// xor(^) jodi x^x (same)= 0 ,x^0 = x(ja ache ta),same na hoye different holo x^y=1

// 0 based indexing tai amra l,r ke l--,r-- korbo

int main() {
  ll n,q;
  cin>>n>>q;

  vector<ll > v(n);
  for(ll i = 0 ;i<n;i++){
  	cin>>v[i];
  }
   
   vector<ll>pre(n);
   pre[0]=v[0];

   for(ll  i = 1;i<n;i++){
   	pre[i]= pre[i-1] ^ v[i];
   }

   while(q--){
   	ll l,r;

   	cin>> l>> r;
   	l--,r--;
   	if(l==0 ){
   		cout<<pre[r]<<endl;
   	}
   	else{
   	cout<<(pre[r] ^ pre[l-1]);
   	cout<<"\n";
	}
   }
    
    return 0;
}