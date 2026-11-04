#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
#define pb push_back
#define mp make_pair
#define all(v) v.begin(), v.end()


int main() {
    optimize();
    
 ll  n , m, q;
 cin>> n>> m >> q;

 std::vector<ll> v(n);
 vector<ll>dif(n+1,0);
 vector<ll>pre(n);

 for(ll i= 0 ;i<n;i++){
 	cin>> v[i];
 }

while(m--){
	ll l ,r,x;
	cin>>l>>r>>x;

	l--,r--;

	dif[l] +=x;
	dif[r+1]-=x;
}

ll sum= 0 ;

for(ll i = 0 ;i<n;i++){
	sum +=dif[i];
	v[i]+=sum;
}

pre[0]= v[0];

for(ll i = 1;i<n;i++ ){
	pre[i]=pre[i-1]+v[i];
}

while(q--){
	ll l ,r;
	cin>>l>>r;
	l--,r--;

	if(l==0){
		cout<<pre[r]<<"\n";
	}

	else{
		cout<<pre[r]-pre[l-1]<<endl;
	}
}
    
    return 0;
}