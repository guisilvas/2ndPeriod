#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX_LIMIT 256

// Verifica se a palavra é 'FIM'
bool isEnd(char *s) {
    int size = strlen(s);
    return (size == 3 && s[0] == 'F' && s[1] == 'I' && s[2] == 'M');
}

// Verifica se a palavra é um palíndromo
bool isPalindrome(char *s) {
    int size = strlen(s);
    for(int i = 0; i < size / 2; i++){
        if (s[i] != s[size - i - 1]) {
            return false;
        }
    }
    return true;
}

int main(void) {
    char entry[MAX_LIMIT];
    bool result, stop = false, loop = true;

    // Loop para a leitura das palavras
    while (loop) {
        scanf("%255s",entry);
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

    return 0;
}