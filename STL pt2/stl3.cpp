#include<iostream>
#include<map>
using namespace std;
int main(){
	map<string,int> hash;
	
	hash["rohit"] = 1;
	hash["programming"] = 2;
	hash["reddy"] = 3;
	
	cout<<"The value of rohit in hash table is "<<hash["rohit"]<<endl;
	
	for(auto j=hash.begin();j!=hash.end();j++){
		cout<<"key "<<j->first<<" value "<<j->second<<endl;
	}
	return 0;
}
