/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package mahasiswa;

/**
 *
 * @author FILFIMO YULFIZ AHSANUL HULQI (19102143)
 */
public class MainMahasiswa {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Mahasiswa M=new Mahasiswa();
        M.inputData(); //Pemanggilan input data, user dapat memasukkan data, dan sistem akan menyimpan input tersebut
        M.display(); //Mengeluarkan ouput data, dari fungsi input data, yang telah user isi
    }
    
}
