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
	protected:
		int no_of_tyres;
		string name;
		int capacity;
		int milege;
		string school_name;
		int no_of_holidays;
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
		void set_milage(int milege){
			this->milege = milege;
		}
		void cal_milage(){
			cout<<"The milage is "<<milege;
		}	
};

class Coordinate{
	public:
		float a;
		float b;
		
	public:
		void sqdistancefromcoordinate(float a){
			float dist;
			dist = (this->a-a)*(this->a-a) + (this->b-b)*(this->b-b);
			
			cout<<dist;
		}
		void sqdistancefromcoordinate(float a, float b){
			float dist;
			dist = (this->a-a)*(this->a-a) + (this->b-b)*(this->b-b);
			
			cout<<dist;
		}
			void sqdistancefromcoordinate(float a, float b,float c){
			
			
			cout<<"third func is used";
		}	
};

int main(){
//	Car a;
//	a.set_milage(50);
//	a.cal_milage();
	
	Coordinate x;
	x.a = 3;
	x.b = 4;
	
	x.sqdistancefromcoordinate(0);
	cout<<endl;
	x.sqdistancefromcoordinate(0,0,0);
	return 0;
}
