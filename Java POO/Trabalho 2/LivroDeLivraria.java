public class LivroDeLivraria extends Livro {

    private double preco;

    public LivroDeLivraria(String nome,
                           String autor,
                           int ano,
                           double preco) {

        super(nome, autor, ano);
        this.preco = preco;
    }

    public double getPreco() {
        return preco;
    }

    public void setPreco(double preco) {
        this.preco = preco;
    }

    @Override
    public void informar() {
        System.out.println("Livro de livraria");
    }

    @Override
    public String toString() {
        return super.toString() +
               "\nPreço: R$ " + preco;
    }
}