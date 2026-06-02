public class Principal {

    public static void main(String[] args) {

        // Vetor de Livro com duas posições
        Livro[] livros = new Livro[2];

        // Posição 0: Livro de Biblioteca
        livros[0] = new LivroDeBiblioteca(
            "Dom Casmurro",
            "Machado de Assis",
            1899,
            "BC-2024-001"
        );

        // Posição 1: Livro de Livraria
        livros[1] = new LivroDeLivraria(
            "O Senhor dos Anéis",
            "J.R.R. Tolkien",
            1954,
            79.90
        );

        System.out.println("========================================");
        System.out.println("       SISTEMA DE GERENCIAMENTO         ");
        System.out.println("========================================\n");

        // --- Operações com o Livro de Livraria (posição 1) ---
        LivroDeLivraria livraria = (LivroDeLivraria) livros[1];

        System.out.println("--- Livro de Livraria ---");
        livraria.informar();

        // Executar avaliar() para o livro de livraria
        try {
            livraria.avaliar();
        } catch (MinhaExcecao e) {
            System.out.println("[ERRO de Avaliação] " + e.getMessage());
        }

        // Executar getPreco() para o livro de livraria
        System.out.printf("Preço do livro: R$ %.2f%n%n", livraria.getPreco());

        // --- Operações com o Livro de Biblioteca (posição 0) ---
        LivroDeBiblioteca biblioteca = (LivroDeBiblioteca) livros[0];

        System.out.println("--- Livro de Biblioteca ---");
        biblioteca.informar();

        // Executar avaliar() para o livro de biblioteca
        try {
            biblioteca.avaliar();
        } catch (MinhaExcecao e) {
            System.out.println("[ERRO de Avaliação] " + e.getMessage());
        }

        // Tentar devolver um livro que não foi emprestado (deve lançar MinhaExcecao)
        System.out.println("\nTentando devolver o livro sem tê-lo emprestado:");
        try {
            biblioteca.devolverItem();
        } catch (MinhaExcecao e) {
            System.out.println("[ERRO de Devolução] " + e.getMessage());
        }

        // Emprestar o livro corretamente e depois devolver
        System.out.println("\nEmprestando o livro normalmente:");
        try {
            biblioteca.emprestarItem();
        } catch (MinhaExcecao e) {
            System.out.println("[ERRO] " + e.getMessage());
        }

        System.out.println("Devolvendo o livro após empréstimo:");
        try {
            biblioteca.devolverItem();
        } catch (MinhaExcecao e) {
            System.out.println("[ERRO] " + e.getMessage());
        }

        // Tentar emprestar o mesmo livro duas vezes (deve lançar MinhaExcecao)
        System.out.println("\nEmprestando novamente e tentando emprestar uma segunda vez:");
        try {
            biblioteca.emprestarItem();
            biblioteca.emprestarItem(); // deve lançar exceção
        } catch (MinhaExcecao e) {
            System.out.println("[ERRO de Empréstimo] " + e.getMessage());
        }

        // --- Impressão final com toString() ---
        System.out.println("\n========================================");
        System.out.println("     INFORMAÇÕES COMPLETAS DOS LIVROS   ");
        System.out.println("========================================\n");

        for (int i = 0; i < livros.length; i++) {
            System.out.println("Livro [" + i + "]:");
            System.out.println(livros[i].toString());
            System.out.println("----------------------------------------\n");
        }
    }
}
