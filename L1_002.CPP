#include<iostream>
using namespace std;

int main() {
	int N;  //�����������
	int n=1;
	char b; //����ķ���
	// (1)��һ�ְ�b�����ַ�
	// (2)�ڶ���b[1]����һ���ַ����飬��ô�����cout<<b;��Ϊcout<<b[0];
	int i;
	cin>>N>>b;
	// ����n����2*(n-1)+1���ǵ�һ�еķ�������
	// 2*n*n+4*n+1=1+2*(3+5+...+(2*n+1))
	for(n;2*n*n+4*n+1<=N;n++){
	}
	int c=n;
	// ����ϰ벿��--��������
	for(n;n>0;n--){
		for(i=1;i<=(c-n);i++){
			cout<<" ";
		}
		for(i=1;i<=(2*n-1);i++){
			cout<<b;
		}
		cout<<endl;
	}
	// ����°벿��--û�ж����������
	for(n;2*(n+1)+1<=2*(c-1)+1;n++){
		for(i=1;i<=(c-n-2);i++){
			cout<<" ";
		}
		for(i=1;i<=2*(n+1)+1;i++){
			cout<<b;
		}
		cout<<endl;
	}
	// ���ʣ��û�õ��ķ�����
	cout<<(N-2*(c-1)*(c-1)-4*(c-1)-1)<<endl;
	return 0;
}