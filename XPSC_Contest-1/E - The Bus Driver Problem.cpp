#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, d, r;
	int hrs, mon[100], aft[100];
	int pay;

	while (cin>>n>>d>>r, n || d || r) {
		pay = 0;

		for (int i = 0; i < n; i++) {
			cin>>mon[i];
		}
		sort(mon, mon + n);
		for (int i = 0; i < n; i++) {
			cin>>aft[i];
		}
		sort(aft, aft + n, greater<int>());

		for (int i = 0; i < n; i++) {
			hrs = mon[i] + aft[i];
			if (hrs > d)
				pay += (hrs - d) * r;
		}

		cout<<pay<<endl;
	}

	return 0;
}