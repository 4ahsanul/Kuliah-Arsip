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
public class Buku {
    //Deklarasi
    public String judul;
    public String pengarang;
    public int jumlah;
    
    //Method
    public void setNilai(String judul, String pengarang, int jumlah){
        this.judul = judul;
        this.pengarang = pengarang;
        this.jumlah = jumlah;
    }
    void Display(){
        System.out.println("Judul : " + judul);
        System.out.println("Pengarang : " + pengarang);
        System.out.println("Jumlah : " + jumlah);
    }
}
