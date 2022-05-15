import java.security.*;
import java.util.Scanner;
public class MD5
{
	public static String bytesToHex(byte[] b)	
	{
		char hexdigit[]=
{'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
		StringBuffer buf=new StringBuffer();
		for(int j=0;j<b.length;j++)
		{
			buf.append(hexdigit[(b[j]>>4)& 0x0f]);
			buf.append(hexdigit[b[j] & 0x0f]);
		}
		return buf.toString();
	}
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		try
		{
			MessageDigest md=MessageDigest.getInstance("MD5");
			//System.out.println(md.getAlgorithm());
			//System.out.println(md.getProvider());
			//System.out.println(md.toString());
			System.out.println("\n\nEnter the data:");
			String input=sc.next();
			md.update(input.getBytes());
			byte[] output=md.digest();
			System.out.println("Message Digest:"+output);
			System.out.println("Encrypted Message:"+bytesToHex(output));
		}
		catch(Exception e)
		{
			System.out.println(e);
		}
	}
}