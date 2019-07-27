class ContaPoupanca extends Conta
{
	private Data aniversario;

	public ContaPoupanca()
	{	}

	public ContaPoupanca(String titular, String cpf, int dia, int mes, int ano)
	{
		super(titular, cpf);
		this.setAniversario(new Data(dia, mes, ano));
	}

	public void setAniversario(Data dt)
	{
		this.aniversario = dt;
	}

	public Data getAniversario()
	{
		return this.aniversario;
	}

	public void correcao()
	{
		this.setSaldo(this.getSaldo() * 1.02f);
	}

	public void extrato()
	{
		super.extrato();
		System.out.println("ANIVERSARIO : " + this.getAniversario().getDia());
		System.out.println("============================");
	}
}
