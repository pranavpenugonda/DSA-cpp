#include<iostream>
using namespace std;

class Complex{
	private:
		float real;
		float img;
		
	public:
		void set_parameters(int real,int img){
			this->real = real;
			this->img = img;
		}	
		
		void SqdistancefromOrigin(){
			float dist;
			
			dist = real*real + img*img;
			cout<<"the dist from origin is "<<dist;
			return;
		}
};

class New_account{
	public:
		int amount;
		int days;
		
		New_account(int initial_amount,int initial_days){  //constructor
			amount = initial_amount;
			days = initial_days;
			cout<<"The constructor is called now"<<endl;
		}
		
		void display_details(){
			cout<<"amount is "<<amount<<endl;
			cout<<"days is "<<days<<endl;
		}
		
		~New_account(){  //destructor
			cout<<"Now use of obj is complete, obj is being destroyed"<<endl;
		}
};

class motorbike{
	public:
		int no_of_wheels;
		int lights;
};

int main(){
//	Complex a,b;
//	
//	a.set_parameters(3,4);
//	a.SqdistancefromOrigin();
	
	New_account a(0,0);
	a.display_details();
	
	New_account b(100,5);
	b.display_details();
	cout<<"Here all functioning takes place"<<endl;
	
	return 0;
}
