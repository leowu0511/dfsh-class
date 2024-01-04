#include<bits/stdc++.h>
using namespace std;
int main(){
	//三角形
	int list[3];
	for(int i=0;i<3;i++){
		scanf("%d",&list[i]);
	}
	
	sort(list,list+3);
	
	//泡沫
	/* 
	for(int i=0;i<3;i++){
		for(int j=0;j<3-i;j++){
			if(list[j]>list[j+1]){
				int temp=0;
				temp = list[j+1];
				list[j+1] = list[j];
				list[j] = temp; 
			}
		}
	}
	*/
	
	//輸出
	for(int i=0;i<3;i++){
		printf("%d ",list[i]);
	}
	printf("\n");
	
	//三邊(a<b<c) 
	int a = list[0];
	int b = list[1];
	int c = list[2];
	
	if(a+b<=c){
		printf("No");
	}
	else if(a*a+b*b<c*c){
		printf("Obtuse");
	}
	else if(a*a+b*b==c*c){
		printf("Right");
	}
	else if(a*a+b*b>c*c){
		printf("Acute");
	}
}
