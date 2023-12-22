package phone;

/**
 *
 * @author Filfimo Yulfiz Ahsanul Hulqi
 * 19102143
 */
public class Oppo implements Phone {
    
    private int volume;
    private boolean isPowerOn;

    public int getVolume() {
        return volume;
    } 
    
    //Set Volume Awal
    public Oppo(){
        this.volume = 50;
    }
    
    @Override
    public void powerOn(){
        isPowerOn = true;
        System.out.println("Handphone Menyala");
        System.out.println("Device Oppo");
    }
    
    @Override
    public void powerOff(){
        isPowerOn = false;
        System.out.println("Handphone Dimatikan");
    }
    
    @Override
    public void volumeUp(){
        if(isPowerOn){
            if(this.volume == MAX_VOLUME){
                System.out.println("Volume Penuh");
                System.out.println("Sudah " +this.getVolume() + "%");
            } else {
                this.volume += 10;
                System.out.println("Volume sekarang : " +this.getVolume() + "%");
            }
        } else{
            System.out.println("Nyalakan Handphone terlebih dahulu");
        }
    }
    
    @Override
    public void volumeDown(){
        if(isPowerOn){
            if(this.volume == MIN_VOLUME){
                System.out.println("Volume = 0%");
            } else {
                this.volume -= 10;
                System.out.println("Volume sekarang : " +this.getVolume() + "%");
            }
        } else {
            System.out.println("Nyalakan Handphone terlebih dahulu");
        }
    }
}
