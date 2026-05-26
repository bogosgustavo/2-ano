public class ContaCorrente{
   private double saldo;
   public String nome;
   public int numero;
   
   public void ContaCorrente(String nome, int numero){
      this.nome=nome;
      this.numero=numero;
   }
   
   public void sacar(double valor) throws MinhaExcecao{
      if(valor>0)
         this.saldo=this.saldo-valor;
      if(valor<=0){
         throw new MinhaExcecao("Digite um valor maior que zero");
      }
      if(valor>this.saldo){
         throw new MinhaExcecao("Digite um valor maior que zero");
      }
   }
   
   public void depositar(double valor){
      if(valor<=0)
         throw new MinhaExcecao("Digite um valor maior que zero");
      saldo=saldo+valor;
   }
   
   public void imprimir(){
   System.out.println("Nome: "+nome);
   System.out.println("Numero: "+numero);
   System.out.println("Saldo: "+saldo);
   }
}

    