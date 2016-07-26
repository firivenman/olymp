//here is my task http://codeforces.com/problemset/problem/282/A

#include<iostream>
#include <cmath>

using namespace std;

int main() 
{
    int n,x;
    x=0;
    cin>>n;
    string s;
	for(int i=0;i<n;i++){
	    cin >>s;
	    if (s[1]=='+')
	    {   
	        x++;
        } 
        else 
        {
		    x--;
	    }
    }
	cout << x;
	return 0;
}
