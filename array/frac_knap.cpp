/*  // //  
   // //        
   \\//       
	\>>      
	//\\    
   //  \\
Author: Shadab Eqbal 
Created on: "18-04-2021" 
Name: Fractional Knapsack
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


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int bag = 60;
    vi w = {5, 10, 15, 22, 25};
    vi p = {30, 40, 45, 77, 90};
    double profit = 0;
    vector<pair<float, pair<int, int>>> val;
    for (int i = 0; i < (int)w.size(); i++)
    {
        float x = ((float)p [i]/w[i]);
        val.push_back({x, {w[i], p[i]}});
    }

    sort(val.begin(), val.end(), greater<pair<float, pair<int, int>>>());

    for (auto i : val)
        cout << i.first << "=" << i.second.first << " " << i.second.second << "\n";

    for (auto i : val)
    {
        if (bag >= i.second.first)
        {
            bag -= i.second.first;
            profit += i.second.second;
        }
        else
        {
            profit += (i.first * bag);
            bag = 0;
        }
    }

    cout << profit;
    return 0;
}