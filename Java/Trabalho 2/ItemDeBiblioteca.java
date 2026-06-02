public interface ItemDeBiblioteca {

    void emprestarItem() throws MinhaExcecao;

    void devolverItem() throws MinhaExcecao;

    boolean estaEmprestado();
}
