/* 
 * Nome: Guilherme Soares Silva
 * Matrícula: 863485
 */
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX_LIMIT 256

// Verifica se a palavra é 'FIM'
bool isEnd(char *s) {
    int size = strlen(s);
    return (size == 3 && s[0] == 'F' && s[1] == 'I' && s[2] == 'M');
}

// Verifica se o caractere é especial
void verifyChar(char* str) {
	int i = 0;
	while(str[i] != '\0') {
		if(str[i] < 0 || str[i] > 127) {
			str[i] = str[str[i]+20];
		}
		i++;
	}
}

// Verifica se a palavra é um palíndromo
bool isPalindrome(char *s) {
	verifyChar(s);
	int tam = strlen(s) - 1;
	for(int i = 0; i < strlen(s); i++) {
		if(s[i] != s[strlen(s - i - 1)]){
			return false;
		}
		if(i >= tam){
			break;
		}
	}
	return true;
}

int main(void) {
	char entry[MAX_LIMIT];
	bool loop = true, stop = false, result;

	while(loop) {
		scanf("%[^\n]", entry);
		// Verificação para interrompimento do loop
        stop = isEnd(entry);
        if (stop) {
            loop = false;
        } else {
            result = isPalindrome(entry);
            // Printa o resultado se a palavra é ou não um palíndromo
            if (result) {
                printf("SIM\n");
            } else {
                printf("NAO\n");
            }
        }
	}
}
