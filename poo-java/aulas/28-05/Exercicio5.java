public interface Venda{
   void imprimirPreco();
}
public class Livro implements Venda{
   private double precoDoLivro;
   public Livro(double precoDoLivro){
      this.precoDoLivro=precoDoLivro;
   }
   public void imprimirPreco(){
      System.out.println(this.precoDoLivro);
   }
}