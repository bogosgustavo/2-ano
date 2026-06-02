import java.util.InputMismatchException;
import java.util.Scanner;

public abstract class Livro {

	// Scanner estático e compartilhado para evitar conflito ao ler System.in múltiplas vezes
	protected static final Scanner scanner = new Scanner(System.in);

	private String nome;
	private String autor;
	private int anoEdicao;
	private int avaliacao;

	public Livro(String nome, String autor, int anoEdicao) {
		this.nome = nome;
		this.autor = autor;
		this.anoEdicao = anoEdicao;
		this.avaliacao = 0;
	}

	// Getters e Setters
	public String getNome() {
		return nome;
	}

	public void setNome(String nome) {
		this.nome = nome;
	}

	public String getAutor() {
		return autor;
	}

	public void setAutor(String autor) {
		this.autor = autor;
	}

	public int getAnoEdicao() {
		return anoEdicao;
	}

	public void setAnoEdicao(int anoEdicao) {
		this.anoEdicao = anoEdicao;
	}

	public int getAvaliacao() {
		return avaliacao;
	}

	public void setAvaliacao(int avaliacao) {
		this.avaliacao = avaliacao;
	}

	/**
	 * Permite ao usuário digitar a avaliação do livro (nota de 0 a 10).
	 * Lança MinhaExcecao se a nota for menor que 0 ou maior que 10.
	 */
	public void avaliar() throws MinhaExcecao {
		try {
			System.out.print("Digite a avaliação para o livro \"" + nome + "\" (0 a 10): ");
			int nota = scanner.nextInt();

			if (nota < 0 || nota > 10) {
				throw new MinhaExcecao(
				    "Avaliação inválida: " + nota + ". A nota deve ser um número inteiro entre 0 e 10."
				);
			}

			this.avaliacao = nota;
			System.out.println("Avaliação registrada com sucesso: " + nota);

		} catch (InputMismatchException e) {
			scanner.nextLine(); // limpa a entrada inválida
			throw new MinhaExcecao(
			    "Entrada inválida. Digite apenas números inteiros entre 0 e 10."
			);
		}
	}

	/**
	 * Método abstrato: informa se o livro é de biblioteca ou de livraria.
	 */
	public abstract void informar();

	@Override
	public String toString() {
		return "Nome: " + nome
		       + "\nAutor: " + autor
		       + "\nAno da Edição: " + anoEdicao
		       + "\nAvaliação: " + avaliacao + "/10";
	}
}