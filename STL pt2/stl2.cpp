#include<iostream>
#include<stack>
#include<queue>
using namespace std;

int main(){
//	stack<int> a;
//	a.push(5);
//	a.push(6);
//	a.push(7);
//	
//	cout<<a.top();
//	cout<<endl;
//	
//	a.pop();
//	
//	cout<<a.top();

	queue<int> a;
	a.push(5);
	a.push(6);
	a.push(7);
	
	cout<<a.front();
    
    cout<<endl;
	
	a.pop();
	
	cout<<a.front();


	return 0;
}
