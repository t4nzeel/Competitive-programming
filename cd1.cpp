#include<iostream>
using namespace std;
bool check_weight(int x){
	if(x>2){
		if(x%2==0) return true;
		else return false;
	}
	return false;
}
int main(){
	int w;
	cin>>w;
	if(check_weight(w)){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
}