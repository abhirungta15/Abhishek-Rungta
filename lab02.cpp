#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	 std::fstream myfile("/home/bmsce/Documents/1bm17cs138/lab/test138.txt", std::ios_base::in);
	int n,i,j,a[100],k,t,flag=0;
	
	cout<<"Reading number of test cases! "<<endl;
	myfile>>t;
	
	
	cout<<"Reading the number of array elements and the number to be found "<<endl;
	
	for(i=0;i<t;i++)
	{
		myfile>>n;
	    myfile>>k;
		
		cout<<"Reading the array elements "<<endl;
		for(j=0;j<n;j++)
		{
			myfile>>a[j];
			if(a[j] == k)
				flag=1;
		}
		
		if(flag==1)
		{cout<<"Element found!"<<endl;
		 flag=0;
		}
		else
			cout<<"Not found!";
	
	}
	
}
