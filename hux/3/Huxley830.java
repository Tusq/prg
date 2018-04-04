import java.io.*;
import java.util.*;

public class HuxleyCode {
  public static void main( String args []) {
      Scanner ler = new Scanner(System.in);
      double altura, pesoideal;
      System.out.println("Informe sua altura:");
      altura = ler.nextDouble();
      pesoideal = (72.7*altura)-58;
      System.out.println("Peso ideal: "+ pesoideal);
      
  }
}