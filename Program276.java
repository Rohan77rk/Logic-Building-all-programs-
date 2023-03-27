import java.util.*;

class MarvellousX
{
    public int CapitalCount(String s)
    {
        int iCnt = 0;
        char Arr[] = s.toCharArray();
        for(int i = 0; i < Arr.length;i++)
        {
            if((s.charAt(i) >= 'A')&&(s.charAt(i) <= 'Z'))
            {
                iCnt++;
            }
        }
            return iCnt;
    }
}

class Program276
{
    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter string :");
        String str = sobj.nextLine();

        MarvellousX obj = new MarvellousX();
        int iRet = obj.CapitalCount(str);
        System.out.println("Number of Capital case letters are :"+iRet);
        
    }

}