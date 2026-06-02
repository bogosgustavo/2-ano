public abstract class Veiculo{
   private String marca;
   public Veiculo(String marca){
      this.marca=marca;
   }
   public abstract void imprimirTipoDeVeiculo();
}
public class Carro extends Veiculo{
   private int numeroDePortas;
   public Carro(String marca, int numeroDePortas){
      super(marca);
      this.numeroDePortas = numeroDePortas;
   }
   public void imrpimirTipodoVeiculo(){
      System.out.println("Eu sou um carro");
   }
}

public class Motocicleta{
   public Motocicleta(String marca){
      super(marca);
   }
   public void imprimirTipoDoVeiculo(){
      System.out.println("Eu sou uma moto");
   }
}

public class Principal{
   public static void main(String args[]){
      Veiculo vetor[]= new Veiculo[2];
      vetor[0]=new Carro("HB20",4);
      vetor[1]=new Motocicleta("Honda");
   }
}