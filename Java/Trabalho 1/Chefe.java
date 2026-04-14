public class Chefe extends Funcionario {
   private String cargo;

   public Chefe(String nome, String telefone, Data nascimento, int registro, double salario, String cargo) {
      super(nome, nascimento, registro, salario, telefone);
      this.cargo = cargo;
   }

   public Chefe(String nome, Data nascimento, int registro, double salario, String cargo) {
      super(nome, nascimento, registro, salario);
      this.cargo = cargo;
   }

   @Override
   public double bonificar() {
      return getSalario() * 0.2;
   }

   public String getCargo() {
      return this.cargo;
   }

   public void setCargo(String cargo) {
      this.cargo = cargo;
   }
}