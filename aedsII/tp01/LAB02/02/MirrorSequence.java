/* 
 * Nome: Guilherme Soares Silva
 * Matrícula: 863485
 * Atividade: JAVA LAB02Q02 - Sequencia Espelho
 * Data: 24/08/2024
 */
public class MirrorSequence {
    // Função que cria uma string com a sequência de números e seu inverso
    public static StringBuilder Mirror(int a, int b) {
        StringBuilder str = new StringBuilder();
        for(int i = a; i <= b; i++) {
            str.append(i);
        }
        System.out.println("\n"+str);
        StringBuilder reversed = new StringBuilder(str.reverse());
        str.append(reversed);
        System.out.println("\n"+str);
        return str;
    }
    public static void main(String[] args) {
        int x, y;
        x = MyIO.readInt();
        y = MyIO.readInt();
        System.out.println(Mirror(x, y));
    }
}
