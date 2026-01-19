#include <ctype.h>
#include "caesar.h"
void Encrypt(char *str, int len){
	int temp = 0;
	for(int i = 0; i < len; i++){
		if(isalpha(str[i])){
			if(islower(str[i])){
				temp = (int)str[i];
				temp += 4;
				temp %= 122;
				if(temp == 0){
					temp = 122;
				}else if(temp < 97){
					temp += 96;
				}
			}else{
				temp = (int)str[i];
				temp += 4;
				temp %= 90;
				if(temp == 0){
					temp = 90;
				}else if(temp < 65){
					temp += 64;
				}
			}
			str[i] = (char)temp;
		}
	}
}
void Decrypt(char *str, int len){
	int temp = 0;
	for(int i = 0; i < len; i++){
		if(isalpha(str[i])){
			if(islower(str[i])){
				temp = (int)str[i];
				temp -= 4;
				temp %= 122;
				if(temp == 0){
					temp = 122;
				}else if(temp < 97){
					temp += 26;
				}
			}else{
				temp = (int)str[i];
				temp -= 4;
				temp %= 90;
				if(temp == 0){
					temp = 90;
				}else if(temp < 65){
					temp += 26;
				}
			}
			str[i] = (char)temp;
		}
	}
}
