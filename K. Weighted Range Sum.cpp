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
    
    int n,q;
    cin >> n>>q;
vector<ll>v(n+1);
    for(int i = 1 ;i<=n;i++){
    	cin >> v[i];
    }

    vector<ll>p(n+1);
    vector<ll>p2(n+1);
   
    for(int i = 1;i<=n;i++){
    	p[i]=p[i-1]+(i*v[i]);
    	p2[i]=p2[i-1]+(v[i]);
    
    }

    while(q--){
    	ll l,r;
    	cin >> l>>r;


    	ll term1 = p[r] - p[l-1];
    	ll term2 = p2[r] - p2[l-1];

    	cout<< term1 - (l-1)*term2<<endl;
  

    }
    return 0;
}