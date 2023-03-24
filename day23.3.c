#include<stdio.h>
#include<string.h>

int main (){
	
	char email[50];
	char password[20];
	
	char correctemail[] = "dhairyapatel20104@gmail.com";
	char correctpassword[] = "Paresh6570";
	
	printf("Enter email : ");
	scanf("%s",email);
	
	printf("Enter password : ");
	scanf("%s",password);
	
	if(strcmp(email , correctemail) == 0 && strcmp(email , correctpassword) == 0){
		printf("Login is successful");
	}
	else{
		printf("Oops !! Please try again...");
	}
	
	return 0 ;
}
