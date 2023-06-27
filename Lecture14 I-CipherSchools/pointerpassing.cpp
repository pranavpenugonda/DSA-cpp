#include<iostream>
using namespace std;

void swap(int *x, int *y){
	int c;  // x,y are pointers to a,b --> they store the address of a and b
	
	c=*x;
	*x=*y;
	*y=c;
	
	cout<<"The swapping is complete "<<endl;
	
}


int main(){
	int a,b;
	
	a=3;
	b=4;
	
	swap(&a,&b);  //passing address of a and b to function
	cout<<"a and b values after swapping: "<<a<<" "<<b;
	return 0;
	
}
