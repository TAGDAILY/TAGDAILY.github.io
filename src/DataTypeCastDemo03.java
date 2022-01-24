
public class DataTypeCastDemo03 {

	public static void main(String[] args) {
		// 表达式当中数据类型自动提升(double float long 如果三者都没有为 int)
		byte b=50;
		short s=2048;
		char c='a';
		int i=20000;
		long l=123312L;
		float f=8.2222f;
		double d=23.34434;
		
		// example
		double r1=b*i+(f-d);
		int r2 =i*c/(s+b);
		
		b=(byte)(b*2); //为什么它的结果为int?
		System.out.println(b);
	}

}
