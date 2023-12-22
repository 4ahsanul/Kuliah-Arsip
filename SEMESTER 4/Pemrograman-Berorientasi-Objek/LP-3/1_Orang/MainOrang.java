package orang;

/**
 *
 * @author Filfimo Yulfiz Ahsanul Hulqi
 * 19102143
 * IF 07 N
 */
public class MainOrang {

    public static void main(String[] args) {
        // Pembuatan objek baru dengan array
        Orang orang[] = new Orang[3];
        
        // Set nilai data orang dengan array
        orang[0] = new Orang("Fiflimo Yulfiz Ahsanul Hulqi", 19, "Brebes", "Laki-laki", "Mahasiswa");
        orang[1] = new Orang("Prawono Budianto", 20, "Bumiayu", "Laki-laki", "Sejarahwan");
        orang[2] = new Orang("Reo Natanegeri", 21, "Dukuhturi", "Laki-laki", "Guru");
        
        // Melakukan looping output dan pemanggilan method display
        System.out.println("==== BIODATA DIRI ====");
        for(int i=0; i<orang.length; i++){
            orang[i].Display();
        }
    }    
}
