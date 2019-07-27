import java.util.Scanner;

public class Bissexto
{
    public static void main(String[] args)
    {
        int ano;
        Scanner scan = new Scanner(System.in);

        ano = scan.nextInt();
        if(ano%400==0 || ano%100!=0 && ano%4==0)
        {
            System.out.println("ANO BISSEXTO");
        }
        else
        {
            System.out.println("ANO NAO BISSEXTO");
        }
    }
}