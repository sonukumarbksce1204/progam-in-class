#include<iostream>
using namespace std;
class Employees
{
	public:
		char name[20],marsts[20];
		int exp,age;
		void get()
		{
			cout<<"Name experience  age  statusofmarrage"<<endl;
			cin	>>name>>exp>>age>>marsts;
		}
		void put();
};
inline void Employees::put()
{
	if(exp>5){
		cout<<"Name experience  age  statusofmarrage"<<endl;
		cout<<name<<" "<<exp<<" "<<age<<" "<<marsts<<endl;
	}
}
int main()
{
	Employees e;
	e.get();
	e.put();
}
