#include<iostream>
using namespace std;
class admission
{
	public:
		char name[20],gender[1],state[20];
		int aadhar;
		static int regno;
		static int count;
		void get()
		{
			cout<<"name gender state addhar"<<endl;
			cin>>name>>gender>>state>>aadhar;
			regno++;
			count++;
			
		} 
		void put()
		{
			cout<<name<<" "<<gender<<" "<<state<<" "<<aadhar<<" "<<regno<<endl;
		}
		static void regnocount()
		{
			cout<<"Number of admission taken: "<<count<<endl;
		}
};

int admission::regno=12200000;
int admission::count;
int main()
{
	admission a1,a2;
	a1.get();
	a1.put();
	a2.get();
	a2.put();
	admission::regnocount();
	
}
