import java.io.*;
public class maxln
{
    public static void main(String args[])throws IOException
    {
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
         int t,ans,r,i=0;
	    t=Integer.parseInt(br.readLine());
    	while(t>0)
    	{
    	    t--;
    	    i++;
	    	r=Integer.parseInt(br.readLine());
	    	ans=4*r*r;
		    System.out.println("Case "+i+": "+ans+".25");
         }
    }
}
