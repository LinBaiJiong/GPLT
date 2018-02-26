#include<iostream>
#include<string> //包含string类的头文件
using namespace std;

int main(){
	string s0="ling";
	string s1="yi";
	string s2="er";
	string s3="san";
	string s4="si";
	string s5="wu";
	string s6="liu";
	string s7="qi";
	string s8="ba";
	string s9="jiu";
	string s[10]={s0,s1,s2,s3,s4,s5,s6,s7,s8,s9};

	string N;
	cin>>N; 
	int i;
	if(N[0]=='-') { //假如输入的首位是负号
		cout<<"fu"<<" ";
		i=1; //对于负数，for循环从第二位开始
	}
	else i=0; //对于非负数，for循环从第一位开始
	for(i;i<N.length()-1;i++){
			cout<<s[N[i]-'0']<<" ";
		}
	cout<<s[N[N.length()-1]-'0'];//最后一个输出后面没有空格
	return 0;
}