class Pai
{
	public Pai()
	{
		System.out.println("ESTOU NO CONSTRUTOR VAZIO DE PAI");
	}
	public Pai(int x)
	{
		System.out.println("ESTOU NO CONSTRUTOR INT " + x +" DE PAI");
	}
}

class Filho extends Pai
{
	public Filho()
	{
		System.out.println("ESTOU NO CONSTRUTOR VAZIO DE FILHO");
	}

	public Filho(int x)
	{
		super(x);
		System.out.println("ESTOU NO CONSTRUTOR INT DE FILHO");
	}
}

public class Construtor
{
	public static void main(String[] args)
	{
		Filho obj = new Filho(666);
	}
}
