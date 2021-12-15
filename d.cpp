#include<iostream>
#include<vector>
#define QWER(N,n) ((N)>0?1+((N)=(N)-1):0+(0*((N)=((n)-1))))

using namespace std;

void print(vector<vector<int>>arr,int n);

int main(){
	int n;
	cin>>n;
	vector<vector<int>>arr;
	vector<int>a;
	for(int i=0,j=0;i<n;i+=j<n?0*j++:1){
		if(j<n){a.push_back(0);}
		else{arr.push_back(a);}
	}
	int size = n*n+1;
	for(int x=n/2,y=0,num=1;num<size;num++){arr[QWER(y,n)][QWER(x,n)]=arr[y][x]==0?num:num-(0*(y=(y+2)%n)*(x=++x%n));}
	print(arr,n);
	return 0;
}
void print(vector<vector<int>>arr,int n){
	for(int x=0,y=0;y<n;y+=x==0?1:0){
		if(x<n){cout<<arr[y][x++]<<' ';}
		else{cout<<(char)(10+(x=0));}
	}
}
