import java.security.*;
import javax.crypto.*;
import java.util.Scanner;
class DES
{
public static void main(String args[])
{
	Scanner sc=new Scanner(System.in);
	System.out.println("\nEnter data to encrypt:");
	String str=sc.next();
	byte[] text=str.getBytes();
	try
	{
		KeyGenerator keygen=KeyGenerator.getInstance("DES");
		SecretKey mykey=keygen.generateKey();
		Cipher descipher;
		descipher=Cipher.getInstance("DES/ECB/PKCS5Padding");
		descipher.init(Cipher.ENCRYPT_MODE,mykey);
		byte[] encry=descipher.doFinal(text);
		System.out.println("Encrypted text:"+new String(encry));
		descipher.init(Cipher.DECRYPT_MODE,mykey);
		byte [] decry=descipher.doFinal(encry);
		System.out.println("\nDecrypted text:"+new String(decry));

	}
	catch(Exception e)
	{
		System.out.println(e);
	}
}
}