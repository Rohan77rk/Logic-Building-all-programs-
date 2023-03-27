import java.util.*;

class Numbers
{
    public int FactorsMultiplication(int iNo)
    {
        int iCnt = 0;
        int iMult = 1;

        System.out.println("Common factors are :");
        for(iCnt = 1;iCnt <= (iNo/2); iCnt++)
            {
                if(iNo % iCnt == 0)
                    {
                        iMult = iMult*iCnt;

                        System.out.println(iCnt);
                    }
            }
                    return iMult;
        
        
    }
}


class Program255
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please first enter number :");
        int iNo = sobj.nextInt();


        Numbers nobj = new Numbers();

        int iRet = nobj.FactorsMultiplication(iNo);

        System.out.println("Multiplication of factors of "+iNo+" = "+iRet);
    }
}