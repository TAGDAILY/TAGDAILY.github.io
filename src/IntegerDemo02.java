
public class IntegerDemo02 {

	public static void main(String[] args) {
		int i1=100;
		int i2=010; // 八进制
		int i3=012;
		int i4=0x10; // 十六进制
		int i5=0xff;
		System.out.println(i4);
		System.out.println(i5);
		int i6=0b1010; // 二进制
		int i7=-0b1111;
		System.out.println(i6);
		System.out.println(i7);
		
		int i8=123_456_789; // ‘_’利于读数
		int i9=0b1111_1010_0101_1100;
	}

}
