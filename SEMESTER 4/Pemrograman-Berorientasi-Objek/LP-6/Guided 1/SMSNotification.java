package notif;

/**
 *
 * @author Filfimo Yulfiz Ahsanul Hulqi
 * 19102143
 * IF 07 N
 */
public class SMSNotification implements InterfaceNotifikasi {
    @Override
    public void sendMessage(String receiver, String content){
        System.out.println("Mengirim SMS ke : " + receiver);
        System.out.println("Dengan isi : " + content);
        System.out.println();
    }
}
