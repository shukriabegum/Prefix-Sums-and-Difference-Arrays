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
    cin >>n>>q ;
    
    vector<int>v(n);
    for(int i = 0 ;i<n;i++){
    	cin>>v[i];
    }

    std::vector<int> pre(n);
    pre[0]=v[0];

    int sum = pre[0];

    for(int i = 1 ;i<n;i++){
    	pre[i]=pre[i-1]+v[i];
    }

    while(q--){
    	int l,r;
    	cin>>l>>r;
    	l--,r--;
        if (l == 0) {
            cout << pre[r] << endl;
        } else {
            cout << pre[r] - pre[l-1] << endl;
        }
    }
    return 0;
}