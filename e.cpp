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
typedef char** Strings;
void print(VV, _i);
void ma(VV&,_i);
void odd(zxcv,VV&);
void four(_i,VV&);
void two(_i,VV&);//개발중

int main(_i argc, Strings args){
	VV arr;
	_i n;
	#ifndef BOJ
	cout<<"마방진 크기를 입력해 주세요 : ";
	#endif
	cin>>n;
	ma(arr,n);
	if(n&1)
		odd(n,arr);
	else if((n>>1)&1)
		two(n,arr);
		// make_even(n,arr);
	else
		four(n,arr);
	print(arr,n);
	return 0;
}
void ma(VV&arr,_i n){
	VI tmp;
	for(zxcv x=0,y=0;y<n;)
		x<n?tmp.push_back(0*++x):arr.push_back(VI((0*y++)+tmp.begin(),tmp.end()));
}
void odd(zxcv n, VV&arr){
	for(_i x=n/2,y=0,v=1,e=n*n+1;v<e;)
		arr[ASDF(y,n)][QWER(x,n)]=arr[y][x]>0?v+++((x=((n-1)-(n-x)%n))*0*(y=(y+2)%n)):v++;
}
void four(zxcv n,VV&arr){
	for(_i x=0,y=0,z=0;y<n;++x<n?z:y+++(x=0))
		arr[y][x]=++z;
	for(zxcv r=0,co=n/4,c1=n/4,c2=n-n/4-1,i=n/2,t=0;r<co;)
		t=i-->0?(t=arr[c1][r])+(arr[c1][r]=arr[c2][n-1-r])+(arr[c2][n-1-r]=t)+(t=arr[r][c1])+(arr[r][c1++]=arr[n-1-r][c2])+(arr[n-1-r][c2--]=t):r+++(c1=n/4)+(c2=n-n/4-1)+(i=n/2);
}
void two(_i n,VV&arr){
	int tttsize=n/4,tsize=n/2,ttsize=n*3/4;
	VV t;
	ma(t,tsize);
	odd(tsize,t);
	int rux=tsize,ruy=0;
	int rdx=tsize,rdy=tsize;
	int lux,luy;
	int ldx,ldy;
	
	while(ruy<tsize){
		if(rux<n){
			if(rux>n-(n/4)){
				arr[ruy][rux++]=n*n/4;
				arr[rdy][rdx++]=n*n/2;
			}
			else{
				arr[ruy][rux++]=n*n/2;
				arr[rdy][rdx++]=n*n/4;
			}
		}
		else{
			ruy++;
			rdy++;
			rdx=rux=tsize;
		}
	}
}
void print(VV arr, _i n){
	for(_i x=0,y=0;y<n;y+=x>0?0:1)
		x<n?cout<<arr[y][x++]<<' ':cout<<(char)(0xa|(x=0));
}