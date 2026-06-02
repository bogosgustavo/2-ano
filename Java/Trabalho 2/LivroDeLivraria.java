public class LivroDeLivraria extends Livro {

    private double preco;

    public LivroDeLivraria(String nome, String autor, int anoEdicao, double preco) {
        super(nome, autor, anoEdicao);
        this.preco = preco;
    }

    // Getters e Setters
    public double getPreco() {
        return preco;
    }

    public void setPreco(double preco) {
        this.preco = preco;
    }

    // Implementação do método abstrato informar()
    @Override
    public void informar() {
        System.out.println("Este livro é de LIVRARIA.");
    }

    @Override
    public String toString() {
        return super.toString()
            + "\nTipo: Livro de Livraria"
            + String.format("\nPreço: R$ %.2f", preco);
    }
}
