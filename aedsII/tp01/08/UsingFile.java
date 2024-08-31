/* 
 * Nome: Guilherme Soares Silva
 * Matrícula: 863485
 * Atividade: JAVA TP01Q08 - Arquivo em Java
 * Data: 25/08/2024
 */
import java.io.File;
import java.io.IOException;
import java.io.RandomAccessFile;
import java.text.DecimalFormat;

public class UsingFile {
    // Writing in the file
    public static void writeFile(float num, File file) {
        try (RandomAccessFile writer = new RandomAccessFile(file, "rw")) {
            writer.seek(writer.length());
            writer.writeFloat(num);
        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    // Reading the file in reverse order
    public static void readFile(File file) {
        try (RandomAccessFile reader = new RandomAccessFile(file, "r")) {
            long fileLength = reader.length();
            int floatSize = Float.BYTES;
            long position = fileLength - floatSize;
            reader.seek(position);
            while (position >= 0) {
                float num = reader.readFloat();
                MyIO.println(num);
                position -= floatSize;
                if (position >= 0) {
                    reader.seek(position);
                }
            }
            reader.close();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }           

    public static void main(String[] args) {
        int n = MyIO.readInt();
        float num;
        File file = new File("float.txt");
        try {
            if (!file.exists()) {
                file.createNewFile();
            }
        } catch (IOException e) {
            e.printStackTrace();
        }
        
        for (int i = 0; i < n; i++) {
            num = MyIO.readFloat(); 
            writeFile(num, file);
        }
        readFile(file);
    }
}
