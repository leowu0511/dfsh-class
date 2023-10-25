#include<iostream>
using namespace std;
int main(){
	float bmi=0;
	cin>>bmi;
	if(bmi<18.5){
		cout<<"過瘦"; 
	}
	else if(bmi>=18.5&&bmi<25){
		cout<<"正常";
	}
	else if(bmi>=25){
		cout<<"過重";
	}
}