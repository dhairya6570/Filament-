#include<stdio.h>
#include<string.h>

int main (){
	
	char name [50] ;
	int i , j , len , count=0 ;
	
	gets(name);
	
	len = strlen(name);
	
	for(i=0 ; i<=256 ; i++){
		
		count = 0 ;
		
		for(j=0 ; j<len ; j++){
			
			if(i==name[j]){
				
				count++;
//				printf("%c => %d\n",name[j] , count);
			}
			
		}
//		printf("%c => %d\n",name[j] , count);
	}
	printf("%c => %d\n",name[j] , count);
	return 0 ;
}
