import java.util.Scanner;

public class Soma2
{
	public static void main(String[] args)
	{
		int n, soma=0, i, numero;
		Scanner scan = new Scanner(System.in);

		n = scan.nextInt();
		i = 0;
		while(i<n)
		{
			numero = scan.nextInt();
			soma = soma + numero;
			i = i + 1;
		}
		System.out.println(soma);
	}
}
