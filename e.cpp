#include<iostream>
#include<vector>
#include<typeinfo>
#define QWER(N,n) ((N)+1<(n)?(N)++:((N)=0)+(n)-1)
#define ASDF(N,n) ((N)>0?1+((N)=(N)-1):0+(0*((N)=((n)-1))))

using namespace std;

typedef int _i;
typedef vector<_i> VI;
typedef vector<VI> VV;
typedef _i zxcv;
void print(VV, _i);
void odd(zxcv,VV&);
void four(_i n,VV&);

int main(_i argc, char** args){
	VV arr;
	VI tmp;
	_i n;
	cin>>n;
	for(zxcv x=0,y=0;y<n;)
		x<n?tmp.push_back(0*++x):arr.push_back(VI((0*y++)+tmp.begin(),tmp.end()));
	if(n&1)
		odd(n,arr);
	else if(((n>>1)^1)&1)
		four(n,arr);
	else
		arr[0][0]=2;
	print(arr,n);
	return 0;
}
void odd(zxcv n, VV&arr){
	for(_i x=n/2,y=0,v=1,e=n*n+1;v<e;)
		arr[ASDF(y,n)][QWER(x,n)]=arr[y][x]>0?((x=((n-1)-(n-x)%n))*0*(y=(y+2)%n))+v++:v++;
}
void four(_i n,VV&arr){
	for(zxcv x=0,y=0,z=0;y<n;++x<n?z:y+++(x=0))
		arr[y][x]=++z;
}
void print(VV arr, _i n){
	for(_i x=0,y=0;y<n;y+=x>0?0:1)
		x<n?cout<<arr[y][x++]<<' ':cout<<(char)(0xa|(x=0));
}

