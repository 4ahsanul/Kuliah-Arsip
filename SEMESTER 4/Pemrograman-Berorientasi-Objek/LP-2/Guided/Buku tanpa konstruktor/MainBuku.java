/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package buku;

/**
 *
 * @author Filfimo Yulfiz Ahsanul Hulqi
 * 19102143
 */
public class MainBuku {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        // Pembuatan Objek
        Buku a = new Buku();
        
        //Pemanggilan Method
        a.setNilai("Jurassic Park", "Michael Crichton", 21);
        a.Display();
    }
    
}
