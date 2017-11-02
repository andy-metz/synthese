package Serveur;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintStream;
import java.io.Reader;
import java.net.Socket;

public class ReceveurEnvoyeur extends Thread {

		

	BufferedReader fluxentrant;
	PrintStream fluxsortant;
	int no;
	public ReceveurEnvoyeur(Socket socket, int no) throws IOException
	{

		this.fluxentrant = new BufferedReader(new InputStreamReader(socket.getInputStream()));
		this.fluxsortant = new PrintStream(socket.getOutputStream());
		this.no = no;

	}
	
	
	public void run()
	{
		try
		{
			while(!this.isInterrupted()){
		
			String requete = fluxentrant.readLine();
			String reponse = requete.toUpperCase();
			System.out.println("le client envoie"+ requete);
			
			fluxsortant.println(reponse);
			}
		
	}catch(Exception e)
		{
		System.out.println("arret:"+e);
		}
		
		
		
	}

}
