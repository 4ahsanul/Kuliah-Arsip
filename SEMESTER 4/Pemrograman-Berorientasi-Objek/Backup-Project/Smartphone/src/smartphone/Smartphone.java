package smartphone;

/**
 *
 * @author Filfimo Yuflzi Ahsanul Hulqi
 * 19102143
 */
// Class Smartphone melaukan implements dari Interface Handphone dan Time
public class Smartphone implements Handphone, Time {
    // Melakukan Override untuk semua method yang digunakan pada Handphone dan Time
    @Override
    public void Players(){
        System.out.println("Layar Nyala");
    }

    @Override
    public void Telepon(){
        System.out.println("Berdering....");
    }
    
    @Override
    public void Contact(){
        System.out.println("Mencari Kontak");
    }
    
    @Override
    public void Browse(){
        System.out.println("Pencarian Google");
    }
    
    @Override
    public void Streaming(){
        System.out.println("Memulai Netflix");
    }
    
    @Override
    public void Pesan(){
        System.out.println("Ketik Pesan");
    }
    
    @Override
    public void Vidcall(){
        System.out.println("Memanggil...");
    }
    
    @Override
    public void Kalender(){
        System.out.println("Program dibuat 5/9/2021");
    }
    
    @Override
    public void Jam(){
        System.out.println("Program dibuat jam 12.06");
    }
    
    @Override
    public void Alarm(){
        System.out.println("Alarm Nyala");
    }
    // Override yang sukses ditandai warna hijau pada nomer baris
}
