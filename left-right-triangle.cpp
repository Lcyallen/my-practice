#include<iostream>
using namespace std;
int main (){
	
	int n, i, j;
	
	cin>>n;
	for (j=1; j<=n; j++)	
	{
		for (i=n; i>=j; i--)
			cout<<" ";
		
		for (i=1; i<=j; i++)
			cout<<"*";
			
		cout<<endl;
	}
	
		return 0;
}
