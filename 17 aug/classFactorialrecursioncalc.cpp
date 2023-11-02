#include<iostream>
using namespace std;
class Fact{
	public:
		int number;
		long int fact(int n){
			if(n>=1){
				return n*fact(n-1);
			}
			else{
				return 1;
			}
		}
};
int main(){
	Fact f;
	cin>>f.number;
	cout<<"Factorial of a number is: "<<f.fact(f.number);
}
