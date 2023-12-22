package cobathrow;
/**
 *
 * @author FILFIMO YULFIZ AHSANUL HULQI
 * 19102143
 * IF 07 N
 */

public class CobaThrow {
    //Pembuatan method
    public static void methodLain(){
        try{
            throw new ArrayIndexOutOfBoundsException(1);
        } catch(ArrayIndexOutOfBoundsException e){
            System.out.println("Penangganan exception dalam methodLain()");
        throw e;
        }
    }
    
    //Main untuk running program
    public static void main(String[] args) {
        try{
            //Throw exception dari method lain
            methodLain();
        } catch(ArrayIndexOutOfBoundsException e){
            System.out.println("Penanganan exception dalam method main()");
        }
    }  
}
