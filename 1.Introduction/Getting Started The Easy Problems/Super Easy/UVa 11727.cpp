#include <bits/stdc++.h>

using namespace std;

int main()
{
     #ifndef ONLINE_JUDGE
          freopen( "in.txt" , "r" ,stdin);
      //   freopen("out.txt", "w", stdout);
      //    freopen("Error.txt","w",stderr);
     #endif // ONLINE_JUDGE

    int T;
    
    cin >> T;
    
    for (int round = 1; round <= T; ++round)
    {
        int a[3];
        for(int i = 0 ; i < 3 ; i++) cin >> a[i];
        
        printf("Case %d: ", round);
        sort(a,a+3);
        cout << a[1] << '\n';
    
    }

}