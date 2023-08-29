#include<bits/stdc++.h>
using namespace std;
// I defined a name Human as class and this class has many atributes like name as object 
// and defines it in two ways 1.dirrectly and using . to call functions and members 
// and creating a pointer and acessing all the members and functions using->

class Human{
public:
	string name;
void display()
{
	cout<<name<<endl;
}
};
int main()
{
	Human poojitha;
	poojitha.name="Poojitha";
	poojitha.display();//calling by dot(.)
	Human *anu = new Human();//creating using poimter
	anu->name="Anu";//calling memebers using arrow(->)
	anu->display();
	Human *preethi = &poojitha;
	preethi->display();
	return 0;
}