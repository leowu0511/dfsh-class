#include<bits/stdc++.h>
using namespace std;
int main(){
	string number="";
	cin>>number;
	int div=number.size();
	
	int odd=0;
	int even=0;
	for(int i=0;i<number.size();i++){
		if(i%2 == 0){
			int temp = number[i] - '0';
			odd += temp;
		}
		else{
			int temp = number[i] - '0';
			even += temp;
		}		
	}
	int answer=0;
	answer = odd - even;
	printf("%d",abs(answer));
}

