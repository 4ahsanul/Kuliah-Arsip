package limasunguided;
/**
 *
 * @author ekoyanuarsobudi
 * 19102124
 * if07n
 */
public class Persegi extends Titik{
    private double sisiPSG;
    private Titik tik;

    public Persegi(double x1, double y1, double x2, double y2) {
        super(x1, y1, x2, y2);
    }

    public void setSisiPSG(double sisiPSG) {
        this.sisiPSG = tik.hitungJarak();
    }
    
    public double hitungLuas(){
        double luas;
        luas = sisiPSG * sisiPSG;
        return luas;
    }
    
    public void tampil(){
        System.out.println("Point\t: "+"["+x+y+"]");
        System.out.println("Sisi Persegi\t: "+sisiPSG);
        System.out.println("Luas Persegi\t: "+hitungLuas());
    }
}

/*
Kelas Persegi memiliki spesifikasi sebagai berikut :
- Memiliki atribut sisiPSG bertipe double (5%)
sisiPSG didapatkan dari perhitungan jarak 2 titik yang diinputkan melalui konstruktornya.
- Memiliki method hitungLuas() untuk menghitung luas pesegi (10%)
- Memiliki method tampil() yang meredefinisi method kelas induk untuk menampilkan nilai atribut
kelas induk dan nilai atribut kelas Persegi (10%)
*/