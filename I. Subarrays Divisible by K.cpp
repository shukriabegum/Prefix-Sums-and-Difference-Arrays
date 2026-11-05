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
    
    ll n,k;
    cin >> n>>k;

    vector<int>v(n);

    for(int i =0 ;i<n;i++){
    	cin >> v[i];
    }
    unordered_map<ll,ll>cnt;

    cnt[0]= 1;

    ll pre = 0 , ans=0;

    for(int i =0 ;i<n;i++){
    	pre +=v[i];
    	ll rem = (pre % k + k)%k;

    	ans +=cnt[rem];
    	cnt[rem]++;
    }

    cout<<ans<<endl;
    return 0;
}