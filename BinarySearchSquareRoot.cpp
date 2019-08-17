#include <stdio.h>
#include <iostream>
using namespace std;


int main()//int argc, char **argv)
{
	int x;
	int flag=0;
	int n,ans;
	int start=0,end;
	
	cout<<"Enter the number whose square root you want to find!";
	cin>>x;
	cout<<x;
	n=x;
	end=x;
	
	
	
	while(start<=end)
	{
		n=(start+end)/2;
		
		if(n*n==x)
			{
				ans=n;
				flag=1;
				break;
			}
		else if(n*n>x)
		{
			end=n-1;
			
		}
			
		else if(n*n<=x)
		{
				start=n+1;
				
		}
		
		
			
	}
	if(flag==1)
	{
			cout<<"The square root is:"<<ans<<endl;
			
	}
	else
		cout<<"Answer is:"<<start-1<<endl;
		
	return 0;
}