#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<int> a;
	cout<<"size is "<<a.size()<<endl;
	
	for(int i=0;i<5;i++){
		a.push_back(i+1);
	}
	
	cout<<"size is "<<a.size()<<endl;
    a.pop_back();
    cout<<"size is "<<a.size()<<endl;
    
    cout<<"first element "<<a[0];
    


	return 0;
}
