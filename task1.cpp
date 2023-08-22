//22A91A05B4
#include<iostream>
using namespace std;
class Student{
	private:
	string name,collage,branch;
	float marks;
	public:
		int roll;
	Student(string n,string c,string b,float m,int r){
		this->name=n;
		this->collage=c;
		this->branch=b;
		this->marks=m;
		this->roll=r;
	}
	void display()
	{
		cout<<name<<" "<<collage<<" "<<branch<<" "<<marks<<" "<<roll;
	}
	void modification()
	{
		collage="aditya";
		branch="aec";
	}
};
int main()
{
	Student s1("xyz","Aditya","CSE",90.9,12);
     s1.modification();
	s1.display();
	
	return 0;
}
