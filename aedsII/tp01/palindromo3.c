#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void caracterEstranho(char* str){
	int i = 0;
	while(str[i] != '\0'){
		if(str[i] < 0 || str[i] > 127){
			str[i] = str[i-1];
		}
		i++;
	}
}

bool palindromo(char *str){
	caracterEstranho(str);
	printf("%s", str);
	int tam = strlen(str) - 1;
	for(int i = 0; i < strlen(str); i++, tam--){
		if(str[i] != str[tam]){
			return false;
		}

		if(i >= tam){
			break;
		}
	}

	return true;
}

int main(){
	while(true) {
		char str[50];

		scanf("%[^\n]", str);

		if(strcmp(str,"FIM")) {
			break;
		}

		int tam = strlen(str);

		printf("%d", palindromo(str));
	}
	
}
