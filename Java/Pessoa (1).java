public class Pessoa{
   private String nome;
   private String telefone;
   private Data nascimento;
   public Pessoa (String nome, Data nascimento, String telefone){
      this.nome=nome;
      this.nascimento=nascimento;
      this.telefone=telefone;
   }
   public Pessoa (String nome, Data nascimento){
      this.nome=nome;
      this.nascimento=nascimento;
   }
   public String getNome(){
      return this.nome;
   }
   public String getTelefone(){
      return this.telefone;
   }
   public Data getNascimento(){
   return this.nascimento;
   }
   public void setNome(String nome){
     this.nome=nome; 
   }
   public void setTelefone(String telefone){
     this.telefone = telefone; 
   }
   @Override
   public String toString(){
      return "Nome: " + nome +
          "\nTelefone: " + telefone +
          "\nNascimento: " + nascimento;
}
}