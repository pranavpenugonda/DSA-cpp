#include<iostream>
using namespace std;

int main(){
	string name;  //string is a datatype
	cin>>name;
	for(int i=0;i<name.length();i++){
		cout<<name[i]<<endl;
	}
	return 0;
}
