import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;

class Process {
    public static void main(String[] args) throws IOException {
        String fileName = "./pretext.txt";
        String wfileName = "./maptokentext.txt";
        FileReader ff = new FileReader(fileName);
        FileWriter ww = new FileWriter(wfileName);
        BufferedReader bff = new BufferedReader(ff);
        BufferedWriter bww = new BufferedWriter(ww);
        String line = bff.readLine();
        while ((line = bff.readLine()) != null) {
            line = line.trim();
            line = line.substring(0,line.length()-1);
            String newLine = String.format("{\"%s\",wkk::Token::%s},\n",line,line);
            bww.write(newLine);
        }
        bff.close();
        ff.close();
        bww.close();
        ww.close();
    }
}