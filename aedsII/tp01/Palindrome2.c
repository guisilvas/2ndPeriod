/* 
 * Nome: Guilherme Soares Silva
 * Matrícula: 863485
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_LIMIT 256

// Verifica se a palavra é igual a 'FIM
bool isEnd(int size, char *s) {
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
bool isPalindrome(int size, char *s) {
    //verifyChar(s);
    int j = size - 1;
    for(int i = 0; i < size; i++, j--) {
        if(s[i] != s[j]) {
            return false;
        }
    }
    return true;
}

int main(void) {
    char entry[MAX_LIMIT];

    bool result, loop = true, stop = false;

    while(loop) {
        scanf("%[^\n]", entry);
        int size = strlen(entry);
        // Verificação para interrompimento do loop
        stop = isEnd(size, entry);
        if(stop) {
            loop = false;
        } else {
            result = isPalindrome(size, entry);
            // Printa o resultado se a palavra é ou não um palíndromo
            if (result) {
                printf("SIM\n");
            } else {
                printf("NAO\n");
            }
        }
    }
}