import java.io.*;
public class lcs
{
 public static void main(String args[])throws IOException
  {
    BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
	int t,n,m,b,c;
	t=Integer.parseInt(br.readLine());
	while(t--)
	{
		n=Integer.parseInt(br.readLine());
                m=Integer.parseInt(br.readLine());
		string str1,str2;
                b=n+1;
                c=m+1;
		int arr[b][c];
		str1=br.readLine();
                str2=br.readLine();
		for(int i=0;i<=n;i++)
		{
			for(int j=0;j<=m;j++)
			{
				if(i==0||j==0)
				arr[i][j]=0;
				else{
				if(str1[i-1]!=str2[j-1])
				{
					arr[i][j]=max(arr[i-1][j],arr[i][j-1]);
				}
				else
				{
					arr[i][j]=arr[i-1][j-1]+1;
				}

			}
		}
		System.out.println(arr[n][m]);
	}
	
 }
}

