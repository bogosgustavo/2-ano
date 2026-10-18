public class Principal
{
 public static void main(String args[])
 {
   ContaCorrente conta1, conta2;
   conta1=new ContaCorrente();
   conta2=new ContaCorrente();
   
   conta1.nome="Marcio";
   conta2.nome="Fulano";
   
   conta1.depositar(100);
   conta2.depositar(200);
   
   conta1.imprimir();
   conta2.imprimir();
  }

}
