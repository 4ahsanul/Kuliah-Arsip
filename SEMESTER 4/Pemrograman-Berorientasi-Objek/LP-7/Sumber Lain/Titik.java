package limasunguided;
/**
 *
 * @author ekoyanuarsobudi
 * 19102124
 * if07n
 */
class Titik {
    double x;
    double y;

    public Titik(double x, double y) {
        this.x = x;
        this.y = y;
    }
    
    public void tampil(){
        System.out.println("Nilai x : "+x);
        System.out.println("Nilai y : "+y);
    }
    
    public double hitungJarak(Titik t2){
        double jarak;
        jarak = Math.sqrt(Math.pow(t2.x-x,2)+Math.pow(t2.y-y,2));
        return jarak;
    }
    
    public Titik(double x1, double y1,double x2, double y2) {
        x1 = x;
        y1 = y;
        x2 = x;
        y2 = y;
    }

    double hitungJarak() {
        throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
    }
}
