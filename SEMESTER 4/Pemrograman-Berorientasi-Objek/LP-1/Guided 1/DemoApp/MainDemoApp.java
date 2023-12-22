/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package demoapp;

/**
 *
 * @author FILFIMO YULFIZ AHSANUL HULQI (19102143)
 */
public class MainDemoApp {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        int jmlh_looping=5;
        int bil1=5;
        int bil2=2;
        DemoOOP Demo = new DemoOOP(); //Pembentukan Objek
        Demo.helloWorld(jmlh_looping);
        System.out.println("\n-Pemanggilan Fungsi Tambah-\n");
        System.out.println("Hasil Operasi Tambah :"+Demo.tambah(bil1, bil2));
    }  
}
