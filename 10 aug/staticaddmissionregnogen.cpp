#include<iostream>
using namespace std;
class admission
{
	public:
		char name[20],gender[6],state[20];
		int aadhar;
		static int regno;
		void get()
		{
			cout<<"name gender state addhar"<<endl;
			cin>>name>>gender>>state>>aadhar;
			regno++;
			
		} 
		void put()
		{
			cout<<name<<" "<<gender<<" "<<state<<" "<<aadhar<<" "<<regno<<endl;
		}
};

int admission::regno=122300001;

int main()
{
	admission a1,a2;
	a1.get();
	a1.put();
	a2.get();
	a2.put();
	
}
