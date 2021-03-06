#include <iostream>
using namespace std;

int main(){
	
	int A[2][3]={{1,2,3},{3,2,1}};		//A是2*3的矩陣-->2列3行 
	int B[3][2]={{1,2},{2,3},{3,4}};	//B是3*2的矩陣-->3列2行 
	int C[2][2]={{0},{0}};			//C是A*B的矩陣=2*2-->2列2行，初始化每個元素均為0 
	
	for (int i=0; i<2; i++)		//i值是列，要看C或是A的列數-->2 
	{
		for (int j=0; j<2; j++)	//j是行，要看C或是B的行數-->2 
		{
			for (int k=0; k<3; k++)		//k是A和B相乘被"吸收 "的中間值-->3 
				C[i][j]+=A[i][k]*B[k][j];	//C要記得用累加的方式把每個A(i,k)*B(k,j)的結果都加起來 
		}
	}
	
	for (int i=0; i<2; i++)
	{
		for (int j=0; j<2; j++)
		{
			cout<<C[i][j]<<"\t";		//列印時已經用不到k了 
		}
		cout<<endl;						//每一列輸出完要換列 
	}
	
	return 0;
}
