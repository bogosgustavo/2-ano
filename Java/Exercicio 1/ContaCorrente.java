public class ContaCorrente{
   private double saldo;
   public String nome;
   
   public void sacar(double valor){
      if(valor>0 && valor<=saldo){
         saldo=saldo-valor;
      }
      else System.out.println("Saque nao realizado");
   }
   
   public void depositar(double valor){
   if(valor>0){
   saldo=saldo+valor;
   }else System.out.println("Deposito?");
   }
   
   public void imprimir(){
   System.out.println("Nome: "+nome);
   System.out.println("Saldo: "+saldo);
   }
}
    