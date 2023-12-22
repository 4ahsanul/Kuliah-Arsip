/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package titik;

/**
 *
 * @author Filfimo Yulfiz Ahsanul Hulqi
 * 19102143
 */

//Import Library
import java.util.Scanner;

public class MainTitik {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        //Pembuatan Objek
        Titik a = new Titik(0,0,0,0);
        //Penggunaan Library untuk melakukan input
        Scanner baca = new Scanner(System.in);
        
        //
        System.out.println("Selamat Datang Di Program Titik");
        
        //Angka masukan untuk memilih menu dan melakukan looping
        //menggunakan do while
        int pilih;
        do{
            //Tampilan Menu Operasi  Titik
            System.out.println("==================================");
            System.out.println("MENU OPERASI TITIK");
            System.out.println("1. Inisialisasi Titik");
            System.out.println("2. Tampil Titik");
            System.out.println("3. Perkalian Skalar Titik");
            System.out.println("4. Pencerminan Terhadap Sumbu X");
            System.out.println("5. Pencerminan Terhadap Sumbu Y");
            System.out.println("6. Jarak Antara Dua Titik");
            System.out.println("0. Keluar");
            System.out.println("Masukkan Pilihan : ");
            //Untuk memasukan pilihan sesuai menu yang tersedia
            pilih = baca.nextInt();
            //Menggunakan switch case untuk melakukan percabangan
            switch(pilih){
                //Jika user memilih menu no 1 maka fungsi inisialisasi titik
                //akan dijalankan
                case 1:
                    a.inisialisasiTitik();
                    break;
                //Jika user memilih menu no 2 maka fungsi tampi titik
                //akan dijalankan
                case 2:
                    a.tampilTitik();
                    break;
                //Jika user memilih menu no 3 maka fungsi perkalian skalar
                //akan dijalankan
                case 3:
                    a.perkalianSkalar();
                    break;
                //Jika user memilih menu no 4 maka fungsi pencerminan sumbu X
                //akan dijalankan
                case 4:
                    a.pencerminanSumbuX();
                    break;
                //Jika user memilih menu no 5 maka fungsi pencerminan sumbu Y
                //akan dijalankan    
                case 5:
                    a.pencerminanSumbuY();
                    break;    
                case 6:
                //Jika user memilih menu no 6 maka fungsi mencari jarak 2 titik
                //akan dijalankan
                    a.jarak();
                    break;
                //Jika user memilih menu no 0 maka program akan berhenti
                //Ini berhubungan dengan looping do while
                case 0:
                    System.out.println("PROGRAM SELESAI");
                    System.out.println("TERIMAKASIH");
                    System.out.println("FILFIMO YULFIZ A.H (19102143)");
                    System.out.println();
                    break;
                //Jika user memasukan masukan yang tidak tersedia
                //Akan muncul ouput peringatan
                default:
                    System.out.println("Tidak ada layanan");
                    System.out.println("Mohon masukan input yang sesuai");
                    System.out.println();
                    break;
            }
        } while (pilih != 0); //Jika user memilih/memasukan 0 maka program akan
                              //berhenti karena kondisi looping do while telah
                              //terpenuhi, yaitu program akan melakukan looping
                              //terus menerus jika pilih mempunyai nilai 
                              //tidak sama dengan 0
    }
    
}
