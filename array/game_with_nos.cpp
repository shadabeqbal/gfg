/*  // //  
   // //        
   \\//       
    \>>      
    //\\    
   //  \\
Author: Shadab Eqbal 
Created on: "01-02-2021" 
Name: Game with nos
Link: https://practice.geeksforgeeks.org/problems/game-with-nos3123/1/?category[]=Arrays&amp;category[]=Arrays&amp;page=1&amp;query=category[]Arrayspage1category[]Arrays
*/

#include <bits/stdc++.h>

using namespace std;

#define MAX 1e18
#define MIN -1e18
#define MOD 1000000007
#define PI 3.141592653589793238

#define pb push_back
#define mp make_pair
#define ll long long int

#define all(x) x.begin(), x.end()

#define clr(x) memset(&x, 0, sizeof(x))

#define srt(x) sort(all(x))
#define search(x, y) binary_search(all(x), y)

#define fr(x, n) for (ll i = x; i < n; i++)
#define frk(x, n, k) for (ll i = x; i < n; i += k)
#define frit(x) for (auto i = x.begin(); i != x.end(); ++i)

typedef pair<int, int> pi;
typedef vector<pi> vpi;
typedef vector<vpi> vvpi;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<ll, ll> pll;
typedef vector<pll> vpl;
typedef vector<ll> vll;
typedef vector<vll> vvll;

vector<int> foo(vi &vec)
{
    vi ans;
    for (int i = 0; i < vec.size(); i++)
        ans.pb(vec[i] ^ vec[i + 1]);
    

    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vi vec = {5, 9, 7, 6};
    vi ans = foo(vec);
    for (auto i : ans)
        cout << i << " ";
    return 0;
}