#include <stdio.h>
#include <string.h>
#include "caesar.h"
#include "display.h"
int main(int argc, char* argv[]){
	char userStr[50];
	WelcomeMes();
	fgets(userStr, 50, stdin);
	int userStrLen = strlen(userStr);
	
	Encrypt(userStr, userStrLen);
	DisplayStr(userStr, 0);
	
	Decrypt(userStr, userStrLen);
	DisplayStr(userStr, 1);
	
	return 0;
}
