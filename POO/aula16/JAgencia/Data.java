class Data
{
	private int dia;
	private int mes;
	private int ano;
	
	public Data()
	{	}

	public Data(int dia, int mes, int ano)
	{
		this.setDia(dia);
		this.setMes(mes);
		this.setAno(ano);
	}

	public void setDia(int dia)
	{
		this.dia = dia;
	}

	public void setMes(int mes)
	{
		this.mes = mes;
	}

	public void setAno(int ano)
	{
		this.ano = ano;
	}

	public int getDia()
	{
		return this.dia;
	}

	public int getMes()
	{
		return this.mes;
	}

	public int getAno()
	{
		return this.ano;
	}
}
