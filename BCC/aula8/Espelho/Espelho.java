import java.util.Scanner;

public class Espelho
{
	public static void main(String[] args)
	{
		int a, b, digA1, digA2, digA3, digA4, digB1, digB2, digB3, digB4;
		Scanner scan = new Scanner(System.in);

		a = scan.nextInt();
		b = scan.nextInt();

		digA1 = a/1000;
		a = a%1000;
		digA2 = a/100;
		a = a%100;
		digA3 = a/10;
		digA4 = a%10;
		
		digB1 = b/1000;
		b = b%1000;
		digB2 = b/100;
		b = b%100;
		digB3 = b/10;
		digB4 = b%10;

		if(digA1 == digB4 && digA2 == digB3 && digA3 == digB2 && digA4 == digB1)
		{
			System.out.println("espelho");
		}
		else
		{
			System.out.println("nao espelho");
		}
	}
}

