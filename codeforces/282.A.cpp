//here is my task http://codeforces.com/problemset/problem/282/A

#include<iostream>
#include <cmath>

using namespace std;

int main() 
{
	
    int n,x,i;
	
	
    x=0;
	i=0;
	cin>>n;
	
	for( i=0;i<=n;i++);
	{	
       
	    if( i%2>0 )
		{
			x--;
			
		}
		else if(i%2==0 && i/2>0)
		{
			
		x++;
		}
		
	
		}
	
    
	
	cout << x;
	
	return 0;
			 
}
	
	
      