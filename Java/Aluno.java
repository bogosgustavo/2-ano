public class Aluno extends Pessoa {
   private int ra;
   public Aluno (String nome, Data nascimento, int ra, String telefone){
      super(nome,nascimento,telefone);
      this.ra=ra;
   }
   public Aluno (String nome, Data nascimento, int ra){
      super(nome,nascimento);
      this.ra=ra;
   }
   @Override
   public String toString(){
   return "Nome: " + getNome() +
          "\nTelefone: " + getTelefone() +
          "\nNascimento: " + getNascimento() +
          "\nRA: " + this.ra;
   }

   public int getRa(){
      return this.ra;
   }
   public void setRa(int ra){
     this.ra=ra; 
   }

}