#include<iostream>
#include<iomanip>//包含iomanip头文件才可以使用I/O流类库的操纵符
using namespace std;

int main(){
	int A,B;
	cin>>A>>B;
    int a=A; //用一个中间变量记录A的值
	int i=0;
	int sum=0;
	for(A;A<=B;A++){
		cout<<setw(5)<<A;//设置域宽为5个字符，默认右对齐
        //cout<<left<<setw(5)<<A; 这样为左对齐
		i++;
		sum+=A;
		if(i%5==0) cout<<endl;//每输出五个就换行
	}
	if((B-a+1)%5!=0) cout<<endl;//假如输出的数字个数不是5的倍数才需要换行
	cout<<"Sum = "<<sum<<endl;;
	return 0;
}