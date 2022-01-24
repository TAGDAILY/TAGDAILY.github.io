
public class FloatDemo01 {

	public static void main(String[] args) {
		float f1=0.8f; // 默认双精度，声明单精度尾部要加f
		f1=1.36E+5f;
		f1=1.36E-5f;
		f1=.5f; // 对于小数省略0是可以的
		
		double d1=0.8; // 默认双精度，声明双精度尾部可以不加d
		d1=1.3628E+102;
		d1=1.3628E-102;
		
		d1=0x12.2p2; //可以使用十六进制，'p'num表示2的num次幂
		// d1=0x1.36e;
		
		d1=232_131_232.2_312_313; //也可以加分隔符助于读数
	}

}
