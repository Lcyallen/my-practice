#include<iostream>
using namespace std;
int main (){
	
	int n, m, sum, i;
	
	cin>>n>>m;
	
	sum=n; i=1;
	
	while (sum<=m)
	{
		i++;
		n++; 
		sum=sum+n;
	}
	
	cout<<i<<endl;
	
		return 0;
}

//*有沒有辦法不用陣列，找出數列的最大最小值？ 

