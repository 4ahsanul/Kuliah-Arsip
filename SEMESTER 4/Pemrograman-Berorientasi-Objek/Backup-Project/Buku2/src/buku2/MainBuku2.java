/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package buku2;

/**
 *
 * @author Filfimo Yulfiz Ahsanul Hulqi
 * 19102143
 */
public class MainBuku2 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Buku2 a,b = new Buku2();
        
        System.out.println("Konstruktor Sedang Dijalankan....");
        a = new Buku2("Bumi", "Tere Liye");
        b = new Buku2();
        a.Display();
        b.Display();
    }
    
}
