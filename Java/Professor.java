public class Professor extends Funcionario {
   private int horasAula;

   public Professor(String nome, Data nascimento, int registro, double salario, String telefone, int horasAula) {
      super(nome, nascimento, registro, salario, telefone);
      this.horasAula = horasAula;
   }

   public Professor(String nome, Data nascimento, int registro, double salario, int horasAula) {
      super(nome, nascimento, registro, salario);
      this.horasAula = horasAula;
   }

   public int getHorasAula() {
      return this.horasAula;
   }

   public void setHorasAula(int horasAula) {
      this.horasAula = horasAula;
   }

   @Override
   public double bonificar() {
      return getHorasAula() * 10;
   }

   @Override
   public double getSalarioComBonificacao() {
      return getSalario() + bonificar();
   }
}