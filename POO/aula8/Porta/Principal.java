class Porta
{
    boolean aberta;
    
    public void abrir()
    {
        aberta = true;
    }
    
    public void fechar()
    {
        aberta = false;
    }
    
    public void situacao()
    {
        System.out.println("A porta estah " + (aberta?"aberta.":"fechada."));
    }
}

public class Principal
{
    public static void main(String[] args)
    {
        Porta sala;
        sala = new Porta();
        
        sala.fechar();
        sala.situacao();
        sala.abrir();
        sala.situacao();
    }
}