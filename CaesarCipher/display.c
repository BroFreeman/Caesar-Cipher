#include <stdio.h>
#include "display.h"
void WelcomeMes(){
	printf("\nWelcome to Caesar Cipher\n");
	printf("Enter your text(only letters) and this program\n");
	printf("will encrypt your message\n");
	printf("Enter your text here: ");
}
void DisplayStr(char str[], int num){
	if(num == 0){
		printf("Encrypted Message: %s", str);
	}else if(num == 1){
		printf("Decrypted Message: %s", str);
	}else{
		printf("Error Has Occourred\n");
	}
}
