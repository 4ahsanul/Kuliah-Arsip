package koneksi;

/**
 *
 * @author Filfimo Yulfiz Ahsanul Hulqi
 * 19102143
 * IF 07 N
 */

//Import Library
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;
import javax.swing.JOptionPane;

public class formKoneksi {
    static Connection con;
    public static Connection getConnection(){
        //Penanganan exception jika gagal terhubung dengan database
        try{
            con = DriverManager.getConnection("jdbc:mysql://localhost:3306/"
                    + "dbpbo","root","");
            System.out.println("Koneksi berhasil");
        } catch (SQLException e){
            JOptionPane.showMessageDialog(null, "Error : Gagal Terhubung ke "
                    + "Database");
            System.exit(0);
        }
        return con;
    }
    
}
