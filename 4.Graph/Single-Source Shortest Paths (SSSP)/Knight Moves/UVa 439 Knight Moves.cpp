#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

#define rep(i,a,b) for(int i = a ; i < b ; i++)
#define endl '\n'
void IO()
{
     std::ios::sync_with_stdio(false);cin.tie(NULL); 
     #ifndef ONLINE_JUDGE
          freopen( "in.txt" , "r" ,stdin);
      //   freopen("out.txt", "w", stdout);
          freopen("Error.txt","w",stderr);
     #endif // ONLINE_JUDGE
}
#define INF 1e9 + 7
int graph[8][8];
int dx[] = { 2, 2,-2, -2 , 1 , 1 , -1, -1 };
int dy[] = { 1,-1, 1,-1 , 2 , -2 , 2 , -2 };
int ans = 0;

bool isValid(int x , int y){
     if(x < 0 or x > 7 or y < 0 or y > 7) return 0; return 1;
}
// solution of https://www.spoj.com/problems/NAKANJ/
// BFS on grid 
void bfs(int startX , int startY , int endX , int endY)
{
     queue<pair<int,int>> q;
     q.push({startX,startY});
     graph[startX][startY] = 0;

     while(!q.empty()){
          int currX = q.front().first , currY = q.front().second;
          q.pop();

          if(currX == endX and currY == endY) { 
               ans = graph[currX][currY]; break;
          }

          rep(i,0,8){
               int childX = currX + dx[i] , childY = currY + dy[i];
               if(isValid(childX,childY) and graph[childX][childY] > graph[currX][currY]){
                   q.push({childX,childY}); graph[childX][childY] = graph[currX][currY] + 1; 
               } 
          } 
     }
}
void solve(string a, string b){
     bfs(a[0]-'a',a[1] - '1' ,b[0] - 'a', b[1] - '1');
     
     cout << "To get from " << a <<  " to " << b << " takes " << ans << " knight moves.\n";
}
int32_t main()
{
   IO();

   string a , b;
   while(cin >> a >> b){
          rep(j,0,8) rep(k,0,8) graph[j][k] = INF;
          solve(a,b);
   } 

   return 0;
}

