public class Aluno extends Pessoa {
   private int ra;
   private int disciplinas;
   private boolean matricula;
   public Aluno (String nome, Data nascimento, int ra, int disciplinas, String telefone){
      super(nome,nascimento,telefone);
      this.ra=ra;
      this.disciplinas=disciplinas;
   }
   public Aluno (String nome, Data nascimento, int ra, int disciplinas){
      super(nome,nascimento);
      this.ra=ra;
      this.disciplinas=disciplinas;
   }
   @Override
   public String toString(){
   return "Nome: " + getNome() +
          "\nTelefone: " + getTelefone() +
          "\nNascimento: " + getNascimento() +
          "\nRA: " + this.ra +
          "\nDisciplinas: " + this.disciplinas;
   }
   public void matricular(int disciplinas){
      this.matricula=true;
      this.disciplinas=disciplinas;
   }
   public int getRa(){
      return this.ra;
   }
   public void setRa(int ra){
     this.ra=ra; 
   }

}