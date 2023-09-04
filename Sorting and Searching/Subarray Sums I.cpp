#include<iostream>
using namespace std; 
#include<set>
#include<algorithm>
#include<vector>
#define ll long long
 
int main() {
	ll n, x; 
	cin >> n >> x; 
	ll a[200005]; 
	for (int i = 0; i < n; i++)cin >> a[i]; 
	int coun = 0, j = 0;
	ll sum = 0;
	for (int i = 0; i < n; i++) {
		if (sum + a[i] == x)sum+=a[i],coun++;
		else if (sum + a[i] > x) {
			sum += a[i];
			while (sum > x && j<n)sum -= a[j], j++;
			if (sum == x)coun++;
		}
		else sum += a[i];
	}
	cout << coun << endl;
	
}
