#include<iostream>
#include<string> //�ǵð�����string��
using namespace std;

int main(){
	string N; //����������
	cin>>N;
	int a[10]={0}; //ͳ�����ָ���������
	int i=0;
	for(i;i<N.length();i++){ // length():string������ַ������ȵĺ���
		a[N[i]-'0']++; // N[i]-'0'��stringתΪint
	}
    // �������
	for(i=0;i<10;i++){
		if (a[i]) //����a[i]=0��˵��N����û��i�������
			cout<<i<<":"<<a[i]<<endl;
	}
	return 0;
}