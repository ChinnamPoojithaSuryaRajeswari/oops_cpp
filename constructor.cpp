//constructor is a method that is automatically called when an object of a particular class is initialised
//tpes are 1.parametrised,2.non-parametrised and 3.coppy
#include <bits/stdc++.h>
using namespace std;
class Human
{
private:
	string name;
	int age;
public:
 Human(string word,int val)//2 parameters passed
 {
 	name=word;
 	age=val;
 }
 void display()
 {
 	cout<<name<<" "<<age<<endl;
 }
 Human()//no parameter is passed both parameters a default
 {
 	name = "no name";
 	age = 0;
 }
 Human(int val)//single parameter is passed and 1 parameter is set default
 {
 	name="no name";
 	age=val;
 }
 Human(string word)//single parameter is passed and i is default
 {
 	name=word;
 	age=0;
 }
 Human(Human &poojitha)//coppies the members of the parameter passed
 {
 	name = poojitha.name;
 	age = poojitha.age;
 }
};
int main()
{
	Human poojitha("poojitha",20);//parametrised constructor
	poojitha.display();
	Human anu;//non parametrised constructor
	anu.display();
	Human me("anu");
	me.display();
	Human u(16);
	u.display();
	Human its(poojitha);//copy constructor
	its.display();
}