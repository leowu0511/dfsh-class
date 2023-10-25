#include<iostream>
using namespace std;
int main(){
	int date=0;
	cin>>date;
	switch(date){
		case 1:
			printf("星期一");
			break;
		case 2:
			printf("星期二");
			break;
		case 3:
			printf("星期三");
			break;
		case 4:
			printf("星期四");
			break;
		case 5:
			printf("星期五");
			break;
		case 6:
			printf("星期六");
			break;
		case 7:
			printf("星期日");
			break;
		default:
			printf("你打錯了");
	}
}