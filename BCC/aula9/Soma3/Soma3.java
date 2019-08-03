import java.util.Scanner;

public class Soma3
{
	public static void main(String[] args)
	{
		int soma=0, numero;
		Scanner scan = new Scanner(System.in);

		while(scan.hasNext())
		{
			numero = scan.nextInt();
			soma = soma + numero;
		}
		System.out.println(soma);
	}
}


