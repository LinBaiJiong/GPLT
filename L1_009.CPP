#include<iostream>
using namespace std;

// �ݹ鷽�����������
long int gcd(long int a,long int b){
	if(b==0) return a;
	else return gcd(b,a%b);
}
// ����С������
long int lcm(long int a,long int b){
	return a*b/gcd(a,b);
}
// �����Ļ���a�Ƿ���,b�Ƿ�ĸ
long int simplify(long int &a,long int &b){
  	//�м�������������a,b���������������a��ֵһ�仯,gcd(a,b)Ҳ��ı�
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
	long int *p1=new long int[N]();//��ŷ��ӣ���0��ʼ��
	long int *p2=new long int[N]();//��ŷ�ĸ����0��ʼ��
	for(i=0;i<N;i++){
        //c���Եĸ�ʽ�����룬c++����c���﷨
		scanf("%lld/%lld", &p1[i], &p2[i]);
	}
	long int sum_m=0;//�͵ķ��ӣ���ʼ��Ϊ0
	long int sum_d=1;//�͵ķ�ĸ����ʼ��Ϊ1
	int temp;
	for(i=0;i<N;i++){
		temp=sum_d;
		sum_d=lcm(sum_d,p2[i]);
		sum_m=sum_m*(sum_d/temp)+p1[i]*(sum_d/p2[i]);
      	simplify(sum_m,sum_d);//ÿ��һ�������ͻ���һ��
	}

	if(sum_m%sum_d==0) cout<<sum_m/sum_d<<endl;//�������������ĸ
	else {
		if(sum_m<sum_d) cout<<sum_m<<'/'<<sum_d<<endl;//����������
      	//���ڼٷ����������Ҫ�������������
		else{
			cout<<sum_m/sum_d<<" ";//�����������
			sum_m=sum_m-(sum_m/sum_d)*sum_d;
			simplify(sum_m,sum_d);//�������
			cout<<sum_m<<'/'<<sum_d<<endl;
		}
	}
	//�ͷ��ڴ�
	delete[] p1;
	delete[] p2;

	return 0;
}