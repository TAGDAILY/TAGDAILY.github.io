
public class DataTypeCastDemo02 {

		public static void main(String[] args){
			//强制转换(很危险 谨慎使用)
			double d=3.5;
			float f=(float)d; //类似C语言？
			System.out.println(f);
			
			int i=(int)d;
			System.out.println(i);
			
			i=100;
			byte b=(byte)i; // i没有超过byte的范围
			System.out.println(b);
			
			i=128;
			b=(byte)i; //越界了~转换结果为原始数据取余目标范围能表示的数字数目
			System.out.println(b); 
			System.out.println(b%256);
			
			i=40000;
			short s=(short)i;
			System.out.println(s); //同上
			System.out.println(s%65536);
		}
}
