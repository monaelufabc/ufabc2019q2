import java.util.Scanner;

public class ConsoantesVogais
{
	public static void main(String[] args)
	{
		Scanner scan = new Scanner(System.in);
		char letra;

		letra = scan.next().charAt(0);

		if(letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U' || letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u')
		{
			System.out.println("vogal");
		}
		else
		{
			System.out.println("consoante");
		}
	}
}


