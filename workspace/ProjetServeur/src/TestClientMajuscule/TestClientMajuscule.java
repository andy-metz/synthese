package TestClientMajuscule;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.PrintStream;
import java.net.InetAddress;
import java.net.Socket;

public class TestClientMajuscule {

	public static void main(String[] args) {
		try
		{
		// TODO Auto-generated method stub
		
		String adresseServeur;
		int portServeur;
		
		BufferedReader clavier = new BufferedReader(new InputStreamReader(System.in));
		System.out.println("adresse:");
		adresseServeur = clavier.readLine().trim();
		System.out.println("port:");
		portServeur = Integer.parseInt(clavier.readLine().trim());
		InetAddress adresse = InetAddress.getByName(adresseServeur);
		
		Socket  socket = new Socket(adresse, portServeur);
		System.out.println("connecte"+ socket);
		
		PrintStream fluxSortant = new PrintStream(socket.getOutputStream());
		BufferedReader fluxEntrant = new BufferedReader(new  InputStreamReader(socket.getInputStream()));
		
		boolean stop = false;
				
		do{
			System.out.println("taper chain ou quitter");
			String  requete = clavier.readLine();
			stop = requete.equalsIgnoreCase("quitter");
			if(!stop){
				fluxSortant.println(requete);
				String reponse;
				reponse = fluxEntrant.readLine();
				System.out.println(reponse);
			}
		}while( !stop);
		
		System.out.println("arret");
		
			
		
		 
	}// fin try
	catch(Exception e)
		{
		System.out.println("echec:"+e);
		}

	}
}
