#include<iostream>
#include<set>
#include<algorithm>
#include<vector>
 
using namespace std; 
int main() {
 
	int street_len;
	int light_num;
	cin >> street_len >> light_num;
 
	set<int> lights{ 0, street_len };
	multiset<int> dist{ street_len };
	for (int l = 0; l < light_num; l++) {
		int pos;
		scanf("%d",&pos);
 
		auto it1 = lights.upper_bound(pos);
		auto it2 = it1;
		--it2;
 
		dist.erase(dist.find(*it1 - *it2));
		dist.insert(pos - *it2);
		dist.insert(*it1 - pos);
		lights.insert(pos);
 
		auto ans = dist.end();
		--ans;
		printf("%d ",*ans);
	}
}