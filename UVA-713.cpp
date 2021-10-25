#include <bits/stdc++.h>

using namespace std;

int main() {
	int a=12340,b=0;

	while(a!=0){
		b*=10;
		b+=a%10;
		a=a/10;
	}
	cout<<"b = "<<b<<endl;
	cout<<"a = "<<a<<endl;

	return 0;
}