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
public class Bank {
    // Deklarasi fields
    int saldo;
    
    // Konstruktor bank
    Bank (int saldo){
        this.saldo = saldo;
    }
    
    // Method untuk menampilkan jumlah saldo awal
    public void saldoAwal(int uang){
        this.saldo = uang;
        
    System.out.println("Saldo Uang Saat ini = Rp."+uang);       
    }
    
    // Method untuk melakukan simpan uang
    public void simpanUang(int uang){
        this.saldo += uang;
        
    System.out.println("Simpan Uang = Rp."+uang);
    getSaldo();
    }
    
    // Method untuk melakukan ambil uang
    public void ambilUang(int uang){
    this.saldo -= uang;
        
    System.out.println("Ambil Uang = Rp."+uang);
    getSaldo();
    }
    
    // Method untuk menampilkan saldo yang dapat digunakan di method sebelumnya
    public void getSaldo(){
    System.out.println("Saldo saat ini = Rp."+this.saldo);
    }
}
