#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter value of a,b,c:");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a>b){
		if(a>c){
			printf("a is greatest");
			
		}
		else{
			printf("c is greatest");
		}
	}
	else{
		if(b>c){
			printf("b is greatest");
		}
		else{
			printf("c is the greatest");
		}
	}
	
	if(a<b){
		if(a<c){
			printf("\na is smallest");
			
		}
		else{
			printf("\ncis smallest");
		}
	}
	else{
		if(b<c){
			printf("\nbis smallest");
		}
		else{
			printf("\ncis the smalest");
		}
	}
}