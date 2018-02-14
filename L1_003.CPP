#include<iostream>
#include<string> //记得包括上string类
using namespace std;

int main(){
	string N; //存放输入的数
	cin>>N;
	int a[10]={0}; //统计数字个数的数组
	int i=0;
	for(i;i<N.length();i++){ // length():string类的求字符串长度的函数
		a[N[i]-'0']++; // N[i]-'0'把string转为int
	}
    // 输出部分
	for(i=0;i<10;i++){
		if (a[i]) //假如a[i]=0，说明N里面没有i这个数字
			cout<<i<<":"<<a[i]<<endl;
	}
	return 0;
}