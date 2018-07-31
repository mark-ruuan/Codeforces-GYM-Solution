#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define ll long long int
using namespace std;
const int N = 1e6 + 5;
const ll inf = -1e18;
const int MOD = 1e9 + 7;


set<ll> st;
map<ll, ll> mp;
ll a[N];
int main(){
   fast;
   ll t;
   cin >> t;
   while(t--){
   	mp.clear();
   	st.clear();
   	ll n, m, x, y, z;
   	cin >> n >> m;
   	for(int i = 1; i <= n; i++){
   		cin >> a[i];
   		mp[a[i]]++;
   		st.insert(a[i]);
   	}
   	while(m--){
   		cin >> x;
   		if(x == 1){
   			cin >> y >> z;
   			mp[a[y]]--;
   			if(mp[a[y]] == 0)
   				st.erase(a[y]);
   			mp[z]++;
   			a[y] = z;
   			st.insert(z);
   		}
   		else{
   			int t = 0;
   			if(mp[0])
   				t++;
   			cout << (int)st.size() - t << "\n";
   		}

   	}
   }




   return 0;
} 
