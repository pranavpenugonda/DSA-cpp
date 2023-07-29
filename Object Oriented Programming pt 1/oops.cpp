#include<iostream>
using namespace std;
class Student{
	private:
		int marks;
		int attendance;
		string name;
		
	public:
		void displaymarks(){
			cout<<marks;
		}	
};

class Vehicle{ //base class
	public:
		int no_of_tyres;
		string name;
		int capacity;
		int milege;
		string school_name;
		int no_of_holidays;
	public:
		void cal_milage(){
			cout<<"The milage is "<<milege;
		}
};

class Bus: public Vehicle{
	private:
		string school_name;
		int no_of_holidays;
	public:
		void printnameofturck(){
			cout<<"The name of the truck is "<<name;
		}	
};

class Car: public Vehicle{
	private:
		int no_of_airbags;
		int ac_consumption;
	public:
		void cal_milage(){
			cout<<"The milage is "<<milege;
		}	
};
int main(){
	Car a;
	a.milege=50;
	a.cal_milage();
	return 0;
}
