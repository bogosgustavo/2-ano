package br.uepg.deinfo;
public class ContaCorrente{
   protected String nome; 
   protected ContaCorrente(String nome){
      this.nome=nome;
   }
   public String getNome(){
      return this.nome;
   }
      
}