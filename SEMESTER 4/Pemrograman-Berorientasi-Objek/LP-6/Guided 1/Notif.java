package notif;

/**
 *
 * @author Filfimo Yulfiz Ahsanul Hulqi
 * 19102143
 * IF 07 N
 */
public class Notif {
    public static void main(String[] args) {
        String emailPenerima = "yulfisahsan@gmail.com";
        String nomerHp = "082137639278";
        String mobileId = "IOS 14.2";
        
        EmailNotification emailNotif = new EmailNotification();
        SMSNotification smsNotif = new SMSNotification();
        PushNotification pushNotif = new PushNotification();
        String message = "Ini adalah pesan Ibu";
        
        emailNotif.sendMessage(emailPenerima, message);
        smsNotif.sendMessage(nomerHp, message);
        pushNotif.sendMessage(mobileId, message);
    }
    
}
