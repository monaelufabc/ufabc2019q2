class ContaInvestimento extends Conta
{
	private float taxaRendimento;
	private float taxaAdministracao;

	public ContaInvestimento()
	{	}

	public ContaInvestimento(String nome, String cpf, float taxa)
	{
		super(nome, cpf);
		this.setTaxaRendimento(taxa);
		this.setTaxaAdministracao(0.0f);
	}

	public void setTaxaRendimento(float taxa)
	{
		this.taxaRendimento = taxa;
	}

	public void setTaxaAdministracao(float taxa)
	{
		this.taxaAdministracao = taxa;
	}

	public float getTaxaRendimento()
	{
		return this.taxaRendimento;
	}

	public float getTaxaAdministracao()
	{
		return this.taxaAdministracao;
	}

	public void correcao()
	{
		this.setSaldo(this.getSaldo() * (1.0f + (this.getTaxaRendimento()/100.0f)));
	}

	public void extrato()
	{
		super.extrato();
		System.out.println("TAXA RENDIMENTO    : " + this.getTaxaRendimento() + "/%a.m.");
		System.out.println("TAXA ADMINISTRACAO : " + this.getTaxaAdministracao() + "/%a.m.");
		System.out.println("============================");
	}
}
