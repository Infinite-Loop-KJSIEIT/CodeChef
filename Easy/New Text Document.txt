import java.util.*;
import java.lang.*;
import java.io.*;

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Two_Variable_VK
{
	public static void main (String[] args) 
	{
		Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();
		int all[]=new int[1000];
		while(t-->0)
		{
		    long xf=sc.nextLong();
		    long x=0,y=0,p=0,count=0;;
		   while(x <= xf)
        {
            p =(long) Math.ceil(Math.sqrt(y)) ;
            //cout<<p<<" " ;
            if((p*p) == y) p++ ;
            x = p ; 
            y += (p*p) ;
            count++ ;
        }
		    System.out.println(--count);
		}
		
	}
}