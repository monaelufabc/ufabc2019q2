import java.util.Scanner;

public class Divisao
{
	public static void main(String[] args)
	{
		int a, b;
		Scanner scan = new Scanner(System.in);
		while(scan.hasNext())
		{
			a = scan.nextInt();
			b = scan.nextInt();
			try
			{
				System.out.println("Resultado: " + divisao(a, b));
			}
			catch(DivideByZeroException dbze)
			{
				System.err.println(dbze.getMessage());
			}
		}
	}

	public static float divisao(int a, int b) throws DivideByZeroException
	{
		if(b != 0)
		{
			return a/(float)b;
		}
		else
		{
			throw new DivideByZeroException();
		}
	}
}

class DivideByZeroException extends Exception
{
	public DivideByZeroException()
	{
		super("Erro: Divisao por zero!");
	}
}
