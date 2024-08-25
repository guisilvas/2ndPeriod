/* 
 * Nome: Guilherme Soares Silva
 * Matrícula: 863485
 * Disciplina: Algoritmos e Estruturas de Dados II
 * Atividade: JAVA TP01Q01 - Palindromo
 * Data: 21/08/2024
 */
import java.util.Scanner;

class Palindrome {
    // Verifica se a palavra é 'FIM'
    public static boolean isEnd(String s) {
        return (s.length() == 3 && s.charAt(0) == 'F' && s.charAt(1) == 'I' && s.charAt(2) == 'M');
    }

    // Verifica se a palavra é um palíndromo
    public static boolean isPalindrome(String s) {
        for (int i = 0; i < s.length() / 2; i++) {
            if (s.charAt(i) != s.charAt(s.length() - i - 1)) {
                return false;
            }
        }
        return true;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String entry;
        boolean result, loop = true;

        // Loop para a leitura e print das palavras
        while (loop) {
            entry = sc.nextLine();
            if (isEnd(entry)) {
                loop = false;
            } else {
                result = isPalindrome(entry);
                if (result) {
                    MyIO.println("SIM");
                } else {
                    MyIO.println("NAO");
                }
            }
        }
        sc.close();
    }
}