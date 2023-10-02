#include <bits/stdc++.h>
 
using namespace std;
 
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define set_bits(x) __builtin_popcountll(x)
#define all(x) (x).begin(), (x).end()
#define nline "\n"
 
#ifdef dhruv1807
#define debug(x) cerr << #x<<" "; _print(x); cerr << endl;
#else
#define debug(x);
#endif
 
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
 
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
 
void solve(){
    ll n;
    cin >> n;
 
    vector<int>arr(n-1);
    for (int i=0; i<n-1; i++){
        cin>>arr[i];
    }
    
    vector<int>cnt(n+1,1);
 
    for (int i=0; i<n-1; i++){
        cnt[arr[i]]--;
    }
 
    for (int i=1; i<=n; i++){
        if (cnt[i] == 1) {
            cout<<i<<nline;
            break;
        }
    }
}
 
int main(){
    fastio();
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r", stdin);
        freopen("output.txt","w",stdout);
        freopen("error.txt","w",stderr);
    #endif
 
    ll t=1;
    while(t--){
        solve();
    }
 
    return 0;
}
