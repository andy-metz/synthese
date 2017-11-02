package Serveur;

import java.net.ServerSocket;
import java.net.Socket;
import Serveur.ReceveurEnvoyeur;


public class serveur {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		try{
		
		int port = 9111;
		ServerSocket serveur = new ServerSocket(port);
		
		System.out.println("serveur demare"+ serveur);
		
		int no = 1;
		while(true){
			Socket client = serveur.accept();
			System.out.println("client:"+ no);
			++no;
			ReceveurEnvoyeur r = new ReceveurEnvoyeur(client, no);
			r.start();
		}
	}
		catch(Exception e)
		{
			System.err.println("erreur"+e);
		}
	}
}
