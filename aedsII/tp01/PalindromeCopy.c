/* 
 * Nome: Guilherme Soares Silva
 * Matrícula: 863485
 * Disciplina: Algoritmos e Estruturas de Dados II
 * Atividade: C TP01Q02 - Palindromo
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define MAX_LIMIT 256

bool isPalindrome(char *);
void containsSpecialChars(char *);

int main(void) {
    char entry[MAX_LIMIT];
    bool loop = true;

    // Loop para a leitura das palavras
    while(loop) {
        fgets(entry, MAX_LIMIT, stdin);
        // Troca o \n(padrão do fgets) por \0(fim de uma string)
        entry[strcspn(entry, "\n")] = '\0';
        // Verificação de caracteres speciais
        containsSpecialChars(entry);
        // Verificação para interrompimento do loop
        if(!strcmp(entry, "FIM")) {
            loop = false;
        }
        printf("%s\n",isPalindrome(entry) ? "SIM" : "NAO");
    }

    return 0;
}

// Função para verificar se algum caractere especial está presente na string, se houver o troca por um caractere de 1 byte
void containsSpecialChars(char *s) {
    int i = 0;
	while(s[i] != '\0') {
		if(s[i] < 0 || s[i] > 127) {
			s[i] = s[s[i]+20];
		}
		i++;
	}
}

// Função para verificar se a palavra é um palíndromo
bool isPalindrome(char *s) {
    int i = 0, j = strlen(s) - 1;
    while(i < j) {
        if(s[i++] != s[j--]) {
            return false;
        }
    }
    return true;
}