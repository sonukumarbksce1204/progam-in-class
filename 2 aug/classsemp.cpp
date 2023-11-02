#include<iostream>
using namespace std;
class employee{
	public:
		char name[10];
		int eid;
		double salary;
		int exp;
		void get(){
			cin>>name>>salary>>exp;
		}
		void put();
		
}e;
void employee::put(){
			cout<<name<<" "<<eid<<" "<<salary<<" "<<exp;
		}

int main(){
	cin>>e.eid;
	e.get();
	e.put();
}

