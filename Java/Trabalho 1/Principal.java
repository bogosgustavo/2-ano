public class Principal {
   public static void main(String args[]) {

      Data data[] = new Data[12];

      // alunos
      data[0] = new Data(28, 11, 2007);
      data[1] = new Data(12, 11, 2007);
      data[2] = new Data(12, 11, 2007);

      // funcionarios
      data[3] = new Data(23, 6, 2005);
      data[4] = new Data(24, 7, 2006);
      data[5] = new Data(25, 8, 2007);

      // chefes
      data[6] = new Data(12, 9, 1968);
      data[7] = new Data(15, 12, 1971);
      data[8] = new Data(18, 3, 1974);

      // professores
      data[9]  = new Data(31, 1, 2002);
      data[10] = new Data(1, 2, 2003);
      data[11] = new Data(2, 4, 2004);

      // Alunos
      Aluno aluno[] = new Aluno[3];
      aluno[0] = new Aluno("Gustavo", data[0], 6967911, 6, "40028922");
      aluno[1] = new Aluno("Pedro", data[1], 2001, 5);
      aluno[2] = new Aluno("Thierre", data[2], 6769, 42);

      // Funcionarios
      Funcionario funcionario[] = new Funcionario[3];
      funcionario[0] = new Funcionario("Fabio", "91011-1213", data[3], 23, 7500.00);
      funcionario[1] = new Funcionario("Joao", "1234-5678", data[4], 12, 5000.00);
      funcionario[2] = new Funcionario("Danilo", data[5], 1914, 10000.00);

      // Chefes
      Chefe chefe[] = new Chefe[3];
      chefe[0] = new Chefe("Cesar", "98877-6655", data[6], 301, 12000.00, "Diretor Geral");
      chefe[1] = new Chefe("Joana", "97766-5544", data[7], 302, 9800.00, "Gerente de TI");
      chefe[2] = new Chefe("Vitor", "96655-4433", data[8], 303, 11000.00, "Coordenador");

      // Professores
      Professor professor[] = new Professor[3];
      professor[0] = new Professor("Lucas", data[9], 401, 4500.00, "95544-3322", 18);
      professor[1] = new Professor("Camila", data[10], 402, 5200.00, "94433-2211", 22);
      professor[2] = new Professor("Bruno", data[11], 403, 4800.00, "93322-1100", 16);

      // ===================== SAÍDA =====================

      System.out.println("Alunos:");
      for (Aluno a : aluno) {
         System.out.println(a);
         System.out.println("");
      }

      System.out.println("Funcionarios:");
      for (Funcionario f : funcionario) {
         System.out.println(f);
         System.out.println("");
      }

      System.out.println("Chefes:");
      for (Chefe c : chefe) {
         System.out.println(c);
         System.out.println("Salario com bonus: " + c.getSalarioComBonificacao());
         System.out.println("");
      }

      System.out.println("Professores:");
      for (Professor p : professor) {
         System.out.println(p);
         System.out.println("Salario com bonus: " + p.getSalarioComBonificacao());
         System.out.println("");
      }
   }
}
