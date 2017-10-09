import java.io.*;
public class willitst
{
  public static void main(String args[])throws IOException 
        {
           BufferedReader br=new BufferedReader(new InputStreamReader(system.in));
	   long n;
	   n=Long.parseLong(br.readLine());
	   if(n==1)
	   cout<<"TAK";
	   else
	   while(n%2==0&&n>0)
	   {
	         n/=2;
		 if(n==1)
		{
                   System.out.println("TAK");
		   break;
                }
	    }
            if(n>1)
               System.out.println("NIE");
	
          }	
}
