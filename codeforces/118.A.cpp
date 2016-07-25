//here is my task  http://codeforces.com/problemset/problem/118/A
#include<iostream>
#include<cctype>
#include <stdio.h>

using namespace std;
 
int main () {
    string a;

    cin>>a;
	for(int i=0; i<a.size(); ++i) 
	{
		
		//int len = s.size();

		if(a[i]=='a' || a[i]=='o' 
		    || a[i]=='y' || a[i]=='e' 
		    || a[i]=='u' || a[i]=='i'
            || a[i]=='Y' || a[i]=='E' 
		    || a[i]=='U' || a[i]=='I'			)
		{
		        cout<<"";
		} else 
		{ 
		    cout<<"."<< tolower (a[i]);
		}
	}

    return 0;
}