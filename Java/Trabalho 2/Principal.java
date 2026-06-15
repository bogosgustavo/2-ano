public class Principal {

    public static void main(String[] args) {

        Livro[] livros = new Livro[2];

        livros[0] = new LivroDeBiblioteca(
            "Jogador Número Um",
            "Ernest Cline",
            2011
        );

        livros[1] = new LivroDeLivraria(
            "Os Futebolíssimos 3",
            "Roberto Santiago",
            2018,
            63.99
        );

        try {
            
            livros[0].avaliar();

            ((LivroDeBiblioteca) livros[0]).DevolverItem();
            
            livros[1].avaliar();

            System.out.println("Preço: R$ " +((LivroDeLivraria) livros[1]).getPreco());

        } catch (MinhaExcecao e) {

            System.out.println(e.getMessage());

        }

        System.out.println("\n=== LIVRO DE BIBLIOTECA ===");
        System.out.println(livros[0]);

        System.out.println("\n=== LIVRO DE LIVRARIA ===");
        System.out.println(livros[1]);
    }
}