#include<iostream>
using namespace std;

// 递归方法求最大公因数
long int gcd(long int a,long int b){
	if(b==0) return a;
	else return gcd(b,a%b);
}
// 求最小公倍数
long int lcm(long int a,long int b){
	return a*b/gcd(a,b);
}
// 分数的化简，a是分子,b是分母
long int simplify(long int &a,long int &b){
  	//中间变量，用来存放a,b的最大公因数，否则a的值一变化,gcd(a,b)也会改变
	long int c;
	while(gcd(a,b)!=1){
		c=gcd(a,b);
		a=a/c;
		b=b/c;
	}
	return a,b;
}

int main(){
	int N,i;
	cin>>N;
	long int *p1=new long int[N]();//存放分子，以0初始化
	long int *p2=new long int[N]();//存放分母，以0初始化
	for(i=0;i<N;i++){
        //c语言的格式化输入，c++兼容c的语法
		scanf("%lld/%lld", &p1[i], &p2[i]);
	}
	long int sum_m=0;//和的分子，初始化为0
	long int sum_d=1;//和的分母，初始化为1
	int temp;
	for(i=0;i<N;i++){
		temp=sum_d;
		sum_d=lcm(sum_d,p2[i]);
		sum_m=sum_m*(sum_d/temp)+p1[i]*(sum_d/p2[i]);
      	simplify(sum_m,sum_d);//每加一个分数就化简一次
	}

	if(sum_m%sum_d==0) cout<<sum_m/sum_d<<endl;//如果分子整除分母
	else {
		if(sum_m<sum_d) cout<<sum_m<<'/'<<sum_d<<endl;//真分数的情况
      	//对于假分数的情况，要先求出整数部分
		else{
			cout<<sum_m/sum_d<<" ";//输出整数部分
			sum_m=sum_m-(sum_m/sum_d)*sum_d;
			simplify(sum_m,sum_d);//化简分数
			cout<<sum_m<<'/'<<sum_d<<endl;
		}
	}
	//释放内存
	delete[] p1;
	delete[] p2;

	return 0;
}