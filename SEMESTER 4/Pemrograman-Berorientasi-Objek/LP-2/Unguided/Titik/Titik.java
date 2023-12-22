/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package titik;

/**
 *
 * @author Filfimo Yulfiz Ahsanul Hulqi
 * 191021943
 */

//Import Library
import java.util.Scanner;
import static java.lang.Math.*;

public class Titik {
    //Deklarasi Fields dan juga pembuatan objek untuk scanner input
    Scanner masukan = new Scanner(System.in);
    double titik;
    int skalar;
    
    //TITIK 1
    public float x1;
    public float y1;
    
    //TITIK 2
    public float x2;
    public float y2;
    
    //Konstruktor Titik
    public Titik(float x1, float y1, float x2, float y2){
        this.x1 = x1;
        this.y1 = y1;
        this.x2 = x2;
        this.y2 = y2;
    }

    //Method untuk melakukan Inisialisasi Titik
    void inisialisasiTitik(){
        System.out.println("-Input Data Titik-");
        System.out.println("Masukkan X :");
        //Input yang akan masuk ke x1
        x1=masukan.nextFloat();
        System.out.println("Masukkan Y :");
        //Input yang akan masuk ke y1
        y1=masukan.nextFloat();
        System.out.println("Program Selesai melakukan Input");
        System.out.println();
    }
    
    //Method untuk menampilkan nilai titik yang telah disimpan oleh method 1
    void tampilTitik(){
        System.out.println("Berikut adalah titik X&Y");
        System.out.println("Titik X adalah = " +x1);
        System.out.println("Titik Y adalah = " +y1);
        System.out.println("PERHATIAN : TITIK YANG DITAMPILKAN HANYA TITIK 1");
        System.out.println("Program Selesai menampilkan Input");
        System.out.println();
    }
    
    //Method untuk mengalikan nilai Titik dengan suatu skalar sesuai input user
    void perkalianSkalar(){
        System.out.println("Perkalian Skalar");
        System.out.println("Masukkan Nilai Skalar : ");
        //User memasukan nilai dari skalar
        skalar = masukan.nextInt();
        //Melakukan perkalian ska
        x1 = x1*skalar;
        y1 = y1*skalar;
        //Pemanggilan untuk menampilkan hasil
        System.out.println
        ("Nilai X dan Y setelah dikalikan dengan Skalar : "+ x1 + " dan " + y1);
        System.out.println();
    }
    
    //Method untuk melakukan perceminan titik terhadap sumbu X
    void pencerminanSumbuX(){
        System.out.println("Pencerminan Sumbu X");
        System.out.println("Hasilnya adalah :");
        //Melakukan operasi dan langsung mengeluarkan ouput
        System.out.println("X = " + x1*1);
        System.out.println("Y = " + y1*-1);
        System.out.println("Program Selesai melakukan pencerminan Sumbu X");
        System.out.println();
    }
    
    //Method untuk melakukan pencerminan titik terhadap sumbu Y
    void pencerminanSumbuY(){
        System.out.println("Pencerminan Sumbu Y");
        System.out.println("Hasilnya adalah :");
        System.out.println("X = " + x1*-1);
        System.out.println("Y = " + y1*1);
        System.out.println("Program Selesai melakukan pencerminan Sumbu Y");
        System.out.println();
    }
    
    //Method untuk menacari jarak antara dua buah titik
    void jarak(){
        //User akan diminta untuk memasukan titik ke-2
        System.out.println("-Input Data Titik 2-");
        System.out.println("Masukkan X :");
        //Input yang akan masuk ke x2
        x2=masukan.nextFloat();
        System.out.println("Masukkan Y :");
        //Input yang akan masuk ke x2
        y2=masukan.nextFloat();
        //Menampilkan seluruh titik miliki Titik1 dan Titik2
        getTitik();
        System.out.println();
        
        //Rumus Jarak antara 2 titik
        titik = (sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1))));
        System.out.println("Jadi Jaraknya adalah " + titik);
        System.out.println();
    }
    
    //Method untuk menamilkan seluruh titik yang telah diinput oleh user
    public void getTitik(){
        System.out.println("Titik X1 " + x1);
        System.out.println("Titik Y1 " + y1);
        System.out.println();
        System.out.println("Titik X2 " + x2);
        System.out.println("Titik Y2 " + y2);
        System.out.println();
    }
}
