#include<iostream>
using namespace std;
int main(){
	float bmi=0;
	cin>>bmi;
	if(bmi<18.5){
		cout<<"�L�G"; 
	}
	else if(bmi>=18.5&&bmi<25){
		cout<<"���`";
	}
	else if(bmi>=25){
		cout<<"�L��";
	}
}