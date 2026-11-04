
//Difference array 
//https://www.geeksforgeeks.org/dsa/difference-array-range-update-query-o1/



#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
#define pb push_back
#define mp make_pair
#define all(v) v.begin(), v.end()



int main() {
    
    int n,m;
    cin >> n>>m;

    vector<ll >v(n);
    for(int i=0 ;i<n;i++){
    	cin >> v[i];
    }
    
    vector<ll>dif(n+1,0);

    while(m--){
    	ll l,r,x;

    	cin >> l>>r>>x;
         l--,r--;
    	dif[l]+=x;
    	dif[r+1]-=x;
    }


    ll sum = 0 ; // kno sum nilam jodi na nei tahole dif arr main logic broke hobe seti ami dkehichi o cause proper output ase ni
    // sum =0 ; neyar karone ki hobe amra upore
    //while loop diye ekti range create korsi
    // l=x ,r+1=-x hobe like erokom 0 0 0 0 0 jodi 
    //l =1 and r=3 hoy and 10 add korte hoy array ti hoto
    // dif[n+1]= 10  0  0 -10 0 erokom 
    // ekhon to amader 10 baki index e add korte hobe er jonno
    // er jonno running sum namer variable nilam
    //then jokhon loop calalam tokhon sum=0 chilo and dif[0]=10 karon 
    //l =0 chilo then sum holo 10 then amra sum ke original array er index e add korlam 
    // v[0] = 11 age chilo v[0]= 1
    // thik evabe baki index gulu add hoy without storing any value
    //then amader l and r+1 ek jaygay thakto norto na
    // running sum use koray amder l theke r porjono x value add hoy
    

    for(int i = 0 ;i<n;i++){
    	sum +=dif[i];
    	v[i] +=sum;
    }
    for(int i =0 ;i<n;i++){
    	cout<<v[i]<<" ";
    }
    cout<<"\n";

    return 0;
}