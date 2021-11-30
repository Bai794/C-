//解空间为排列�?
#include<iostream>
#include<vector>
using namespace std;
 
void swap(int &x,int &y){
	int tmp=x;
	x=y;
	y=tmp;
	/*x^=y;//用此交换方式输出全为0 
	y^=x;
	x^=y; */ 
} 
 
void display(int a[],int n){
	cout<<"(";
	for(int i=0;i<n-1;i++){
		cout<<a[i]<<",";
	}
	cout<<a[n-1];
	cout<<")";
}
 
void dfs(int a[],int i,int n){
	if(i>=n){
		display(a,n);
	}
	else{
		for(int j=i;j<n;j++){
			swap(a[i],a[j]);
			dfs(a,i+1,n);
			swap(a[i],a[j]);
		}
	}
}
 
int main()
{
	int a[]={1,2,3};
	int n=sizeof(a)/sizeof(int);
	cout<<"����"<<endl;
	dfs(a,0,n);
    system("pause");
	return 0;
}