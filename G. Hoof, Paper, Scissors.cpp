#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main() {
    optimize();

    int n;
    cin >> n;

    vector<char> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int total_h = 0, total_s = 0, total_p = 0;

    
    for (int i = 0; i < n; i++) {
        if (a[i] == 'S') total_h++; // Rock (H) beats Scissors (S)
        if (a[i] == 'P') total_s++; // Scissors (S) beats Paper (P)
        if (a[i] == 'H') total_p++; // Paper (P) beats Rock (H)
    }

  
    int max_win = max({total_h, total_p, total_s});

    int left_h = 0, left_p = 0, left_s = 0;

    
    for (int i = 0; i < n - 1; i++) {
        
        if (a[i] == 'S') left_h++;
        if (a[i] == 'P') left_s++;
        if (a[i] == 'H') left_p++;

        if (a[i] == 'S') total_h--;
        if (a[i] == 'P') total_s--;
        if (a[i] == 'H') total_p--;

        int left_best = max({left_h, left_p, left_s});
        int right_best = max({total_h, total_p, total_s});
        
        max_win = max(max_win, left_best + right_best);
    }

    cout << max_win << endl;

    return 0;
}