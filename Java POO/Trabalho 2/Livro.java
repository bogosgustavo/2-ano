import javax.swing.JOptionPane;

public abstract class Livro {

    private String nome;
    private String autor;
    private int ano;
    private int nota;

    public Livro(String nome, String autor, int ano) {
        this.nome = nome;
        this.autor = autor;
        this.ano = ano;
        this.nota = nota;
    }

    public String getNome() {
        return this.nome;
    }

    public String getAutor() {
        return this.autor;
    }

    public int getAno() {
        return this.ano;
    }

    public int getNota() {
        return this.nota;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public void setAutor(String autor) {
        this.autor = autor;
    }

    public void setAno(int ano) {
        this.ano = ano;
    }

    public void setNota(int nota) {
        this.nota = nota;
        
    }

public void avaliar() {

    while (true) {

        try {

            int notaDigitada = Integer.parseInt(
                JOptionPane.showInputDialog(
                    null,
                    "Digite uma nota de 0 a 10 para:\n" + nome
                )
            );

            if (notaDigitada < 0 || notaDigitada > 10) {
                throw new MinhaExcecao(
                    "A nota deve estar entre 0 e 10."
                );
            }

            this.nota = notaDigitada;
            break;

        } catch (MinhaExcecao e) {

            JOptionPane.showMessageDialog(
                null,
                e.getMessage()
            );

        } catch (NumberFormatException e) {

            JOptionPane.showMessageDialog(
                null,
                "Digite apenas números."
            );
        }
    }
}
    public String toString() {
        return "Nome: " + nome +
               "\nAutor: " + autor +
               "\nAno: " + ano +
               "\nNota: " + nota;
    }

    public abstract void informar();
}