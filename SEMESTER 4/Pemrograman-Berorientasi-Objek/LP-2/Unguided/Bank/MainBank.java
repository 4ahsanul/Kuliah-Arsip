/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package bank;

/**
 *
 * @author Filfimo Yulfiz Ahsanul Hulqi
 * 19102143
 */
public class MainBank {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // Pembuatan objek dengan int didalamnya sebagai saldo untuk melakukan
        // operasi ambil,simpan, dan tambah
        Bank bank = new Bank(100000);
        
        //Hanya ouput untuk menambah tampilan program
        System.out.println("SELAMAT DATANG DI BANK BANG");
        System.out.println();
        
        // Untuk menampilkan saldo awal
        bank.saldoAwal(100000);
        System.out.println();
        
        // Untuk meampilan simpan uang
        bank.simpanUang(500000);
        System.out.println();
        
        // Untuk melakukan ambil uang
        bank.ambilUang(150000);
        System.out.println();
        
        //Hanya ouput untuk menambah tampilan program
        System.out.println("PROGRAM TELAH SELESAI, TERIMAKASIH");
    }
}
