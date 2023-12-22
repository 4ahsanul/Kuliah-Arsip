package limasunguided;
/**
 *
 * @author ekoyanuarsobudi
 * 19102124
 * if07n
 */
public class Limas {
    //Komposisi antara segitiga dan persegi
    private Persegi p;
    private SgtSamaSisi s;

    public Limas(double Sx1, double Sy1, double Sx2, double Sy2, double Px1, double Py1, double Px2, double Py2) {
        Sx1 = s.x;Sy1 = s.y;Sx2 = s.x;Sy2 = s.y;
        Px1 = p.x;Py1 = p.y;Px2 = p.x;Py2 = p.y;
    }
    
    public double hitungLuas(){
        double luas;
        luas = (4* s.hitungLuas())+p.hitungLuas();
        return luas;
    }
    
    public void tampil(){
        s.tampil();
        p.tampil();
        System.out.println("Luas Limas\t: "+hitungLuas());
    }
}

/*
Kelas Limas memiliki spesifikasi sebagai berikut :
- Limas terdiri dari 4 buah SgtSamaSisi dengan ukuran yang sama dan 1 buah persegi (5%)
- Memiliki method hitungLuas() untuk menghitung luas Limas. (10%)
- Memiliki method tampil() untuk menampilkan nilai atribut SgtSamaSisi, nilai atribut Persegi dan
Luas Permukaan Limas (10%)
*/