
public class CharDemo01 {

	public static void main(String[] args) {
		char c1='a'; //字符类型里单引号内只能有一个字符
		char c2=65; //可以把0-65565的int类型赋值给
		System.out.println(c2);
		
		c1='\n'; //换行
		c1='\r'; //回车
		c1='\b'; //退格
		c1='\t'; //水平制表
		c1='\f'; //换页
		c1='\''; //单引号
		c1='\"'; //双引号
		c1='\\'; //反斜线
		c1='\212'; //使用3位八进制数字表示0~377范围内（十进制的0~255）256个字符
		c1='\u4e01'; //使用4位十六进制数字表示\u0000~\uffff范围的字符
	}

}
