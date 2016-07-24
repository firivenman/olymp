// here is my cpp task 1A http://codeforces.com/problemset/problem/1/A

#include<iostream>
#include<cmath>

using namespace std;

int main() {
	long long n, m, a;
	cin >> n >> m >> a;
	
	long long h = (n / a);
	if(h * a < n)
		h++;
	long long w = (m / a);
	if(w * a<m)
		w++;
	
	cout << h * w;
	
	return 0;
}