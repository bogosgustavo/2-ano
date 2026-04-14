public class Funcionario extends Pessoa {
   private int registro;
   private double salario;
   public Funcionario (String nome, String telefone, Data nascimento, int registro, double salario){
      super(nome,nascimento,telefone);
      this.registro=registro;
      this.salario=salario;
   }
   public Funcionario (String nome, Data nascimento, int registro, double salario){
      super(nome,nascimento);
      this.registro=registro;
      this.salario=salario;
   }
   public String toString(){
      return super.toString()+
         "\nRegistro: "+this.registro+
         "\n Salario: "+this.salario;
   }
   public int getRegistro(){
      return this.registro;
   }
   public void setRegistro(int registro){
     this.registro=registro; 
   }
   public final double getSalario(){
      return this.salario;
   }
   public void setSalario(double salario){
      if(salario>=0){
          this.salario=salario; 
      }
   }
   public double bonificar(){
      return getSalario()*0.1;
   }
   public double getSalarioComBonificacao(){
      return getSalario()+bonificar();
   }
}