
//Maximum Subarray Sum - Kadane's Algorithm
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
    
   int n;
   cin >> n;

   vector< ll > v(n);

   for(int i = 0 ;i<n;i++){
   	cin >> v[i];
   }
   ll res=-1e18,curr_sum=-1e18;
  for(int i = 0 ;i<n;i++){
  	

  	
  		curr_sum =max(v[i],curr_sum+v[i]);
  		res=max(res,curr_sum);
  	
  }

  cout<<res<<endl;
    return 0;
}