#include <bits/stdc++.h>
using namespace std;

typedef long long             ll;
typedef deque<ll>             dq ;
typedef list<ll>              li;
typedef vector<string>        vst ;
typedef vector<ll>            vll ;
typedef deque<ll>::iterator   dita;
typedef double                dd;
typedef greater<ll>           gt;
typedef list<ll>::iterator    liita;
typedef vector<ll>::iterator  vecita;
#define immortal_slave  int main()
#define in(x)           cin>>x;
#define khalid          std::ios::sync_with_stdio(false);cin.tie(NULL);
#define mp              make_pair
#define out(x)          cout<<x<<"\n";
#define out2(x)         cout<<x;
#define newline         cout<<"\n";
#define pb              push_back
#define pf              push_front
#define pob             pop_back
#define pof             pop_front
#define asc_sort(v)     sort(v.begin(), v.end())
#define dsc_sort(v)     sort(v.begin(), v.end(),gt())
#define rep(a,b)        for(ll i = a; i < b;++i)
#define repj(j,a,b)     for(ll j = a; j < b;++j)
#define rep2(a,b)       for(ll i = a; i <= b; ++i)
#define rep2j(j,a,b)    for(ll j = a; j <= b; ++j)
#define rep3(a,b)       for(ll i = a; i >= b;--i)
#define rep3j(j,a,b)    for(ll j = a; j >= b;--j)
#define ss              stringstream
#define st              string
#define min3(a,b,c)     min( a,min( b, c)) 
#define min4(a,b,c,d)   min( d,min3( a, b, c)) 
#define max3(a,b,c)     max( a,max( b, c)) 
#define max4(a,b,c,d)   max( d,max3(a,b,c))   
#define sum(v)          accumulate(v.begin(),v.end(),0ll)
#define all(s)          s.begin(),s.end()
#define ull             unsigned long long 
#define lld             long double
#define endl            "\n"
//----------------------------------------------------debugger-------------------------------------------------------------// |
void _print(ll t) {cerr << t <<",";}                                                                                                
void _print(int t) {cerr << t<<",";}
void _print(string t) {cerr << t<<",";}
void _print(char t) {cerr << t<<",";}
void _print(lld t) {cerr << t<<",";}
void _print(double t) {cerr << t<<",";}
void _print(ull t) {cerr << t<<",";}
 
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.first); cerr << ","; _print(p.second); cerr << "}\n";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]\n";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]\n";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]\n";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]\n";}
//----------------------------------------------------debugger-------------------------------------------------------------//|

//Starting in the name of Allah(THE ALMIGHTY)
void FastIO()
{
     khalid
    #ifndef ONLINE_JUDGE
     freopen("in.txt","r", stdin);
   //  freopen("out.txt", "w", stdout);
    // freopen("Error.txt", "w", stderr);

    #endif // ONLINE_JUDGE      
}

int dx[]={1,1,0,-1};
int dy[]={0,1,1,1};

const int N  = 2e5+10;
const ll mod = 1e9+7;
void  solve(int n)
{    
    vll v(n);

    rep(0,n) in(v[i])

    ll mx = 0 ;

    ll curr = 0;
    rep(0,n)
    {
        if(v[i]+curr<0){ curr = 0 ; continue;}
        curr+=v[i]; mx=max(curr,mx);
    }

    if(mx) cout << "The maximum winning streak is " << mx << ".\n";
    else   cout << "Losing streak.\n";
}
      
immortal_slave 
{
     FastIO() ;
     ll t=1;
     //in(t)

     while(1){
          cin >> t;
          if(!t) break;
          solve(t);
     }

     return 0;
}
 
