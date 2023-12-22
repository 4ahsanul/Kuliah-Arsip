package employee;

/**
 *
 * @author Filfimo Yulfiz Ahsanul Hulqi
 * 19102143
 * IF 07 N
 */
public class Run {
    public static void main(String args[]){
        System.out.println("========== DATA PEGAWAI PERUSAHAAN PBO ==========");
        System.out.println();
        //Membuat Objek referensi dari kelas abstract employee
        Employee emp;
        Salaried s = new Salaried("Filfimo", "19102143", 253725.32);
        /*Objek referensi dari kelas abstrak Employee(emp) merefer objek dari
        kelas Salaried(s) yang diturunkan dari kelas abstract Employee*/
        emp = s;
        //Mencetak informasi Salaried ke console
        s.cetakInformasi();
        System.out.println();
        
        Comission c = new Comission("Yulfiz", "34120191", 153856.14, 103618.02, 7);
        /*Objek referensi dari kelas abstrak Employee(emp) merefer objek dari
        kelas Comission(c) yang diturunkan dari kelas abstract Employee*/
        emp = c;
        //Mencetak informasi Comission ke console
        c.cetakInformasi();
        System.out.println();
        
        Project p = new Project("Ahsanul", "IF07N", 185630.76, 195621.32, 5);
        /*Objek referensi dari kelas abstrak Employee(emp) merefer objek dari
        kelas Project(p) yang diturunkan dari kelas abstract pegawai*/
        emp = p;
        //Mencetak informasi Project ke console
        p.cetakInformasi();
        
        System.exit(0);
    }   
}