/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package demoapp;
import java.io.*;
/**
 *
 * @author FILFIMO YULFIZ AHSANUL HULQI (19102143)
 */
public class DemoOOP {
    public void helloWorld(int jmlh_looping){
        System.out.println("\n-Display Hello World");
        for(int i=0;i<jmlh_looping;i++){ //Untuk melakukan looping
            System.out.print(+(i+1)+". Hello World....\n");
        }
    }
    public int tambah(int bil1, int bil2){ //Untuk melakukan penjumlahan
        return(bil1+bil2);
    }
}
