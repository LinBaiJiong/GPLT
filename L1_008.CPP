#include<iostream>
#include<iomanip>//����iomanipͷ�ļ��ſ���ʹ��I/O�����Ĳ��ݷ�
using namespace std;

int main(){
	int A,B;
	cin>>A>>B;
    int a=A; //��һ���м������¼A��ֵ
	int i=0;
	int sum=0;
	for(A;A<=B;A++){
		cout<<setw(5)<<A;//�������Ϊ5���ַ���Ĭ���Ҷ���
        //cout<<left<<setw(5)<<A; ����Ϊ�����
		i++;
		sum+=A;
		if(i%5==0) cout<<endl;//ÿ�������ͻ���
	}
	if((B-a+1)%5!=0) cout<<endl;//������������ָ�������5�ı�������Ҫ����
	cout<<"Sum = "<<sum<<endl;;
	return 0;
}