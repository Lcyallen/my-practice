#include <iostream>
using namespace std;

int main (){
	int n=0; cin>>n;
	char a[n][n]; //宣告為二維字元陣列！但還是忘記如何初始化！ 
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++)cin>>a[i][j];
	}
	int row[n*n]={}, column[n*n]={};//用row[]和column[]存有*的行數和列數，但要注意炸彈可以有n的平方個！ 
	int k=0, l=0;
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++){
			if (a[i][j]=='*'){
				row[k]=i; k++;
				column[l]=j; l++;
			}
		}
	}
/*	for (int i=0; i<k; i++)cout<<row[i]<<" ";
	cout<<endl;
	for (int j=0; j<l; j++)cout<<column[j]<<" ";			
*/		
	for (int i=0; i<k; i++){
		for (int j=0; j<n; j++){
			a[row[i]][j]='*';//把「目標行」的每個元素都改成* 
		}
	}
	for (int j=0; j<l; j++){
		for (int i=0; i<n; i++){
			a[i][column[j]]='*';//把「目標列」的每個元素都改成* 
		}
	} 
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++)cout<<a[i][j];
		cout<<endl;
	}
	return 0;
}
