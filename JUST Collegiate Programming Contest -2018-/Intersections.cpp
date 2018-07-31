#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define ll long long int
using namespace std;
const int N = 1e6 + 10;
const ll inf = -1e18;
const int mod = 1e9 + 7;

ll a[N], pos[N];
ll BIT[N];

ll get(ll x){
	ll sum = 0;
	while(x){
		sum += BIT[x];
		x -= (x &(-x)); 
	}
	return sum;
}

void update(int idx, int data){
	while(idx < N){
		BIT[idx] += data;
		idx += idx & (-idx);
	}
}

int main(){
  fast;
  ll tt;
  cin >> tt;
  while(tt--){
  	memset(BIT, 0, sizeof(BIT));
  	ll n, x, ans = 0;
    cin >> n;
    for(int i = 1; i <= n; i++) cin >> a[i];
    for(int i = 1; i <= n; i++){
  		cin >> x;
  		pos[x] = i;
  	}
  	for(int i = 1; i <= n; i++){
  		update(pos[a[i]], 1);
  		ans += get(N - 1) - get(pos[a[i]]);
  	}
  	cout << ans << "\n";
  }

  return 0;
}
