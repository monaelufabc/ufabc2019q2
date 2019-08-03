import java.util.Scanner;

public class Soma4
{
	public static void main(String[] args)
	{
		int n, i, m, j;
		long soma, numero;
		Scanner scan = new Scanner(System.in);

		n = scan.nextInt();
		i = 0;
		while(i<n)Datas Validas
		{
			soma = 0;
			m = scan.nextInt();
			j = 0;
			while(j<m)
			{
				numero = scan.nextLong();
				soma = soma + numero;
				j = j + 1;
			}
			System.out.println(soma);
			i = i + 1;
		}
	}
}
