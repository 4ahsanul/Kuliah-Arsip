/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package mahasiswa;

/**
 *
 * @author FILFIMO YULFIZ AHSANUL HULQI (19102143)
 */

/*
    Import library Java
 */
import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Mahasiswa {
    //Deklarasi Array
    private String Nama[] = new String[3]; 
    private String NIM[] = new String[3];
    private int i;
    
    public void inputData() //Fungsi untuk melakukan input data
    {
        BufferedReader b; //Penggunaan Library
        b = new BufferedReader(new InputStreamReader(System.in)); //Penggunaan Library
        try
        {
            System.out.println("-Input Data Mahasiswa-");
            for (i=0;i<3;i++) //Untuk melakukan perulangan sebanyak 3x
            {
                System.out.println("Masukkan Nama :");
                Nama[i]=b.readLine(); //Untuk menerima Input nama dari user
                System.out.println("Masukkan NIM :");
                NIM[i]=b.readLine(); //Untuk menerima Input nim dari user
            }
        }
        catch (Exception E){}
    }
    public void display() //Fungsi untuk menampilkan output display
    {
        System.out.println("");
        System.out.println("-Display Data Mahasiswa-");
        for(i=0;i<3;i++) //Untuk melakukan perulangan sebanyak 3x
        {
            System.out.println("Nama : "+Nama[i]);
            System.out.println("NIM : "+NIM[i]);
            System.out.println("");
        }
    }
}
