import java.io.*;
class  TEST
{
 public static void main(String args[])throws IOException
  {
    int a;
    BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
   a=Integer.parseInt(br.readLine()); //Scanner could also be used
    while(a!=42) //loop runs till entered number is 42
     {
       
          System.out.println(a); //a is printed since it's not 42
          a=Integer.parseInt(br.readLine()); //a is updated by taking another input from user
      }
     }
}
