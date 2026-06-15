public class LivroDeBiblioteca extends Livro implements ItemDeBiblioteca {

    private boolean emprestado;

    public LivroDeBiblioteca(String nome, String autor, int ano) {
        super(nome, autor, ano);
        emprestado = false;
    }

    @Override
    public void EmprestarItem() {

        if (emprestado) {
            System.out.println("Livro já está emprestado.");
        } else {
            emprestado = true;
            System.out.println("Livro emprestado.");
        }
    }

    @Override
    public void DevolverItem() {

        if (!emprestado) {
            System.out.println("Livro não está emprestado.");
        } else {
            emprestado = false;
            System.out.println("Livro devolvido.");
        }
    }

    @Override
    public boolean verificarEmprestimo() {
        return emprestado;
    }

    @Override
    public void informar() {
        System.out.println("Livro de biblioteca");
    }

    @Override
    public String toString() {
        return super.toString() +
               "\nEmprestado: " + emprestado;
    }
}