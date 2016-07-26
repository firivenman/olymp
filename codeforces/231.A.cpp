//here is my task http://codeforces.com/problemset/problem/231/A

#include<iostream>
#include<string>

using namespace std;

int main() {
	int n; 
	cin>>n;

	int c,v,b;
	int a=0;//count right answers
	for(int i=0;i<=n;i++){
	    cin >> c >> v >> b >>endl;
		if (c+v+b>1) {
		    ++a;
		} else{a=a;
		}
		
	}
	 cout<<a;
	return 0 ;
	}
	
	
	