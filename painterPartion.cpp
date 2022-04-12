#include <bits/stdc++.h>
using namespace std;

int AggrCow(vector<int> stall, int n, int c) {
	int low = 1, high = stall[n] - stall[0];

	while(low <= high) {
		
	}
}

int main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin); 
	freopen("output.txt","w",stdout); 
	#endif

	int t;
	cin >> t;
	while(t--) {
		int n, c;
		cin >> n >> c;

		vector<int> stall(n);

		for(int i = 0; i < n; i++) {
			cin >> stall[i];
		}
		AggrCow(stall, n,c);


	}

}