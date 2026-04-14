public class Data{

   private int dia;
   private int mes;
   private int ano;
   
   public Data(int dia, int mes){
      this.dia = dia;
      this.mes = mes;
      this.ano = 2026;
   }
   public Data(int dia, int mes, int ano){
      this.dia = dia;
      this.mes = mes;
      this.ano = ano;
   }
   
   public void setDia(int dia){
      if (dia>=1 && dia<=31)
         this.dia = dia;
      else System.out.println("dia invalido");
   }
   public void setMes(int mes){
      if (mes>=1 && mes<=12)
         this.mes = mes;
      else System.out.println("mes invalido");
   }
   public void setAno(int ano){
      if (ano>=0)
         this.ano = ano;
      else System.out.println("ano invalido");
   }
   
   public int getDia(){
      return this.dia;
   }
   public int getMes(){
      return this.mes;
   }
   public int getAno(){
      return this.ano;
   }
   
   public String toString(){
      return this.dia+"/"+this.mes+"/"+this.ano;
   }
}
   