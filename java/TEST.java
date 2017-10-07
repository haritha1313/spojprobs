import java.io.*;
class  TEST
{
 public static void main(String args[])throws IOException
  {
    int a;
    BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
   a=Integer.parseInt(br.readLine());
    while(a!=42)
     {
       
          System.out.println(a);
          a=Integer.parseInt(br.readLine());
      }
     }
}
