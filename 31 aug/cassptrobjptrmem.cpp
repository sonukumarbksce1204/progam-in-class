#include<iostream>
using namespace std;
class movie{
	public:
		int year;
		string title,award,hero,heroine,language;
		void get(){
			cin>>title>>year>>award>>hero>>heroine>>language;
		}
		void put(){
			cout<<title<<" "<<year<<" "<<award<<" "<<hero<<" "<<heroine<<" "<<language;
			
		}
};
int main(){
	movie m;
	movie *p;
	p=&m;	//pointer to object
	int movie::*ptr=&movie::year;	//pointer to member
//	m.*ptr=2004;
//	cout<<"Year of movie"<<m.*ptr<<endl;
	p->get();
	p->put();
	
}
