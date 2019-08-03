import java.util.Scanner;

public class Led
{
	public static void main(String[] args)
	{
		int n, i, posicao, qtdLeds;
		String numero;
		Scanner scan = new Scanner(System.in);

		n = scan.nextInt();
		i = 0;
		while(i<n)
		{
			numero = scan.next();
			posicao = 0;
			qtdLeds = 0;
			while(posicao < numero.length())
			{
				if(numero.charAt(posicao) == '0')
				{
					qtdLeds = qtdLeds + 6;
				}
				else if(numero.charAt(posicao) == '1')
				{
					qtdLeds = qtdLeds + 2;
				}
				else if(numero.charAt(posicao) == '2')
				{
					qtdLeds = qtdLeds + 5;
				}
				else if(numero.charAt(posicao) == '3')
				{
					qtdLeds = qtdLeds + 5;
				}
				else if(numero.charAt(posicao) == '4')
				{
					qtdLeds = qtdLeds + 4;
				}
				else if(numero.charAt(posicao) == '5')
				{
					qtdLeds = qtdLeds + 5;
				}
				else if(numero.charAt(posicao) == '6')
				{
					qtdLeds = qtdLeds + 6;
				}
				else if(numero.charAt(posicao) == '7')
				{
					qtdLeds = qtdLeds + 3;
				}
				else if(numero.charAt(posicao) == '8')
				{
					qtdLeds = qtdLeds + 7;
				}
				else if(numero.charAt(posicao) == '9')
				{
					qtdLeds = qtdLeds + 6;
				}
				else
				{
					qtdLeds = qtdLeds + 6;
				}
				posicao = posicao + 1;
			}
			i = i + 1;
			System.out.println(qtdLeds + " leds");
		}
	}
}
