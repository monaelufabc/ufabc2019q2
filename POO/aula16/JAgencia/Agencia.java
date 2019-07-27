public class Agencia
{
	public static void main(String[] args)
	{
		Conta agencia[] = new Conta[10];
		int i;
		for(i=0; i<10; i++)
		{
			if(i%2==0)
			{
				agencia[i] = new ContaPoupanca("Fulano", "4567893200", 25, 7, 2019);
			}
			else
			{
				agencia[i] = new ContaInvestimento("Beltrano", "963666666600", 10);
			}
			agencia[i].deposito(100);
		}
		
		for(i=0; i<10; i++)
		{
			agencia[i].correcao();
		}

		for(i=0; i<10; i++)
		{
			agencia[i].extrato();
		}
	}
}
