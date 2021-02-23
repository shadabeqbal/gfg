/*  // //  
   // //        
   \\//       
    \>>      
    //\\    
   //  \\
Author: Shadab Eqbal 
Created on: "03-02-2021" 
Name: 
Link: 
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
struct Height {
	int feet;
	int inches;
};

int findMax(Height arr[], int n)
{
    int val=INT_MIN;
    for(int i=0;i<n;i++){
        if((12*(arr[i].feet)+(arr[i].inches))>val)
        {
            val=(12*(arr[i].feet)+(arr[i].inches));
        }
        
    }
    
    return val;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    struct Height p[2];
    p[0].feet=1;
    p[0].inches=2;
    p[1].feet=2;
    p[1].inches=1;
    cout<<findMax(p,2);

    return 0;
}