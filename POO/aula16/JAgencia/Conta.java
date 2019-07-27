import java.util.Random;

abstract class Conta
{
	private String numero;
	private String titular;
	private String cpf;
	private boolean bloqueada;
	private float saldo;

	public Conta()
	{	}

	public Conta(String titular, String cpf)
	{
		this.setNumero(Conta.geraNumero(10));
		this.setTitular(titular);
		this.setCpf(cpf);
		this.setBloqueada(false);
		this.setSaldo(0.0f);
	}

	public void setNumero(String numero)
	{
		this.numero = numero;
	}

	public void setTitular(String titular)
	{
		this.titular = titular;
	}

	public void setCpf(String cpf)
	{
		this.cpf = cpf;
	}

	public void setBloqueada(boolean bloqueada)
	{
		this.bloqueada = bloqueada;
	}

	public void setSaldo(float saldo)
	{
		this.saldo = saldo;
	}

	public String getNumero()
	{
		return this.numero;
	}

	public String getTitular()
	{
		return this.titular;
	}

	public String getCpf()
	{
		return this.cpf;
	}

	public boolean isBloqueada()
	{
		return this.bloqueada;
	}

	public float getSaldo()
	{
		return this.saldo;
	}

	public boolean saque(float valor)
	{
		if(!this.isBloqueada() && this.getSaldo() >= valor)
		{
			this.setSaldo(this.getSaldo() - valor);
			return true;
		}
		return false;
	}

	public boolean deposito(float valor)
	{
		if(!this.isBloqueada())
		{
			this.setSaldo(this.getSaldo() + valor);
			return true;
		}
		return false;
	}

	public void extrato()
	{
		System.out.println("============================");
		System.out.println("NUMERO  : " + this.getNumero());
		System.out.println("TITULAR : " + this.getTitular());
		System.out.println("CPF     : " + this.getCpf());
		System.out.println("SALDO   : R$" + this.getSaldo());
		System.out.println("============================");
	}

	public abstract void correcao();
	
	public static String geraNumero(int n)
	{
		Random gerador = new Random();
		String numero = "";
		int i;
		for(i=0; i<n; i++)
		{
			numero += Integer.toString(gerador.nextInt(10));
		}
		return numero;
	}
}
