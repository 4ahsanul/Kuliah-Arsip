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
public class Buku2 {
    //Deklarasi
    public String judul;
    public String pengarang;
    
    //Konstruktor
    //Buku yang tidak memiliki judul dan pengarang
    public Buku2(){
        judul = "TIDAK DIKETAHUI";
        pengarang = "TIDAK DIKETAHUI";
    }
    
    //Buku yang mempunyai judul dan pengarang
    public Buku2(String judul, String pengarang){
        this.judul = judul;
        this.pengarang = pengarang;
    }
    
    //Method untuk menampilkan output
    void Display(){
        if(judul == null && pengarang == null){
        }
        else{
            System.out.println("Judul : " + judul);
            System.out.println("Pengarang : " + pengarang);
        }
        
    }
}
