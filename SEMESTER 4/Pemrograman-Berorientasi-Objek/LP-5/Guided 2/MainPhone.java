package phone;

/**
 *
 * @author Filfimo Yulfiz Ahsanul Hulqi
 * 19102143
 */
import java.util.Scanner;

public class MainPhone {
    public static void main(String[] args) {
        Phone xiao = new Xiaomi();
        Phone ipho = new iPhone();
        Phone sams = new Samsung();
        Phone oppo = new Oppo();
        
        PhoneUser nama = new PhoneUser(xiao);
        
        nama.turnOnThePhone();
        
        Scanner input = new Scanner(System.in);
        String aksi;
        
        while(true){
            System.out.println("===== INTERFACE =====");
            System.out.println("[1] Nyalakan HP");
            System.out.println("[2] Matikan HP");
            System.out.println("[3] Perbesar Volume");
            System.out.println("[4] Kecilkan Volume");
            System.out.println("[0] Keluar");
            System.out.println("=====================");
            System.out.println("Pilih Input >");
            aksi = input.nextLine();
            if(aksi.equalsIgnoreCase("1")){
                nama.turnOnThePhone();
            } else if (aksi.equalsIgnoreCase("2")){
                nama.turnOffThePhone();
            } else if (aksi.equalsIgnoreCase("3")){
                nama.makePhoneLouder();
            } else if (aksi.equalsIgnoreCase("4")){
                nama.makePhoneSilent();
            } else if (aksi.equalsIgnoreCase("0")) {
                System.exit(0);
            } else {
                System.out.println("Kamu memilih input yang salah!");
            }
        }
    }
}
