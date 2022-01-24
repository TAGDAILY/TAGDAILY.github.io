
public class SpeedOfLight {

	public static void main(String[] args) {
		//int speed=299792458; //int类型范围太小
		long speed=299792458;
		long second;
		long distance;
		
		second=24*60*60;
		distance=second*speed;
		System.out.println("光在一天中可以传播"+distance+"米");
	}
}
