/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javagui;

//Import Library yang akan digunakan
import koneksi.formKoneksi;
import java.sql.Connection;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;
import javax.swing.JOptionPane;

/**
 *
 * @author Filfimo Yulfiz Ahsanul Hulqi
 * 19102143
 * IF 07 N
 */
public class fregis extends javax.swing.JFrame {

    /**
     * Creates new form fregis
     */
    public fregis() {
        initComponents();
    }
    
    //Buat Koneksi dengan Database dbpbo
    Connection con = formKoneksi.getConnection();
    ResultSet rs;

    /**
     * This method is called from within the constructor to initialize the form.
     * WARNING: Do NOT modify this code. The content of this method is always
     * regenerated by the Form Editor.
     */
    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        jPanel1 = new javax.swing.JPanel();
        jJudul = new javax.swing.JLabel();
        jUser = new javax.swing.JLabel();
        fUser = new javax.swing.JTextField();
        jPass = new javax.swing.JLabel();
        fPass = new javax.swing.JPasswordField();
        jBelum = new javax.swing.JLabel();
        bSignIn = new javax.swing.JButton();
        bSignUp = new javax.swing.JButton();
        jEmail = new javax.swing.JLabel();
        fEmail = new javax.swing.JTextField();
        jNomer = new javax.swing.JLabel();
        fNomer = new javax.swing.JTextField();
        jNip = new javax.swing.JLabel();
        fNip = new javax.swing.JTextField();
        jNama = new javax.swing.JLabel();
        fNama = new javax.swing.JTextField();

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);

        jPanel1.setBackground(new java.awt.Color(0, 173, 181));
        jPanel1.setBorder(javax.swing.BorderFactory.createLineBorder(new java.awt.Color(0, 0, 0)));

        jJudul.setFont(new java.awt.Font("Arial Black", 1, 18)); // NOI18N
        jJudul.setForeground(new java.awt.Color(238, 238, 238));
        jJudul.setText("REGISTER");

        jUser.setFont(new java.awt.Font("Arial", 1, 12)); // NOI18N
        jUser.setForeground(new java.awt.Color(238, 238, 238));
        jUser.setText("Username");

        fUser.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                fUserActionPerformed(evt);
            }
        });

        jPass.setFont(new java.awt.Font("Arial", 1, 12)); // NOI18N
        jPass.setForeground(new java.awt.Color(238, 238, 238));
        jPass.setText("Password");

        jBelum.setFont(new java.awt.Font("Arial", 1, 12)); // NOI18N
        jBelum.setForeground(new java.awt.Color(238, 238, 238));
        jBelum.setText("Sudah punya akun ? Silahkan Login");

        bSignIn.setBackground(new java.awt.Color(34, 40, 49));
        bSignIn.setForeground(new java.awt.Color(238, 238, 238));
        bSignIn.setText("Sign In");
        bSignIn.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                bSignInActionPerformed(evt);
            }
        });

        bSignUp.setBackground(new java.awt.Color(34, 40, 49));
        bSignUp.setForeground(new java.awt.Color(238, 238, 238));
        bSignUp.setText("Sign Up");
        bSignUp.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                bSignUpActionPerformed(evt);
            }
        });

        jEmail.setFont(new java.awt.Font("Arial", 1, 12)); // NOI18N
        jEmail.setForeground(new java.awt.Color(238, 238, 238));
        jEmail.setText("Email");

        fEmail.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                fEmailActionPerformed(evt);
            }
        });

        jNomer.setFont(new java.awt.Font("Arial", 1, 12)); // NOI18N
        jNomer.setForeground(new java.awt.Color(238, 238, 238));
        jNomer.setText("No Hp");

        fNomer.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                fNomerActionPerformed(evt);
            }
        });

        jNip.setFont(new java.awt.Font("Arial", 1, 12)); // NOI18N
        jNip.setForeground(new java.awt.Color(238, 238, 238));
        jNip.setText("NIP");

        fNip.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                fNipActionPerformed(evt);
            }
        });

        jNama.setFont(new java.awt.Font("Arial", 1, 12)); // NOI18N
        jNama.setForeground(new java.awt.Color(238, 238, 238));
        jNama.setText("Nama");

        fNama.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                fNamaActionPerformed(evt);
            }
        });

        javax.swing.GroupLayout jPanel1Layout = new javax.swing.GroupLayout(jPanel1);
        jPanel1.setLayout(jPanel1Layout);
        jPanel1Layout.setHorizontalGroup(
            jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanel1Layout.createSequentialGroup()
                .addContainerGap(120, Short.MAX_VALUE)
                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, jPanel1Layout.createSequentialGroup()
                        .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING, false)
                                .addGroup(jPanel1Layout.createSequentialGroup()
                                    .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING)
                                        .addGroup(jPanel1Layout.createSequentialGroup()
                                            .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                                                .addComponent(jPass)
                                                .addComponent(jUser))
                                            .addGap(100, 100, 100))
                                        .addGroup(jPanel1Layout.createSequentialGroup()
                                            .addComponent(jNama)
                                            .addGap(126, 126, 126)))
                                    .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                                        .addComponent(fUser)
                                        .addComponent(fPass)
                                        .addComponent(fNama)
                                        .addComponent(fNomer)))
                                .addGroup(jPanel1Layout.createSequentialGroup()
                                    .addComponent(jBelum)
                                    .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, 91, Short.MAX_VALUE)
                                    .addComponent(bSignIn, javax.swing.GroupLayout.PREFERRED_SIZE, 73, javax.swing.GroupLayout.PREFERRED_SIZE))
                                .addComponent(fEmail, javax.swing.GroupLayout.PREFERRED_SIZE, 205, javax.swing.GroupLayout.PREFERRED_SIZE))
                            .addComponent(bSignUp, javax.swing.GroupLayout.Alignment.TRAILING)
                            .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                                .addGroup(jPanel1Layout.createSequentialGroup()
                                    .addGap(159, 159, 159)
                                    .addComponent(fNip, javax.swing.GroupLayout.DEFAULT_SIZE, 205, Short.MAX_VALUE))
                                .addGroup(jPanel1Layout.createSequentialGroup()
                                    .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                                        .addComponent(jNip)
                                        .addComponent(jNomer)
                                        .addComponent(jEmail))
                                    .addGap(0, 0, Short.MAX_VALUE))))
                        .addGap(120, 120, 120))
                    .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, jPanel1Layout.createSequentialGroup()
                        .addGap(0, 0, Short.MAX_VALUE)
                        .addComponent(jJudul)
                        .addGap(230, 230, 230))))
        );
        jPanel1Layout.setVerticalGroup(
            jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanel1Layout.createSequentialGroup()
                .addContainerGap()
                .addComponent(jJudul)
                .addGap(18, 18, 18)
                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(fUser, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(jUser))
                .addGap(18, 18, 18)
                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jPass)
                    .addComponent(fPass, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addGap(18, 18, 18)
                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(fNama, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(jNama))
                .addGap(18, 18, Short.MAX_VALUE)
                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jEmail)
                    .addComponent(fEmail, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addGap(18, 18, 18)
                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jNomer)
                    .addComponent(fNomer, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addGap(18, 18, 18)
                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jNip)
                    .addComponent(fNip, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addGap(18, 18, 18)
                .addComponent(bSignUp)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jBelum)
                    .addComponent(bSignIn))
                .addGap(21, 21, 21))
        );

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addComponent(jPanel1, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addComponent(jPanel1, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
        );

        pack();
    }// </editor-fold>//GEN-END:initComponents

    //Bagian fUser
    private void fUserActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_fUserActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_fUserActionPerformed

    //Bagian bSignIn untuk pindah halaman Sign In
    private void bSignInActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_bSignInActionPerformed
        this.setVisible(false);
        new Login().setVisible(true);
    }//GEN-LAST:event_bSignInActionPerformed

    //Bagian bSignUp untuk melakukan Sign Up
    private void bSignUpActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_bSignUpActionPerformed
        String user = fUser.getText();
        String pass = fPass.getText();
        String nama = fNama.getText();
        String email = fEmail.getText();
        String nohp = fNomer.getText();
        String nip = fNip.getText();

        //Penanganan Exception
        try{
            //Melakukan Query Update ke SQL
            con.createStatement().executeUpdate("INSERT INTO login value('"+user+"','"+pass+"')");
            con.createStatement().executeUpdate("INSERT INTO data value('"+nama+"','"+email+"','"+nohp+"','"+nip+"')");

            JOptionPane.showMessageDialog(null, "DAFTAR BERHASIL !");
            this.setVisible(false);
            new fmenu().setVisible(true);
            dispose();
        } catch(SQLException e){
            System.out.println(""+e);
            JOptionPane.showMessageDialog(null, "GAGAL MELAKUKAN REGISTRASI");
        }
    }//GEN-LAST:event_bSignUpActionPerformed

    //Bagian fEmail untuk mengisi email
    private void fEmailActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_fEmailActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_fEmailActionPerformed

    //Bagian fNomer untuk mengisi nomer hp
    private void fNomerActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_fNomerActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_fNomerActionPerformed

    //Bagian fNama untuk mengisi nama
    private void fNamaActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_fNamaActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_fNamaActionPerformed

    //Bagian FNip untuk mengisi NIP
    private void fNipActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_fNipActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_fNipActionPerformed

    /**
     * @param args the command line arguments
     */
    public static void main(String args[]) {
        /* Set the Nimbus look and feel */
        //<editor-fold defaultstate="collapsed" desc=" Look and feel setting code (optional) ">
        /* If Nimbus (introduced in Java SE 6) is not available, stay with the default look and feel.
         * For details see http://download.oracle.com/javase/tutorial/uiswing/lookandfeel/plaf.html 
         */
        try {
            for (javax.swing.UIManager.LookAndFeelInfo info : javax.swing.UIManager.getInstalledLookAndFeels()) {
                if ("Nimbus".equals(info.getName())) {
                    javax.swing.UIManager.setLookAndFeel(info.getClassName());
                    break;
                }
            }
        } catch (ClassNotFoundException ex) {
            java.util.logging.Logger.getLogger(fregis.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (InstantiationException ex) {
            java.util.logging.Logger.getLogger(fregis.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (IllegalAccessException ex) {
            java.util.logging.Logger.getLogger(fregis.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (javax.swing.UnsupportedLookAndFeelException ex) {
            java.util.logging.Logger.getLogger(fregis.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        }
        //</editor-fold>

        /* Create and display the form */
        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                new fregis().setVisible(true);
            }
        });
    }

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JButton bSignIn;
    private javax.swing.JButton bSignUp;
    private javax.swing.JTextField fEmail;
    private javax.swing.JTextField fNama;
    private javax.swing.JTextField fNip;
    private javax.swing.JTextField fNomer;
    private javax.swing.JPasswordField fPass;
    private javax.swing.JTextField fUser;
    private javax.swing.JLabel jBelum;
    private javax.swing.JLabel jEmail;
    private javax.swing.JLabel jJudul;
    private javax.swing.JLabel jNama;
    private javax.swing.JLabel jNip;
    private javax.swing.JLabel jNomer;
    private javax.swing.JPanel jPanel1;
    private javax.swing.JLabel jPass;
    private javax.swing.JLabel jUser;
    // End of variables declaration//GEN-END:variables
}
