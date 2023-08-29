#include <bits/stdc++.h>
using namespace std;
class Human
{
private:
	string name;
	int age;
public:
	 void setData(int val,string word)
	 {
	 	age=val;
	 	name=word;
	 }
	 void getdata()
	 {
	 	cout<<"i am "<<name<<" with age "<< age<< endl;
	 }
};
int main()
{
	Human poojitha;
	poojitha.setData(20,"poojitha");
	poojitha.getdata();
	return 0;
}