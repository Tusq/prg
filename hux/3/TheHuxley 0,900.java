import java.io.*;
import java.util.*;

public class HuxleyCode {
  public static void main(String args[]) {
      Scanner ler = new Scanner(System.in);
      double n;
      double total = 0;
      for (int i = 0; i < 100; i++ ) {
          System.out.println("Digite um numero:");
          n = ler.nextDouble();
          total += n;
      }
      System.out.println("Media dos numeros:" + " " + total/100);
  }
}