#include<iostream>
using namespace std;

int main() {
	int N;  //输入的正整数
	int n=1;
	char b; //输入的符号
	// (1)第一种把b当做字符
	// (2)第二种b[1]当做一个字符数组，那么下面的cout<<b;改为cout<<b[0];
	int i;
	cin>>N>>b;
	// 计算n，则2*(n-1)+1就是第一行的符号数，
	// 2*n*n+4*n+1=1+2*(3+5+...+(2*n+1))
	for(n;2*n*n+4*n+1<=N;n++){
	}
	int c=n;
	// 输出上半部分--倒三角形
	for(n;n>0;n--){
		for(i=1;i<=(c-n);i++){
			cout<<" ";
		}
		for(i=1;i<=(2*n-1);i++){
			cout<<b;
		}
		cout<<endl;
	}
	// 输出下半部分--没有顶点的三角形
	for(n;2*(n+1)+1<=2*(c-1)+1;n++){
		for(i=1;i<=(c-n-2);i++){
			cout<<" ";
		}
		for(i=1;i<=2*(n+1)+1;i++){
			cout<<b;
		}
		cout<<endl;
	}
	// 输出剩下没用掉的符号数
	cout<<(N-2*(c-1)*(c-1)-4*(c-1)-1)<<endl;
	return 0;
}
