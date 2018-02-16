#include<iostream>
using namespace std;

int main(){
	int i;
	int j;
	int k;

	int N;
	cin>>N;
	int *seat1=new int[N];
	int *seat2=new int[N];
	char **a=new char*[N];
	for(i=0;i<N;i++){
		a[i]=new char[14];
		cin>>a[i]>>seat1[i]>>seat2[i];
	}
	int M;
	cin>>M;
	int *b=new int[M];
	for(i=0;i<M;i++){
		cin>>b[i];
	}

	for(i=0;i<M;i++){
		for(j=0;j<N;j++){
			if(b[i]==seat1[j]){
				for(k=0;k<14;k++){
					cout<<a[j][k];
				}
				cout<<" "<<seat2[j]<<endl;
				break;
			}
		}
	}
	delete[] seat1;
	delete[] seat2;
	delete[] b;
	for(i=0;i<N;i++)  
        delete[] a[i];  
    delete[] a;  
	return 0;
}