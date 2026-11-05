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
    
    ll n,m;
    cin >> n>> m;

    vector<ll>v(n+1);

    for(int i =1 ;i<=n;i++){
    	cin>> v[i];
    }
  vector<ll>dif(n+2,0);
  
    while(m--){
    	ll l,r,x;
    	cin >> l>>r>>x;
        if(l<=r){
        	dif[l]+=x;

        	dif[r+1]-=x;
        }
        else{
        	dif[l]+=x;
        	dif[n+1]-=x;

        	dif[1]+=x;
        	dif[r+1] -=x;
        }

    }
ll sum = 0 ;

for(int i = 1;i<=n;i++){
	sum +=dif[i];
	v[i]+=sum;
}
for(int i = 1;i<=n;i++){
   cout<<v[i]<<" ";
}
    return 0;
}
