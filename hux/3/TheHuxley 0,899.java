import java.io.*;
import java.util.*;

public class HuxleyCode {
  public static void main(String args[]) {
      Scanner ler = new Scanner(System.in);
      double n;
      double maior = 0;
      for (int i = 0; i < 50; i++ ) {
          System.out.println("Digite um numero:");
          n = ler.nextDouble();
          if ( n > maior ) {
              maior = n;
          }
      }
      System.out.println("Maior numero: " + maior);
  }
}