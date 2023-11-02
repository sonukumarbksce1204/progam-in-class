#include<iostream>
using namespace std;
class feb{
	public:
		int fibo(int n){
			if(n==0){
				return 0;
			}
			else if(n==1){
				return 1;
			}
			else{
				return fibo(n-1)+fibo(n-2);
			}
		}
};
int main(){
	feb f;
	int n;
	cout<<"Enter the number of fibo: ";
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<f.fibo(i)<<" ";
	}
}
