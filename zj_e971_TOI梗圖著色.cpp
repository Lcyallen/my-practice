#include <iostream>
using namespace std;

int main (){
	int m, n;
	cin>>m>>n;
	while (m--){
		int j=0, a[105]={}, b[105]={-1};//原本以為自己的程式寫錯了，後來發現這些初始值必須移進來while迴圈裡面
		for (int i=0; i<n; i++){
			cin>>a[i];
			if (a[i]==1){
				b[j]=i;//第2個數列記錄是第幾項為1
				j++; //數列中有j個1 
			}
		}
		for (int k=0; 2*k<j; k++){ //最外圈決定要做幾次下面的程序
			for (int i=0; i<n; i++){ //每個a[i]都要檢查 
				if (i>b[2*k] && i<b[2*k+1])//把兩個1之間的數都換成1 
					a[i]=1;
			}
		}
		for (int i=0; i<n; i++){
			cout<<a[i]<<" ";
		} cout<<endl;
	}

	
	
	
	return 0;
}
