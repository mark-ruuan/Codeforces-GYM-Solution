#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define ll long long int
using namespace std;
const int N = 1e6 + 5;
const ll inf = -1e18;
const int MOD = 1e9 + 7;



int main(){
   fast;
   ll n;
   cin >> n;
   while(n--){
   	ll x;
   	cin >> x;
   	x /= 6;
   	ll out = sqrtl(x);
   	cout << out << "\n";
   }




   return 0;
}
