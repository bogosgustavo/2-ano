import javax.swing.JOptionPane;

public class Principal {
   public static void main(String args[]) {

      int opcao = JOptionPane.showConfirmDialog(
         null,
         "Voce quer calcular o dobro de um numero?"
      );

      if(opcao != 0) {
         JOptionPane.showMessageDialog(
            null,
            "Programa encerrado!"
         );
         return;
      }

      String num = JOptionPane.showInputDialog(
         null,
         "Digite um inteiro"
      );

      if(num == null)
         return;

      int numero = Integer.parseInt(num);

      JOptionPane.showMessageDialog(
         null,
         "O dobro do valor lido eh: " + (2 * numero)
      );
   }
}
