import java.util.*;

/*
    Row = 4
    Col = 4

    1   2   3   4
    5   6   7   8
    9   1   2   3
    4   5   6   7
*/

class Pattern
{
    public void Display(String str)
    {
        int i = 0 ,j = 0; 

        for(i = 0;i < str.length(); i++)
        {
            for(j = 0; j < str.length(); j++)
            {
                System.out.print(charAt[j]+"\t");

            }
            System.out.println();
        }
    }
}

class Program296
{
    public static void main(String a[])
    {
        Pattern pobj = new Pattern();
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string: ");
        String s = sobj.nextLine();

        
        
        pobj.Display(s);
    }
}