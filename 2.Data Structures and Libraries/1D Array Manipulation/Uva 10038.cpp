#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dd;
typedef greater<ll> gt;
typedef  vector<ll> vec ;
typedef  deque<ll> dq ;
typedef  vector<char> vst ;
typedef vector<ll> ::iterator vecita;
typedef  list<ll> li;
typedef list<ll> ::iterator liita;
typedef deque<ll>::iterator dita;
#define immortal_slave int main()
#define pb push_back
#define pof pop_front
#define pob pop_back
#define pf push_front
#define ss stringstream
#define st  string
#define rep(i,a,b) for (int i = a; i < b; i++)
#define re(i,a,b) for ( i = a; i < b; i++)
#define rep2(i,a,b) for (int i = a; i <= b; i++)
#define rep3(i,a,b) for (int i = a; i >= b; i--)
#define mp make_pair
#define king  cin.tie(0);
#define out(x) cout << x << endl;
#define in(x) cin>>x;

//Starting in the name of Allah(THE ALMIGHTY)


immortal_slave
{

    king
    int n;
     while((scanf("%d",&n))==1)
     {
        vec a,diff;
        int  x=1,num;

        rep(i,0,n){
            cin>>num;
            a.pb(num);
        }

        rep(i,0,n-1)
        {
            ll num2=abs(a[i]-a[i+1]);
            diff.pb(num2);
        }
        sort(diff.begin(),diff.end());

        rep(i,0,n-1) if(diff[i]!=i+1)x=0;

        if(x)
        cout<<"Jolly"<<endl;

        else
         cout<<"Not jolly"<<endl;

    }





     return 0;

}

