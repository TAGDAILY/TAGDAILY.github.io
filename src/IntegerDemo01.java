
public class IntegerDemo01 {

	public static void main(String[] args) {
		byte b1=100;
		byte b2=-100;
		
		short s1=3328;
		
		int i1=2322131;
		
		long l1=2147483648L;  // 超过了int范围要加后缀‘L’
		// long l2=10000000000000000000L;
		System.out.println(b1+b2+s1+i1);
	}
}
