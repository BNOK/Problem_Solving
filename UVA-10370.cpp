#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;

	cin>>t;

	while(t--){
		int n,avr = 0;
		vector<int> v;
		cin>>n;

		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			v.push_back(x);
			avr +=x;
		}
		avr /=n;
		int count = 0;
		for(int i=0;i<n;i++){
			if(v[i]>avr){
				count++;
			}
		}
		float res = (count*100)/n;
		printf("%.3f\n",res);
	}
	return 0;
}