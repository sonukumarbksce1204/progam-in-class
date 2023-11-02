#include<iostream>
using namespace std;
class employee{
	private:
		char name[20];
		int sal,id,exp;
		public:
			void get();
			void put(){
				cout <<name<<" "<<sal<<" "<<id<<" "<<exp<<endl;
			}
};
void employee::	get(){
	cin>>name>>sal>>id>>exp;
	
}
int main(){
	employee e[5];
	for(int i=0;i<5;i++){
		e[i].get();	
	}
	for(int i=0;i<5;i++){
		e[i].put();	
	}
	
}
