public class LivroDeBiblioteca extends Livro implements ItemDeBiblioteca {

    private boolean emprestado;
    private String codigoTombo;

    public LivroDeBiblioteca(String nome, String autor, int anoEdicao, String codigoTombo) {
        super(nome, autor, anoEdicao);
        this.codigoTombo = codigoTombo;
        this.emprestado = false;
    }

    // Getters e Setters específicos
    public String getCodigoTombo() {
        return codigoTombo;
    }

    public void setCodigoTombo(String codigoTombo) {
        this.codigoTombo = codigoTombo;
    }

    // Implementação da interface ItemDeBiblioteca

    @Override
    public void emprestarItem() throws MinhaExcecao {
        if (emprestado) {
            throw new MinhaExcecao(
                "Não é possível emprestar o livro \"" + getNome() + "\": ele já está emprestado."
            );
        }
        emprestado = true;
        System.out.println("Livro \"" + getNome() + "\" emprestado com sucesso.");
    }

    @Override
    public void devolverItem() throws MinhaExcecao {
        if (!emprestado) {
            throw new MinhaExcecao(
                "Não é possível devolver o livro \"" + getNome() + "\": ele não está emprestado."
            );
        }
        emprestado = false;
        System.out.println("Livro \"" + getNome() + "\" devolvido com sucesso.");
    }

    @Override
    public boolean estaEmprestado() {
        return emprestado;
    }

    // Implementação do método abstrato informar()
    @Override
    public void informar() {
        System.out.println("Este livro é de BIBLIOTECA.");
    }

    @Override
    public String toString() {
        return super.toString()
            + "\nTipo: Livro de Biblioteca"
            + "\nCódigo de Tombo: " + codigoTombo
            + "\nStatus: " + (emprestado ? "Emprestado" : "Disponível");
    }
}
