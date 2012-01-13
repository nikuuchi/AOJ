import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.math.BigDecimal;

//ファイル名がMain.javaでないとコンパイルできないが、管理が面倒なのでファイル名を変更している。
public class Main {
	
	public static BigDecimal fact(BigDecimal n){
		if(n.compareTo(new BigDecimal(1)) > 0){
		return n.multiply(fact(n.subtract(new BigDecimal(1))));
		}else{
			return new BigDecimal(1);
		}
	}

	public static void main(String[] args) {
		BigDecimal ans = null;
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		try {
			ans = new BigDecimal(Integer.parseInt(br.readLine()));
		} catch (NumberFormatException e) {
			e.printStackTrace();
		} catch (IOException e) {
			e.printStackTrace();
		}
		if(ans != null){
			System.out.println(fact(ans));
		}
	}

}
