#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int N;
	cin>>N;
	int n;
	int i;
	int temp;
	int max=0;
	int left;
	for(n=2;n<sqrt(N)+1;n++){
		if(N%n==0){
			temp=N/n;
			for(i=n+1;i<sqrt(N)+1;i++){
				if(temp%i==0) {temp=temp/i;}
				else {break;}
			}
			if(i-n>max){
				max=i-n;
				left=n;
			}
		}
	}
	if(max==0){
		max=1;
		left=N;
	}
	cout<<max<<endl;
	for(i=0;i<max-1;i++){
		cout<<left+i<<"*";
	}
	cout<<left+max-1<<endl;
	return 0;	
}
