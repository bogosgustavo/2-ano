public class Principal{
   public static void main(String args[]){
      Data data[]=new Data[6];
      // aluno
      data[0]=new Data(28, 11, 2007);
      data[1]=new Data(12, 11, 2007);
      data[2]=new Data(12, 11, 2007);
      //funcionario
      data[3]=new Data(23, 6, 2005);
      data[4]=new Data(2, 7, 2006);
      data[5]=new Data(8, 8, 2004);
      
     Aluno aluno[]=new Aluno[3];
     aluno[0]=new Aluno("Gustavo",data[0],  6967911, "40028922");
     aluno[1]=new Aluno("Perin", data[1], 2001);
     aluno[2]=new Aluno("Thierre", data[2], 6769);
     
     Funcionario funcionario[]=new Funcionario[3];
     funcionario[0]=new Funcionario("Fabio", data[3], 23, 7500.00,"91011-1213");
     funcionario[1]=new Funcionario("Joao Pedro", data[4], 12, 5000.00,"1234-5678");
     funcionario[2]=new Funcionario("Danilo", data[5], 1914, 10000.00);
     
     System.out.println("Alunos: ");
     System.out.println(aluno[0].getNome());
     System.out.println(aluno[0].getNascimento());
     System.out.println(aluno[0].getRa());
     System.out.println(aluno[0].getTelefone());
     System.out.println("");
     System.out.println(aluno[1].getNome());
     System.out.println(aluno[1].getNascimento());
     System.out.println(aluno[1].getRa());
     System.out.println("");
     System.out.println(aluno[2].getNome());
     System.out.println(aluno[2].getNascimento());
     System.out.println(aluno[2].getRa());
     System.out.println("");
     System.out.println("Funcionarios: ");
     System.out.println(funcionario[0].getNome());
     System.out.println(funcionario[0].getTelefone());
     System.out.println(funcionario[0].getNascimento());
     System.out.println(funcionario[0].getRegistro());
     System.out.println(funcionario[0].getSalario());
     System.out.println("");
     System.out.println(funcionario[1].getNome());
     System.out.println(funcionario[1].getTelefone());
     System.out.println(funcionario[1].getNascimento());
     System.out.println(funcionario[1].getRegistro());
     System.out.println(funcionario[1].getSalario());
     System.out.println("");
     System.out.println(funcionario[2].getNome());
     System.out.println(funcionario[2].getNascimento());
     System.out.println(funcionario[2].getRegistro());
     System.out.println(funcionario[2].getSalario());
     System.out.println("");
      }
      }
      