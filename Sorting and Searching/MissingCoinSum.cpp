#include <bits/stdc++.h>
 
using namespace std;
 
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define set_bits(x) __builtin_popcountll(x)
#define fo(x,start,end) for(ll x = start; x < end; x++)
#define rfo(x,start,end) for(ll x = start; x >= end; x--)
#define read(x) fo(i, 0, x.size()) cin >> x[i]
#define all(x) (x).begin(), (x).end()
#define nline "\n"
#define sz(x) (int)(x).size()
 
#ifdef dhruv1807
#define debug(x) cerr << #x<<" "; _print(x); cerr << endl;
#else
#define debug(x);
#endif
 
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef vector<vll> vvll;
typedef pair<int,int> pi;
typedef pair<ll,ll> pll;
 
template <class T, class V> void _print(pair <T, V> p) {cout << "{"; cout<<p.ff; cout << ","; cout<<p.ss; cout << "}";}
template <class T> void _print(vector <T> v) {cout << "[ "; for (T i : v) {cout<<i; cout << " ";} cout << "]";}
template <class T> void _print(set <T> v) {cout << "[ "; for (T i : v) {cout<<i; cout << " ";} cout << "]";}
template <class T> void _print(multiset <T> v) {cout << "[ "; for (T i : v) {cout<<i; cout << " ";} cout << "]";}
 
 
 
void solve(){
    ll n;
    cin >> n;
 
    vector<ll> arr(n); //[start,end]
 
    fo(i,0,n) cin>>arr[i];
 
    sort(all(arr));
    
    ll currsum = arr[0];
    vll dp(n);
    if (arr[0] == 1) dp[0] = 2;
    else{
        cout<<1<<nline;
        return;
    }
 
    fo(i,1,n){
        currsum += arr[i];
        if (currsum - dp[i-1] >= dp[i-1]) dp[i] = dp[i-1];
        else dp[i] = currsum+1;
    }
 
    cout<<dp[n-1];
}
 
int main(){
    // auto begin = std::chrono::high_resolution_clock::now();
    fastio();
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r", stdin);
        freopen("output.txt","w",stdout);
        freopen("error.txt","w",stderr);
    #endif
 
    ll t;
    // cin >> t;
    t=1;
    while(t--){
        solve();
    }
 
    // auto end = std::chrono::high_resolution_clock::now();
    // auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    // cout << "Time measured: " << elapsed.count() * 1e-6 << "ms\n";
 
    return 0;
}
