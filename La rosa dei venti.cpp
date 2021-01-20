#include<iostream>
using namespace std;

//funzione
void casa ();
void castello();
void foresta();
void labirinto();
void villaggio();
void bivio_vfl();
void scala_montagna();
void cima_montagna();
void morte();
void bivio_md();
void deserto();
void parole_Re();
void piramide();
void portale_drago();
void vittoria();
void inventario();
//variabili
int attacco_scorpione = 0, sentiero_F1 = sentiero_F1, sentiero_F2 = sentiero_F2, chiave = chiave, attacco_tribu = attacco_tribu, armatura = -1, salvataggio = salvataggio, inizio = 0,rampino = rampino, inferno = inferno, opzione, rosa = 0,leva = 0,blocco_piramide = 0,balestra = 0;
char scelta = '0', scelta_due = '0', scelta_tre = '0', scelta_foresta = '0', scelta_montagna = '0', scelta_deserto = '0', scelta_inferno = '0', scelta_labirinto = '0', scelta_drago = '0';
int main() 
{ //start  main
	cout << "\n\n\nLA ROSA DEI VENTI\n\n";
    cout << "---------MENU'------------\n";
	cout << "1) Nuova partita\n";
	cout << "2) Continua partita\n";
	cout << "3) Tutorial\n";
	cout << "0) Exit \n";
	cout << "Scegli: \n";
	cin >> inizio;
	switch (inizio)
	{
		case 1: 
		    scelta = '0', scelta_due = '0', scelta_tre = '0', scelta_foresta = '0', scelta_montagna = '0', scelta_deserto = '0', scelta_inferno = '0', scelta_labirinto = '0', scelta_drago = '0';
		    casa();
		    break;
	    case 2: 
	        scelta = '0', scelta_due = '0', scelta_tre = '0', scelta_foresta = '0', scelta_montagna = '0', scelta_deserto = '0', scelta_inferno = '0', scelta_labirinto = '0', scelta_drago = '0';
		    if(salvataggio == 0)
		    {
		    	casa();
			}
			if(salvataggio == 1)
		    {
		    	castello();
			}
			if(salvataggio == 2)
		    {
		    	foresta();
			}
			if(salvataggio == 3)
		    {
		    	labirinto();
			}
			if(salvataggio == 4)
		    {
		    	villaggio();
			}
			if(salvataggio == 5)
		    {
		    	bivio_vfl();
			}
			if(salvataggio == 6)
		    {
		    	scala_montagna();
			}
			if(salvataggio == 7)
		    {
		    	bivio_md();
			}
			if(salvataggio == 8)
		    {
		    	deserto();
			}
			if(salvataggio == 9)
		    {
		    	parole_Re();
			}
			if(salvataggio == 10)
		    {
		    	cima_montagna();
			}
			if(salvataggio == 11)
		    {
		    	piramide();
			}
			
			break;
	    case 3:
	    	cout << "\n--------------------Tutorial-----------------------\n\n# premere 'i' per aprire l'inventario\n\n# premere 'm' per tornare al menu'\n\n# premere 'invio' dopo a ver digitato il numero corrisondente alla risposta che vuoi dare\n\n-----------------------------------------------\n\n";
	    	system("pause");
	    	main();
		case 0: 
		    sentiero_F1 = 0, sentiero_F2 = 0, chiave = 0, attacco_tribu = 0, armatura = 0, rampino = 0, inferno = 0, scelta = 0, scelta_due = 0, scelta_tre = 0, scelta_foresta = 0,scelta_montagna = 0,scelta_inferno = 0, opzione = 20;
		    break;
	}
	return 0;
	
	
	
	
	

	
	
	
	
	
}//end main


void casa()//inizio gioco
{				
	cout << "\n--------Casa------------------------------------------------------------------------\n\n";
	scelta_due = '0';
	cout << "In una fredda mattinata di gennaio ti svegli di soprassalto per un incubo terribile,\nil cuore ti batte all'impazzata e sembra che stia per scoppiarti, respiri in modo affannato e sudi per la paura,\ndopo qualche minuto riesci a calmarti e vedi la sveglia  che fa le  5,15 \n";
	cout << "Scegli cosa fare:\n";
	while (scelta_due != '1' && scelta_due != '2' && scelta_due != 'm')
	{
		cout << "1) Provi a riprendere sonno\n";
	cout << "2) Ti alzi\n";
	cin >> scelta_due;					
	if (scelta_due == '1')//continua a dormire
	{
		cout << "Cerchi di chiudere gli occhi e fare pensieri positivi per riaddormentarti\n";
		system("pause");		
		cout << "Il tempo passa lentamente ti giro e rigiro nel letto ma non riesci a prendere sonno. Riguardi la sveglia ma sono solo le 6,35 e in quel momento suona il campanello\n";
		while(scelta_due !='2'  && scelta_due != 'm')
		{
			cout << "1) Resti a letto, pensi non sia importante\n";
		cout << "2) Ti alzi e vai ad aprire\n";
		cin >> scelta_due;
		if (scelta_due == '1')//restare a letto
		{
			while (scelta_due == '1')
			{
				cout << "cerchi di non pensare al campanello e di stare a letto per provare a riprendere sonno\n";
				system("pause");				
				cout << "Passano una decina di secondi ma il campanello risuona\n";
				cout << "1) Resti a letto, pensi non sia importante\n";
				cout << "2) Ti alzi e vai ad aprire\n";
				cin >> scelta_due;
				
				            	
			}
						
						    
		}					
		if (scelta_due == '2')//aprire la porta
		{						
			cout << "Ti avvicini alla porta e dallo spioncino vedi il postino.\nApri la porta ed il postino ti da una busta ma non fai neanche in tempo a ringraziarlo che scompare davanti ai tuoi occhi come per magia.\nRimani sorpreso ed incredulo e ti sfreghi piu' volte gli occhi per essere sicuro che non stai sognado\nGuardi la busta che tieni in mano e...\n";
			while (scelta_due !='1' && scelta_due != 'm')
			{
				cout << "1) Apri la busta\n";
			cout << "2) Butti la busta\n";
			cin >> scelta_due;
			if (scelta_due == '1')//apri busta
			{
				scelta_due = 0;
				castello();
				return;	
			}
			if (scelta_due == '2')//andare a lavorare
			{
				cout << "Butti la busta nel cestino del giardino di casa,\nrientri in casa richiudendo la porta e fai colazione.\nFinito la colazione ti prepari per andare in ufficio.\n";
				system("pause");
				cout << " Prendi la macchina per dirigerti verso l'ufficio.\nCome ogni mattina la strada e' molto trafficata e ci impieghi circa 40 minuti.\nArrivi in azienda e prendi l'ascensore per salire al quinto piano.\n"; 
				system("pause");
				cout << "Arrivi davanti alla porta del tuo ufficio e la apri\n";
				system("pause");
				cout << "Appena entri nell'ufficio ti ritrovi nel salotto di casa tua e sul tavolo vedi la busta che avevi buttato, immersa in una luce che sembra provenire dall'interno della busta\n";
				while(scelta_due != '1' && scelta_due != 'm')
				{
					cout << "1) Apri la busta\n";
				cout << "2) Ritorna in ufficio\n";
				cin >> scelta_due;
				if (scelta_due == '2')
				{
					while (scelta_due != '1' && scelta_due != 'm')
					{
						cout << "Un po' scioccato e confuso lasci la busta sul tavolo ed esci da casa tua.\nRiprendi la macchina per dirigerti in ufficio ed arrivato in azienda,\nriprendi l'ascensore per salire al quinto piano. Arrivato davanti alla porta del tuo ufficio,\nla apri e appena entri ti ritrovi di nuovo nel salotto di casa tua e sul tavolo vedi ancora la busta che brilla\n";
						cout << "1) Apri la busta\n";
						cout << "2) Ritorna in ufficio\n";
						cin >> scelta_due;
						if (scelta_due == 'i')
	                    {
		                    inventario();
		            
	                    }									
					}
				}
				if (scelta_due == '1')//apri busta
			    {
				castello();
				return;	
			    }	
				if (scelta_due == 'i')
	            {
		            inventario();
		            
	            }		
				}
					
			}
			if (scelta_due == 'i')
	        {
		        inventario();
	 	        
	        }
						
		    }
			
					
		}
		if (scelta_due == 'i')
	    {
		inventario();
		
     	}
		}
		
				
	}
	if(scelta_due == '2')//ti alzi
	{
		cout << "ti fai una doccia con l'acqua fredda per riprenderti dallo spavento e prepari la colazione con latte e biscotti\n";
		system("pause");	
		cout << "Come addenti il primo biscotto suona il campanello. L'orologio fa le 6,35\n";
		while(scelta_due != '1' && scelta_due !='m')
		{
			cout << "1) Vai ad aprire\n";
		cout << "2) Fingi di non aver sentito e finisci di fare colazione\n";
		cin >> scelta_due;
		if (scelta_due == '1')//aprire la porta
		{
			cout << "Ti avvicini alla porta e dallo spioncino vedi il postino.\nApri la porta ed il postino ti da una busta ma non fai neanche in tempo a ringraziarlo che scompare davanti ai tuoi occhi come per magia.\nRimani sorpreso ed incredulo e ti sfreghi piu' volte gli occhi per essere sicuro che non stai sognado\nGuardi la busta che tieni in mano e...\n";
			while(scelta_due != '2' && scelta_due!= 'm')
			{
				cout << "1) Apri la busta\n";
			cout << "2) Butti la busta\n";
			cin >> scelta_due;
			if (scelta_due == '1')//apro busta
			{
				scelta_due = 0;
				castello();
				return;
			}
			if (scelta_due == '2')//andare a lavorare
			{
				cout << "Butti la busta nel cestino del giardino di casa, rientri in casa richiudendo la porta e finisci la colazione.\nFinita la colazione ti prepari per andare in ufficio.\n"; 
				system("pause");
				cout << "Prendi la macchina per dirigerti verso l'ufficio.\nCome ogni mattina la strada e' molto trafficata e ci impieghi circa 40 minuti.\nArrivi in azienda, prendi l'ascensore per salire al quinto piano.\n"; 
				system("pause");
				cout << "Arrivi davanti alla porta del tuo ufficio e la apri\n"; 
				system("pause");
				cout << "Appena entri nell'ufficio ti ritrovi nel salotto di casa tua e sul tavolo vedi la busta che brilla\n";
				while (scelta_due != '1' && scelta_due != 'm')
				{
					cout << "1) Apri la busta\n";
				cout << "2) Ritorna in ufficio\n";
				cin >> scelta_due;
				if (scelta_due == '2')
				{
					while (scelta_due != '1' && scelta_due != 'm')//ritorna in ufficio
					{
						cout << "Un po' scioccato e confuso lasci la busta sul tavolo ed esci da casa tua.\nRiprendi la macchina per dirigerti in ufficio ed arrivato in azienda,\nriprendi l'ascensore per salire al quinto piano. Arrivato davanti alla porta del tuo ufficio,\nla apri e appena entri i ritrovi di nuovo nel salotto di casa tua e sul tavolo vedi ancora la busta che brilla\n";
						cout << "1) Apri la busta\n";
						cout << "2) Ritorna in ufficio\n";
						cin >> scelta_due;
						if (scelta_due == 'i')
	                    {
		                    inventario();		
	                    }
					}
				}
				if (scelta_due == '1')//apri busta
		     	{
				    scelta_due = 0; 
					castello();
				    return;	
			    }
			    if (scelta_due == 'i')
	            {
		          inventario();		
	            }
			    
				}
				
			}
			if (scelta_due == 'i')
	        {
		       inventario();		
	        }
			
			}
			
					
	    }
		if (scelta_due == '2')//finire la colazione
		{
			while (scelta_due == '2')
			{
				cout << "Cerchi di non pensare al campanello e continui a fare colazione\n";
				system("pause");				
				cout << "Ma appena addenti lo stesso biscotto suona ancora il campanello\n";
				cout << "1) Vai ad aprire\n";
				cout << "2) fingi di non aver sentito e finisci di fare colazione\n";
				cin >> scelta_due;
				
				
			}
		}
		if (scelta_due == 'i')
	    {
		inventario();		
	    }		
		}
		
	}
	if (scelta_due == 'i')
	{
		inventario();
		
	}
	}
	
	if (scelta_due == 'm')
	{
		main();
		return;
	}
	if (scelta_due == 'i')
	{
		inventario();
		
	}
	
}
//-----------------------------------------------------------------------------------------castello-------------------------------------------------------------------------------------------------------------------		    
void castello()//castello (parlare con il re)
{
	cout << "Salvataggio progresso...\n";
	salvataggio = 1;
	scelta_tre = '0';
	system("pause");
	cout << "appena apri la busta sei catapultato in un borgo medievale parzialmente bruciato dalle fiamme.\nGuardandoti intorno vedi che la gente del posto e' molto terrorizzata.\n";
	system("pause");
	cout << "Ad un tratto si avvicina un cavaliere visibilmente provato e inizia a parlarti:''finalmente!! Ti aspettavamo!! Il Re vuole riceverti al suo castello. Non fare domande e seguimi, il Re ti spieghera' tutto.\n"; 
	system("pause");
	cout << "\n-------------Castello del Re--------------------------------------------------------------------------------------\n\n";
	cout << "Arrivato al castello si abbassa il ponte levatoio ed entrate. Il cavaliere ti accompagna dinnanzi al Re.\n";
	system("pause");
	cout << "Re:''benvenuto nel mio regno. Come tu ben sai ti stavamo aspettando''\n";
	while(scelta_tre !='m')
	{
		cout << "1) perche'?\n";
	cin >> scelta_tre;
	if (scelta_tre == '1')
	{
		cout << "Re:''il mio regno e' in pericolo e solo tu hai il potere di prendere l'arma del dragone e di salvarlo''\n";
		while (scelta_tre != '4' && scelta_tre != 'm')
		{
		    cout << "1) Perche' proprio io?\n";
		    cout << "2) Da cosa e' in pericolo?\n";
		    cout << "3) Di quale arma si tratta?\n";
		    cout << "4) Sono pronto a salvarlo\n";
		    cin >> scelta_tre;
		    if (scelta_tre == '1')
		    {
		        cout << "Re:''tu sei l'unico che ha il potere di utilizzare l'arma che sconfiggera' colui che vuole distruggere il villaggio''\n";
			}
			if (scelta_tre == '2')
		    {
		       	cout << "Re:''il mio regno e' minacciato da un enorme drago che vive in un'altra dimensione diversa dal mondo normale''\n";
			}
			if (scelta_tre == '3')
		    {
		        cout << "Re:''si tratta di una balestra d'orata con una freccia con la punta di diamante''\n";
			}
			if(scelta_tre == 'i')
			{
				inventario();
			}										
		}
		if (scelta_tre == '4')//accettazione del compito
		{
			armatura = 0;
			cout << "Re:'il mio regno te ne sara'grato, prendi questa spada e questa armatura, ti serviranno durante il percorso che dovrai affrontare.\nDovrai attraversare la foresta nebulosa al di la della quale troverai due strade,\nuna arida e ventosa e l'altra verde e scoscesa.\nAttraversando una di queste strade troverai la chiave per aprire la porta\nche si trova alla fine del labirinto. Al'interno vi troverai la balestra d'oro per sconfiggere il drago.\nSe sceglierai la strada sbagliata troverai la Morte.''\n";
			while (scelta_tre != '3' && scelta_tre !='m')
			{
				cout << "1) Dove si trova il portale dimensionale?\n";
				cout << "2) Come faccio a sapere quale sentiero prendere?\n";
				cout << "3) Prendi la spada, indossi l'armatura e incamminati per l'avventura\n";
				cin >> scelta_tre;
				if (scelta_tre == '1')
				{
					cout << "Re:''il portale dimensionale si trova al centro del labirinto.\nEntrando in questo portale verrai teletrasportato nella dimensione del drago dove dovrai sconfiggerlo.''\n";
				}
				if (scelta_tre == '2')
				{
					cout << "Re:''una volta attraversata la foresta nebulosa dovrai scegliere il sentiero dove:\nuna rosa pervasa di spine ma che non punge, risorge nel vento e nella quiete del silenzio rinasce.\nSenza acqua non muore, profuma dell'attimo cristallino imbevuto in una stilla di luce\n";
				}
				if(scelta_tre == 'i')
			    {
				inventario();
			    }
				
			
			}
			if (scelta_tre == '3')//uscita villagio
			{
				cout << "Uscito dal villaggio ti trovi davanti ad un bivio\n";
				while (scelta_tre != '1' && scelta_tre != '2' && scelta_tre != 'm')
				{
						cout << "1) Est\n";
				cout << "2) Ovest\n";
				cout << "3) Ritorna al villaggio\n";
				cin >> scelta_tre;
				if (scelta_tre == '1')//prosegui direzione foresta
				{					
					if(sentiero_F1 == 0)
		            {
			            opzione = 0;
		            }
		            if(sentiero_F1 != 0)
		            {
			            opzione = 1;					
		            }
		            
					foresta();
					return;
								
				}
				if (scelta_tre == '2')//proseguo direzione labirinto
				{
					cout << "Prendi la direzione ovest e ti trovi d'avanti un enorme labirinto fatto tutto di siepi\n";
	                while(scelta_tre != '1' && scelta_tre != 'm')
	                {
	                	cout << "1) Entra nel labirinto\n";
	                cout << "2) Torna indietro\n";
	                cin >> scelta_tre;
	                if(scelta_tre == '1')
	                {
		                cout << "Entrando nel labirinto ";
		                
		               
						labirinto();
					    return;
	                }
	                if(scelta_tre == '2')
	                {
	                	                	
		                bivio_vfl();
		                return;
 	                }
 	                if(scelta_tre == 'i')
 	                {
 	    	            inventario();
	            	}
					}
					
					
				}
				if (scelta_tre == '3')//torna al villaggio
				{
					
					villaggio();
					return;
				}
				if(scelta_tre == 'i')
			    {
				    inventario();
			    }
				}
				
				
										
			}					
		}	
	}
	if(scelta_tre == 'i')
	{
		inventario();
	}
	
	}
	if (scelta_tre == 'm')//torna al menù
	{
		   main();
		return;
	}
				
}
//-------------------------------------------------------------------------------------foresta------------------------------------------------------------------------------------------------
void foresta()
{
		cout << "Salvataggio progresso...\n";
		scelta_foresta = '0';
	    salvataggio = 2;
		system("pause");
		cout << "\n------------------------------Foresta-------------------------------\n\n";
		cout << "Vai verso est ti ritrovi dentro ad una foresta molto fitta e ricoperta da un alto strato di nebbia. Per questo motivo la visione e' molto limitata\n";
		while(scelta_foresta != '1' && scelta_foresta != '2' && scelta_foresta != 'm')
		{
			cout << "1) Prosegui\n";
		cout << "2) Torna indietro\n";
		cin >> scelta_foresta;
		if (scelta_foresta == '1')
		{
			if (sentiero_F1 == 0)//tronco non tolto
			{				
			   	cout << "Avanzi ma trovi il sentiero bloccato da alberi caduti\n";
			   	while (scelta_foresta != '2' && scelta_foresta != '3' && scelta_foresta != 'm')
			   	{
			   		cout << "1) Trova un'altra via\n";
			   	cout << "2) Libera il passaggio utilizzando la spada\n";
			   	cout << "3) Torna indietro\n";
			   	cin >> scelta_foresta;
			   	if (scelta_foresta == '1')//via della palude
			   	{
			   	    if (sentiero_F2 != 0)//palude già superata 
			   	    {
			   	       	cout << "Cambi sentiero e ti imbatti in una palude ma sapendo come affrontarla\nafferri con decisione una liana e salti da una liana all'altra superandola con grande facilita\n";
			   	       	while(scelta_foresta != '2' && scelta_foresta != 'm')
			   	       	{
			   	       		  cout << "1) Prosegui\n";
			   	       	cout << "2) Torna indietro\n";
			   	       	cin >> scelta_foresta;
			   	       	if (scelta_foresta == '1')//uscito dalla foresta avendo superata la palude
			   	       	{
			   	       		cout << "Continui il tuo percorso e riesci ad uscire dalla foresta. Ti imbatti in un altro bivio, a destra vi e una zona verde e scoscesa invece a sinistra vi e' una zona arida e ventosa\n";
							while(scelta_foresta != '2' && scelta_foresta != '3' && scelta_foresta != 'm')
							{
								cout << "1) Destra\n";
							cout << "2) Sinistra\n";								    
							cout << "3) Torna indietro\n";
							if (chiave == 0)
							{
								cout << "4) Ricordati le parole del Re\n";
							}
							cin >> scelta_foresta;
							if(scelta_foresta == '1')//percorso montagna
							{
								
								if(rampino == 0)
		                        {
			                        opzione = 3;
		                        }
		                        if(rampino != 0)
	                          	{
			                        opzione = 4;
	                            }
	                            scelta_foresta = 0;
								scala_montagna();
								return;
							}
							if(scelta_foresta == '2')//percorso deserto
							{
								scelta_foresta = 0;
								deserto();
								return;
							}
							if(scelta_foresta == '4')//ricordare le parole del Re
							{			
							     scelta_foresta = 0;				
								parole_Re();								
								return;
							}
							if(scelta_foresta == '3')//tornare indietro
							{
								scelta_foresta = 0;
								cout << "Risuperi la foresta passando dalla palude\n";
			   	       			system("pause");
			   	       			bivio_vfl();
								return;										
							}
							if(scelta_foresta == 'i')
							{
								inventario();
							}	
							}
													    
						}
						if (scelta_foresta == '2')//tornare indietro dalla palude
			   	       	{
			   	       		scelta_foresta = 0;
			   	       		cout << "Risuperi la palude con grande abilita' ed esci dalla foresta\n";
			   	       		system("pause");
			   	       		bivio_vfl();
			   	       		return;
						}
						if(scelta_foresta == 'i')
						{
							inventario();
						}
				        }
							
				    }
					if (sentiero_F2 == 0)//palude non superata
					{
						cout << "Cambi sentiero e ti imbatti in una palude. Ti accorgi che stai sprofondando lentamente nella terra melmosa e capisci che sei in pericolo\n";
			   	       	while(scelta_foresta != '2' && scelta_foresta != 'm')
			   	       	{
			   	       		cout << "1) Guardati intorno\n";
			   	       	cout << "2) Prova a liberarti dalla melma scuotendoti\n";
			   	       	cin >> scelta_foresta;
			   	       	if (scelta_foresta == '1')//cerca liana
			   	       	{
			   	       		cout << "Ti guardi intorno e vedi delle liane. Ti appendi ad esse e cerchi di uscire\n"; 
			   	       		system("pause");
			   	       		cout << "Con molta fatica e tenacia riesci ad uscire\n";			   	       		
			   	       		while(scelta_foresta != '2' && scelta_foresta != 'm')
			   	       		{
			   	       			cout << "1) Prosegui\n";
			   	       		cout << "2) Torna indietro\n";
			   	       		cin >> scelta_foresta;
			   	       		if (scelta_foresta == '1')//uscito dalla palude
			   	       		{
			   	       		    cout << "Continui il tuo percorso e riesci ad uscire dalla foresta. Ti imbatti in un altro bivio, a destra vi e una zona verde e scoscesa invece a sinistra vi e' una zona arida e ventosa\n";
			   	       		    sentiero_F2 = 1;
								while(scelta_foresta != '2' && scelta_foresta != '3' && scelta_foresta != 'm')
								{
									cout << "1) Destra\n";
								cout << "2) Sinistra\n";								        
								cout << "3) Torna indietro\n";
								if (chiave == 0)
								{
								    cout << "4) Ricordati le parole del Re\n";
								}
								cin >> scelta_foresta;
								if(scelta_foresta == '1')//percorso montagna
								{
								    if(rampino == 0)
		                            {
			                            opzione = 3;
		                            }
		                            if(rampino != 0)
	                          	    {
			                            opzione = 4;
	                                }
	                                scelta_foresta = 0;
									scala_montagna();
								    return;
								}
								if(scelta_foresta == '2')//percorso deserto
								{
									scelta_foresta = 0;
								    deserto();
								    return;
								}
								if(chiave == 0)
							    {
							     	if(scelta_foresta == '4')//ricordati le parole del Re
								{
									scelta_foresta = 0;
								    parole_Re();
								    return;
								}
								}
								
								if(scelta_foresta == '3')//torna indietro dalla foresta
								{
								    cout << "Risuperi la foresta passando dalla palude\n";
			   	       				system("pause");
									scelta_foresta = 0;			   	       				
			   	       				bivio_vfl();
			   	       				return;
								}
								if(scelta_foresta == 'i')
								{
									inventario();
								}
								}
								
							}
							if (scelta_foresta == '2')//torna indietro dalla palude
			   	       		{
			   	       			
			   	       		    cout << "Risuperi la palude con grande abilita' ed esci dalla foresta\n";
			   	       			system("pause");
								scelta_foresta = 0;			   	       			
			   	       			bivio_vfl();
			   	       			return;
							}
							if(scelta_foresta == 'i')
							{
								inventario();
							}
							}
									  		    
						}
						if (scelta_foresta == '2')//morte nella palude
			   	       	{
			   	       		cout << "Preso dalla paura di non farcela, ti agiti ma sprofondi sempre di piu' fino ad essere inghiottito dalla melma\n";
			   	       		system("pause");
			   	       		cout << "Hai perso\n";
			   	       		system("pause");
			   	       		main();
			   	       		return;
						}
						if(scelta_foresta == 'i')
						{
							inventario();
						}
						}
							  		   	       		    
					}
			   	       		 
				}
				if (scelta_foresta == '2')//distruggere tronco
			   	{
			   	    cout << "Una volta liberato il sentiero dai tronchi puoi proseguire\n";	
					sentiero_F1 = 1;		   	    
			   	    while(scelta_foresta != '1' && scelta_foresta != 'm')
			   	    {
			   	         cout << "1) Prosegui\n";
			   	    cout << "2) Torna indietro\n";
			   	    cin >> scelta_foresta;
			   	    if (scelta_foresta == '1')
			   	    {
			   	       	cout << "Segui il sentiero ma vieni circondato da una tribu di uomini carnivori che cercano di catturarti\n";
				        while(scelta_foresta != '2' && scelta_foresta != 'm')
				        {
				            cout << "1) Attacca\n";
				        cout << "2) Lasciati catturare senza opporre resistenza\n";
				        cin >> scelta_foresta;
				        if (scelta_foresta == '1')//attacco la tribù e esco dalla foresta
				        {
				            
							if(armatura == 0)
							{
								cout << "Tiri fuori la spada e combatti contro la tribu' schivando le loro lance. Dopo una difficile battaglia riesci a fuggire e continui il tuo percorso\n";
				            system("pause");
				            cout << "Esci dalla foresta e ti imbatti in un altro bivio, a destra vi e' una zona verde e scoscesa invece a sinistra vi e' una zona arida e ventosa\n";
				            attacco_tribu = 1;							
				            while(scelta_foresta != '2' && scelta_foresta != '3' && scelta_foresta != 'm')
				            {
				            	cout << "1) Destra\n";
							cout << "2) Sinistra\n";								    
							cout << "3) Torna indietro\n";
							if (chiave == 0)
							{
								cout << "4) Ricordati le parole del Re\n";
							}
							cin >> scelta_foresta;
							if(scelta_foresta == '1')//percorso montagna
							{
								if(rampino == 0)
		                        {
			                        opzione = 3;
		                        }
		                        if(rampino != 0)
	                          	{
			                        opzione = 4;
	                            }
	                            scelta_foresta = 0;
								scala_montagna();
								return;
							}
							if(scelta_foresta == '2')//percorso deserto
							{
								scelta_foresta = 0;
								deserto();
								return;
							}
							if(chiave == 0)
							{
								if(scelta_foresta == '4')//ricordati le parole del Re
							{
								scelta_foresta = 0;
								parole_Re();
								return;
							}
							}
							
							if(scelta_foresta == '3')//torna indietro dalla foresta
							{
								cout << "Risuperi la foresta ormai libera dalla tribu'\n";
			   	       			system("pause");
									  scelta_foresta = 0;			   	       			
			   	       			bivio_vfl();
			   	       			return;
							}
							if(scelta_foresta == 'i')
		              		{
				               	inventario();
			                }
							}
								
							}
							if (armatura == 1)
							{
								cout << "Combatti contro la tribu' schivando le loro lance. Dopo una difficile battaglia riesci a fuggire e continui il tuo percorso\n";
				            system("pause");
				            cout << "Esci dalla foresta e ti imbatti in un altro bivio, a destra vi e' una zona verde e scoscesa invece a sinistra vi e' una zona arida e ventosa\n";
				            attacco_tribu = 1;							
				            while(scelta_foresta != '2' && scelta_foresta != '3' && scelta_foresta != 'm')
				            {
				            	cout << "1) Destra\n";
							cout << "2) Sinistra\n";								    
							cout << "3) Torna indietro\n";
							if (chiave == 0)
							{
								cout << "4) Ricordati le parole del Re\n";
							}
							cin >> scelta_foresta;
							if(scelta_foresta == '1')//percorso montagna
							{
								if(rampino == 0)
		                        {
			                        opzione = 3;
		                        }
		                        if(rampino != 0)
	                          	{
			                        opzione = 4;
	                            }
	                            scelta_foresta = 0;
								scala_montagna();
								return;
							}
							if(scelta_foresta == '2')//percorso deserto
							{
								scelta_foresta = 0;
								deserto();
								return;
							}
							if(chiave == 0)
							{
								if(scelta_foresta == '4')//ricordati le parole del Re
							{
								scelta_foresta = 0;
								parole_Re();
								return;
							}
							}
							
							if(scelta_foresta == '3')//torna indietro dalla foresta
							{
								cout << "Risuperi la foresta ormai libera dalla tribu'\n";
			   	       			system("pause");
								scelta_foresta = 0;			   	       			
			   	       			bivio_vfl();
			   	       			return;
							}
							if(scelta_foresta == 'i')
			               	{
				             	inventario();
			                }	
							}
							
							}		
						}
						if (scelta_foresta == '2')//cattura dalla tribù
				        {
				            if(armatura == 0)
				            {
				            	cout << "Ti lasci catturare dai selvaggi che ti portano dal loro capo\n"; 
				            system("pause");
				            cout << "Capo:''preparate il pentolone''.\nTi privano di spada ed armatura e ti spingono con forza dentro una gabbia di bambu' legati con delle corde. Intanto vedi che accendono un fuoco e ci mettono sopra un pentolone pieno di acqua. Intuisci che fine potresti fare e...\n";
				            armatura = 1;
				            while(scelta_foresta != '1' && scelta_foresta != 'm')
				            {
				            	cout << "1) Guardati intorno\n";
				            cout << "2) Rompi la gabbia di bambu'\n";
				            cin >> scelta_foresta;
				            if (scelta_foresta == '1')//scappa dalla gabbia
				            {
				                cout << "Mentre la tribu' ringrazia il loro dio per la trovata cena,\nriesci a trovare una pietra tagliente e la utilizzi per rompere le corda che legano i bambu'. Sfili senza far rumore il bambu' e riesci ad aprirti un varco\nscappi silenziosamente lasciando pero' alla tribu' la spada e l'armatura\n";
				                system("pause");
				                attacco_tribu = 1;
				                armatura = 1;
				                cout << "Una volta scappato dalla tribu' riesci ad uscire dalla foresta e ti imbatti in un altro bivio. A destra vi e' una zona verde e scoscesa invece a sinistra vi e' una zona arida e ventosa\n";
				                while(scelta_foresta != '2' && scelta_foresta != '3' && scelta_foresta != 'm')
				                {
				                	cout << "1) Destra\n";
								cout << "2) Sinistra\n";								        
								cout << "3) Torna indietro\n";
								if (chiave == 0)
								{
								    cout << "4) Ricordati le parole del Re\n";
								}
								cin >> scelta_foresta;
								if(scelta_foresta == '1')//percorso montagna
								{
								    
									if(rampino == 0)
		                            {
			                            opzione = 3;
		                            }
		                            if(rampino != 0)
	                          	    {
			                            opzione = 4;
	                                }
	                                scelta_foresta = 0;
									scala_montagna();
								    return;
								}
								if(scelta_foresta == '2')//percorso deserto
								{
									scelta_foresta = 0;
								    deserto();
								    return;
								}
								if(chiave == 0)
								{
										if(scelta_foresta == '4')//ricordati le parole del Re
								{
									scelta_foresta = 0;
								    parole_Re();
								    return;
								}
								}
							
								if(scelta_foresta == '3')//torna indietro dalla foresta
								{
								    cout << "Risuperi la foresta senza farti notare dalla tribu'\n";
			   	       				system("pause");
										  scelta_foresta = 0;		   	       				
			   	       				bivio_vfl();
			   	       				return;
								}
								if(scelta_foresta == 'i')
			                 	{
				                	inventario();
			                    }	
								}
										
							}
							if (scelta_foresta == '2')//dentro al pentolone
				            {
				                cout << "Mentre la tribu' ringrazia il loro dio per la trovata cena, provi a tirare dei pugni e a rompere il bambu'. Riesci ad aprire un varco per scappare,\nma hai causato un sacco di rumore e la tribu' si accorge della tua fuga\n";
				                system("pause");
				                cout << " Prendono un dardo con un sonnifero e ti sparano.\nAl risveglio ti senti bruciare e ti accorgi di essere dentro al pentolone\n";
				                system("pause");
				                cout << "Hai perso\n";
				                system("pause");
				                main();
				                return;
							}
							if(scelta_foresta == 'i')
			              	{
				               	inventario();
			                }
							}
								
							}
							if(armatura == 1)
				            {
				            	cout << "Ti lasci catturare dai selvaggi che ti portano dal loro capo\n"; 
				            system("pause");
				            cout << "Capo:''preparate il pentolone''.\nTi spingono con forza dentro una gabbia di bambu' legati con delle corde. Intanto vedi che accendono un fuoco e ci mettono sopra un pentolone pieno di acqua. Intuisci che fine potresti fare e...\n";
				            while(scelta_foresta != '1' && scelta_foresta != 'm')
				            {
				                 	cout << "1) Guardati intorno\n";
				            cout << "2) Rompi la gabbia di bambu'\n";
				            cin >> scelta_foresta;
				            if (scelta_foresta == '1')//scappa dalla gabbia
				            {
				                cout << "Mentre la tribu' ringrazia il loro dio per la trovata cena,\nriesci a trovare una pietra tagliente e la utilizzi per rompere le corda che legano i bambu'. Sfili senza far rumore il bambu' e riesci ad aprirti un varco\nscappi silenziosamente lasciando pero' alla tribu' la spada e l'armatura\n";
				                system("pause");
				                attacco_tribu = 1;
				                armatura = 1;
				                cout << "Una volta scappato dalla tribu' riesci ad uscire dalla foresta e ti imbatti in un altro bivio. A destra vi e' una zona verde e scoscesa invece a sinistra vi e' una zona arida e ventosa\n";
				                while(scelta_foresta != '2' && scelta_foresta != '3' && scelta_foresta != 'm')
				                {
				                	cout << "1) Destra\n";
								cout << "2) Sinistra\n";								        
								cout << "3) Torna indietro\n";
								if (chiave == 0)
								{
								    cout << "4) Ricordati le parole del Re\n";
								}
								cin >> scelta_foresta;
								if(scelta_foresta == '1')//percorso montagna
								{
								    
									if(rampino == 0)
		                            {
			                            opzione = 3;
		                            }
		                            if(rampino != 0)
	                          	    {
			                            opzione = 4;
	                                }
	                                scelta_foresta = 0;
									scala_montagna();
								    return;
								}
								if(scelta_foresta == '2')//percorso deserto
								{
									scelta_foresta = 0;
								    deserto();
								    return;
								}
								if(chiave == 0)
								{
									if(scelta_foresta == '4')//ricordati le parole del Re
								{
									scelta_foresta = 0;
								    parole_Re();
								    return;
								}
								}
								
								
								if(scelta_foresta == '3')//torna indietro dalla foresta
								{
								    cout << "Risuperi la foresta senza farti notare dalla tribu'\n";
			   	       				system("pause");	
										  scelta_foresta = 0;	   	       				
			   	       				bivio_vfl();
			   	       				return;
								}
								if(scelta_foresta == 'i')
			                	{
				                	inventario();
			                    }		
								}
									
							}
							if (scelta_foresta == '2')//dentro al pentolone
				            {
				                cout << "Mentre la tribu' ringrazia il loro dio per la trovata cena, provi a tirare dei pugni e a rompere il bambu'. Riesci ad aprire un varco per scappare,\nma hai causato un sacco di rumore e la tribu' si accorge della tua fuga\n";
				                system("pause");
				                cout << " Prendono un dardo con un sonnifero e ti sparano.\nAl risveglio ti senti bruciare e ti accorgi di essere dentro al pentolone\n";
				                system("pause");
				                cout << "Hai perso\n";
				                system("pause");
				                main();
				                return;
							}
							if(scelta_foresta == 'i')
			               	{
				             	inventario();
			                }		
							}
						
							}	
						}
						if(scelta_foresta == 'i')
			            {
				            inventario();
			            }
						
							
					    }
					    if(scelta_foresta == 'i')
				        {
					        inventario();
			            }	
					}
				    if (scelta_foresta == '2')//torna indietro
			   	    {
			   	       	scelta_foresta = 0;
						bivio_vfl();
			   	       	return;
				    }
					if(scelta_foresta == 'i')
				    {
					   inventario();
			        }	
				    }
					
				}
				if (scelta_foresta == '3')//torna indietro
			   	{
			   		scelta_foresta = 0;
			   	    bivio_vfl();
			   	    return;
				}
				if(scelta_foresta == 'i')
				{
					inventario();
			    }			   	    	
			}
			   
		    }
			if (sentiero_F1 != 0)//tronco già tolto
			{
			    cout << "Ti addentri nella foresta e ti ritrovi di fronte due strade, una dove il sentiero prosegue libero dalle erbacce e l'altra ricoperta da erbacce\n";
			    while(scelta_foresta != '2' && scelta_foresta != '3' & scelta_foresta != 'm')
			    {
			    	cout << "1) Segui il sentiero\n";
			    cout << "2) Prendi la strada ricoperta d'erba\n";
			    cout << "3) Torna indietro\n";
			    cin >> scelta_foresta;
				if (scelta_foresta == '1')
				{
					if (attacco_tribu == 0)
					{										   	       		    
			   	       	cout << "Prosegui per il sentiero libero da erbacce e dopo qualche minuto di camminata vieni circondato da una tribu' di uomini carnivori  che cercano di catturarti\n";
				        while(scelta_foresta != '2' && scelta_foresta != 'm')
				        {
				        	cout << "1) Attacca\n";
				        cout << "2) Lasciati catturare senza opporre resistenza\n";
				        cin >> scelta_foresta;
				        if (scelta_foresta == '1')//attacco la tribù e esco dalla foresta
				        {
				            if(armatura == 0)
							{
								cout << "Tiri fuori la spada e combatti contro la tribu' schivando le loro lance. Dopo una difficile battaglia riesci a fuggire e continui il tuo percorso\n";
				            system("pause");
				            cout << "Esci dalla foresta e ti imbatti in un altro bivio, a destra vi e' una zona verde e scoscesa invece a sinistra vi e' una zona arida e ventosa\n";
				            attacco_tribu = 1;							
				            while(scelta_foresta != '2' && scelta_foresta != '3' && scelta_foresta != 'm')
				            {
				            	cout << "1) Destra\n";
							cout << "2) Sinistra\n";								    
							cout << "3) Torna indietro\n";
							if (chiave == 0)
							{
								cout << "4) Ricordati le parole del Re\n";
							}
							cin >> scelta_foresta;
							if(scelta_foresta == '1')//percorso montagna
							{
								if(rampino == 0)
		                        {
			                        opzione = 3;
		                        }
		                        if(rampino != 0)
	                          	{
			                        opzione = 4;
	                            }
	                            scelta_foresta = 0;
								scala_montagna();
								return;
							}
							if(scelta_foresta == '2')//percorso deserto
							{
								scelta_foresta = 0;
								deserto();
								return;
							}
							if(chiave == 0)
							{
									if(scelta_foresta == '4')//ricordati le parole del Re
							{
								scelta_foresta = 0;
								parole_Re();
								return;
							}
							}
						
							if(scelta_foresta == '3')//torna indietro dalla foresta
							{
								cout << "Risuperi la foresta ormai libera dalla tribu'\n";
			   	       			system("pause");	
									  scelta_foresta = 0;		   	       			
			   	       			bivio_vfl();
			   	       			return;
							}
							if(scelta_foresta == 'i')
			             	{
				              	inventario();
			                }	
							}
							
							}
							if (armatura == 1)
							{
								cout << "Combatti contro la tribu' schivando le loro lance. Dopo una difficile battaglia riesci a fuggire e continui il tuo percorso\n";
				            system("pause");
				            cout << "Esci dalla foresta e ti imbatti in un altro bivio, a destra vi e' una zona verde e scoscesa invece a sinistra vi e' una zona arida e ventosa\n";
				            attacco_tribu = 1;							
				            while(scelta_foresta != '2' && scelta_foresta != '3' && scelta_foresta != 'm')
				            {
				                cout << "1) Destra\n";
							cout << "2) Sinistra\n";								    
							cout << "3) Torna indietro\n";
							if (chiave == 0)
							{
								cout << "4) Ricordati le parole del Re\n";
							}
							cin >> scelta_foresta;
							if(scelta_foresta == '1')//percorso montagna
							{
								if(rampino == 0)
		                        {
			                        opzione = 3;
		                        }
		                        if(rampino != 0)
	                          	{
			                        opzione = 4;
	                            }
	                            scelta_foresta = 0;
								scala_montagna();
								return;
							}
							if(scelta_foresta == '2')//percorso deserto
							{
								scelta_foresta = 0;
								deserto();
								return;
							}
							if(chiave == 0)
							{
								if(scelta_foresta == '4')//ricordati le parole del Re
							{
								scelta_foresta = 0;
								parole_Re();
								return;
							}
							}
							
							if(scelta_foresta == '3')//torna indietro dalla foresta
							{
								cout << "Risuperi la foresta ormai libera dalla tribu'\n";
			   	       			system("pause");
									  scelta_foresta = 0;			   	       			
			   	       			bivio_vfl();
			   	       			return;
							}
							if(scelta_foresta == 'i')
			               	{    
				              	inventario();
			                }		
							}
							
							}		
															
						}
						if (scelta_foresta == '2')//cattura dalla tribù
				        {
				            if(armatura == 0)
				            {
				            	cout << "Ti lasci catturare dai selvaggi che ti portano dal loro capo\n"; 
				            system("pause");
				            cout << "Capo:''preparate il pentolone''.\nTi privano di spada ed armatura e ti spingono con forza dentro una gabbia di bambu' legati con delle corde. Intanto vedi che accendono un fuoco e ci mettono sopra un pentolone pieno di acqua. Intuisci che fine potresti fare e...\n";
				            armatura = 1;
				            while(scelta_foresta != '1' && scelta_foresta != 'm')
				            {
				            	cout << "1) Guardati intorno\n";
				            cout << "2) Rompi la gabbia di bambu'\n";
				            cin >> scelta_foresta;
				            if (scelta_foresta == '1')//scappa dalla gabbia
				            {
				                cout << "Mentre la tribu' ringrazia il loro dio per la trovata cena,\nriesci a trovare una pietra tagliente e la utilizzi per rompere le corda che legano i bambu'. Sfili senza far rumore il bambu' e riesci ad aprirti un varco\nscappi silenziosamente lasciando pero' alla tribu' la spada e l'armatura\n";
				                system("pause");
				                attacco_tribu = 1;
				                armatura = 1;
				                cout << "Una volta scappato dalla tribu' riesci ad uscire dalla foresta e ti imbatti in un altro bivio. A destra vi e' una zona verde e scoscesa invece a sinistra vi e' una zona arida e ventosa\n";
				                while(scelta_foresta != '2' && scelta_foresta != '3' && scelta_foresta != 'm')
				                {
				                	cout << "1) Destra\n";
								cout << "2) Sinistra\n";								        
								cout << "3) Torna indietro\n";
								if (chiave == 0)
								{
								    cout << "4) Ricordati le parole del Re\n";
								}
								cin >> scelta_foresta;
								if(scelta_foresta == '1')//percorso montagna
								{
								    
									if(rampino == 0)
		                            {
			                            opzione = 3;
		                            }
		                            if(rampino != 0)
	                          	    {
			                            opzione = 4;
	                                }
	                                scelta_foresta = 0;
									scala_montagna();
								    return;
								}
								if(scelta_foresta == '2')//percorso deserto
								{
									scelta_foresta = 0;
								    deserto();
								    return;
								}
								if (chiave == 0)
								{
										if(scelta_foresta == '4')//ricordati le parole del Re
								{
									scelta_foresta = 0;
								    parole_Re();
								    return;
								}
								}
								
							
								if(scelta_foresta == '3')//torna indietro dalla foresta
								{
								    cout << "Risuperi la foresta senza farti notare dalla tribu'\n";
			   	       				system("pause");		   	       				
			   	       				bivio_vfl();
			   	       				return;
								}
								if(scelta_foresta == 'i')
			                	{
			               	     	inventario();
			                    }
								}
											
							}
							if (scelta_foresta == '2')//dentro al pentolone
				            {
				                cout << "Mentre la tribu' ringrazia il loro dio per la trovata cena, provi a tirare dei pugni e a rompere il bambu'. Riesci ad aprire un varco per scappare,\nma hai causato un sacco di rumore e la tribu' si accorge della tua fuga\n";
				                system("pause");
				                cout << " Prendono un dardo con un sonnifero e ti sparano.\nAl risveglio ti senti bruciare e ti accorgi di essere dentro al pentolone\n";
				                system("pause");
				                cout << "Hai perso\n";
				                system("pause");
				                main();
				                return;
							}
							if(scelta_foresta == 'i')
			             	{
			               		inventario();
			                }	
							}
							if(armatura == 1)
				            {
				            	cout << "Ti lasci catturare dai selvaggi che ti portano dal loro capo\n"; 
				            system("pause");
				            cout << "Capo:''preparate il pentolone''.\nTi spingono con forza dentro una gabbia di bambu' legati con delle corde. Intanto vedi che accendono un fuoco e ci mettono sopra un pentolone pieno di acqua. Intuisci che fine potresti fare e...\n";
				            while(scelta_foresta != '1' && scelta_foresta != 'm')
				            {
				            	cout << "1) Guardati intorno\n";
				            cout << "2) Rompi la gabbia di bambu'\n";
				            cin >> scelta_foresta;
				            if (scelta_foresta == '1')//scappa dalla gabbia
				            {
				                cout << "Mentre la tribu' ringrazia il loro dio per la trovata cena,\nriesci a trovare una pietra tagliente e la utilizzi per rompere le corda che legano i bambu'. Sfili senza far rumore il bambu' e riesci ad aprirti un varco\nscappi silenziosamente lasciando pero' alla tribu' la spada e l'armatura\n";
				                system("pause");
				                attacco_tribu = 1;
				                armatura = 1;
				                cout << "Una volta scappato dalla tribu' riesci ad uscire dalla foresta e ti imbatti in un altro bivio. A destra vi e' una zona verde e scoscesa invece a sinistra vi e' una zona arida e ventosa\n";
				                while(scelta_foresta != '2' && scelta_foresta != '3' && scelta_foresta != 'm')
				                {
				                	cout << "1) Destra\n";
								cout << "2) Sinistra\n";								        
								cout << "3) Torna indietro\n";
								if (chiave == 0)
								{
								    cout << "4) Ricordati le parole del Re\n";
								}
								cin >> scelta_foresta;
								if(scelta_foresta == '1')//percorso montagna
								{
								    
									if(rampino == 0)
		                            {
			                            opzione = 3;
		                            }
		                            if(rampino != 0)
	                          	    {
			                            opzione = 4;
	                                }
									scala_montagna();
								    return;
								}
								if(scelta_foresta == '2')//percorso deserto
								{
								    deserto();
								    return;
								}
								if (chiave == 0)
								{
									if(scelta_foresta == '4')//ricordati le parole del Re
								{
								    parole_Re();
								    return;
								}
								}
								
								if(scelta_foresta == '3')//torna indietro dalla foresta
								{
								    cout << "Risuperi la foresta senza farti notare dalla tribu'\n";
			   	       				system("pause");		   	       				
			   	       				bivio_vfl();
			   	       				return;
								}
								if(scelta_foresta == 'i')
			                	{
				                    	inventario();
		                 	    }	
								}
										
							}
							if (scelta_foresta == '2')//dentro al pentolone
				            {
				                cout << "Mentre la tribu' ringrazia il loro dio per la trovata cena, provi a tirare dei pugni e a rompere il bambu'. Riesci ad aprire un varco per scappare,\nma hai causato un sacco di rumore e la tribu' si accorge della tua fuga\n";
				                system("pause");
				                cout << " Prendono un dardo con un sonnifero e ti sparano.\nAl risveglio ti senti bruciare e ti accorgi di essere dentro al pentolone\n";
				                system("pause");
				                cout << "Hai perso\n";
				                system("pause");
				                main();
				                return;
							}
							if(scelta_foresta == 'i')
			            	{
					             inventario();
			                }	
							}
							}
							
							}
							
						}
						if(scelta_foresta == 'i')
			        	{
					       inventario();
			            }
						}
							
					}						   
					if (attacco_tribu == 1)//superato l'attacco della tribu'
					{
						cout << "Prosegui lungo il sentiero privo di erbacce, cercado di evitare il villaggio della tribu' dei carnivori fino ad uscire dalla foresta.\nTrovi davanti a te un bivio, a destra vi e' una zona verde e scoscesa invece a sinistra vi e' una zona arida e ventosa\n";
						while(scelta_foresta != '2' && scelta_foresta != '3' && scelta_foresta != 'm')
						{
							cout << "1) Destra\n";
						cout << "2) Sinistra\n";							
						cout << "3) Torna indietro\n";
						if (chiave == 0)
						{
							cout << "4) Ricordati le parole del Re\n";
						}
						cin >> scelta_foresta;
						if(scelta_foresta == '1')//percorso montagna
						{
							if(rampino == 0)
		                    {
			                    opzione = 3;
		                    }
		                    if(rampino != 0)
	                        {
			                    opzione = 4;
	                        }
							scala_montagna();
							return;
						}
						if(scelta_foresta == '2')//percorso deserto
						{
							deserto();
							return;
						}
						if(chiave == 0)
						{
							if(scelta_foresta == '4')//ricordati le parole del Re
						{
							parole_Re();
							return;
						}
						}
						
						if(scelta_foresta == '3')//torna indietro dalla foresta
						{
							cout << "Risuperi la foresta senza farti notare dalla tribu'\n";
			   	       		system("pause");
			   	       		bivio_vfl();
			   	       		return;
						}
						if(scelta_foresta == 'i')
				        {
					          inventario();
			            }			
						}
										   	
					}
			
				}					    
				if (scelta_foresta == '2')//strada ricoperta di erbacce
				{
					if (sentiero_F2 != 0)//palude già superata 
			   	    {
			   	       	cout << "Segui il sentiero ricoperto di erbacce e ti imbatti in una palude. Sapendo come affrontarla\nafferri con decisione una liana e superi con grande facilita la palude\n";
			   	       	while(scelta_foresta != '1' && scelta_foresta != 'm')
			   	       	{
			   	       		cout << "1) Prosegui\n";
			   	       	cout << "2) Torna indietro\n";
			   	       	cin >> scelta_foresta;
			   	       	if (scelta_foresta == '1')//uscito dalla foresta avendo superata la palude
			   	       	{
			   	       		cout << "Continui il tuo percorso e riesci ad uscire dalla foresta. Ti imbatti in un altro bivio, a destra vi e una zona verde e scoscesa invece a sinistra vi e' una zona arida e ventosa\n";
							while(scelta_foresta != '2' && scelta_foresta != '3' && scelta_foresta != 'm')
							{
								cout << "1) Destra\n";
							cout << "2) Sinistra\n";								    
							cout << "3) Torna indietro\n";
							if (chiave == 0)
							{
								cout << "4) Ricordati le parole del Re\n";
							}
							cin >> scelta_foresta;
							if(scelta_foresta == '1')//percorso montagna
							{
								if(rampino == 0)
		                        {
			                        opzione = 3;
		                        }
		                        if(rampino != 0)
	                          	{
			                        opzione = 4;
	                            }
								scala_montagna();
								return;
							}
							if(scelta_foresta == '2')//percorso deserto
							{
								deserto();
								return;
							}
							if(chiave == 0)
							{
								if(scelta_foresta == '4')//ricordare le parole del Re
							{
								parole_Re();
								return;
							}
							}
							
							if(scelta_foresta == '3')//tornare indietro
							{
								cout << "Risuperi la foresta passando dalla palude\n";
			   	       			system("pause");
			   	       			bivio_vfl();
								return;										
							}	
							if(scelta_foresta == 'i')
			            	{
					             inventario();
			                }
							}
														    
						}
						if (scelta_foresta == '2')//tornare indietro dalla palude
			   	       	{
			   	       		cout << "Risuperi la palude con grande abilita' ed esci dalla foresta\n";
			   	       		system("pause");
			   	       		bivio_vfl();
			   	       		return;
						}
						if(scelta_foresta == 'i')
				        {
					          inventario();
			            }
						}
							
					}
					if (sentiero_F2 == 0)//palude non superata
					{
						cout << "Segui il sentiero ricoperto di erbacce e ti imbatti in una palude. Ti accorgi che stai sprofondando lentamente nella terra melmosa e capisci che sei in pericolo\n";
			   	       	while(scelta_foresta != '1' && scelta_foresta != 'm')
			   	       	{
			   	       		cout << "1) Guardati intorno\n";
			   	       	cout << "2) Prova a liberarti dalla melma scuotendoti\n";
			   	       	cin >> scelta_foresta;
			   	       	if (scelta_foresta == '1')//cerca liana
			   	       	{
			   	       	    cout << "Ti guardi intorno e vedi delle liane. Ti appendi ad esse e cerchi di uscire\n"; 
			   	       		system("pause");
			   	       		cout << "Con molta fatica e tenacia riesci ad uscire\n";			   	       		
			   	       		while(scelta_foresta != '2' && scelta_foresta != 'm')
			   	       		{
			   	       			cout << "1) Prosegui\n";
			   	       		cout << "2) Torna indietro\n";
			   	       		cin >> scelta_foresta;
			   	       		if (scelta_foresta == '1')//uscito dalla palude
			   	       		{
			   	       		    cout << "Continui il tuo percorso e riesci ad uscire dalla foresta. Ti imbatti in un altro bivio, a destra vi e una zona verde e scoscesa invece a sinistra vi e' una zona arida e ventosa\n";
								while(scelta_foresta != '2' && scelta_foresta != '3' && scelta_foresta != 'm')
								{
									cout << "1) Destra\n";
								cout << "2) Sinistra\n";								        
								cout << "3) Torna indietro\n";
								if (chiave == 0)
								{
								    cout << "4) Ricordati le parole del Re\n";
								}
								cin >> scelta_foresta;
								if(scelta_foresta == '1')//percorso montagna
								{
								    
									if(rampino == 0)
		                            {
			                            opzione = 3;
		                            }
		                            if(rampino != 0)
	                          	    {
			                            opzione = 4;
	                                }
									scala_montagna();
								    return;
								}
								if(scelta_foresta == '2')//percorso deserto
								{
								    deserto();
								    return;
								}
								if (chiave == 0)
								{
									if(scelta_foresta == '4')//ricordati le parole del Re
								{
								    parole_Re();
								    return;
								}
								}
								
								if(scelta_foresta == '3')//torna indietro dalla foresta
								{
								    cout << "Risuperi la foresta passando dalla palude\n";
			   	       				system("pause");			   	       				
			   	       				bivio_vfl();
			   	       				return;
								}
								if(scelta_foresta == 'i')
				                {
					                inventario();
			                    }
								}
									
				            }
							if (scelta_foresta == '2')//torna indietro dalla palude
			   	       		{
			   	       		    cout << "Risuperi la palude con grande abilita' ed esci dalla foresta\n";
			   	       			system("pause");			   	       			
			   	       			bivio_vfl();
			   	       			return;
							}
							if(scelta_foresta == 'i')
			               	{
					            inventario();
			                }	
							}
									   	       		    
						}
						if (scelta_foresta == '2')//morte nella palude
			   	       	{
			   	       		cout << "Preso dalla paura di non farcela, ti agiti ma sprofondi sempre di piu' fino ad essere inghiottito dalla melma\n";
			   	       		system("pause");
			   	       		cout << "Hai perso\n";
			   	       		system("pause");
			   	       		main();
			   	       		return;
						}
						if(scelta_foresta == 'i')
				        {
					        inventario();
			            }
						}
										   	       		    
					}			   	       		 
				}
				if (scelta_foresta == '3')//torna indietro
				{
					bivio_vfl();
					return;
				}
				if(scelta_foresta == 'i')
				{
					inventario();
			    }
				}
							
			}
		}			       
	    if (scelta_foresta == '2')//torna al bivio
		{
			bivio_vfl();
			return;			   	
		}
		if(scelta_foresta == 'i')
		{
			inventario();
		}
		}
		
		if (scelta_foresta == 'm')//torna al menu
		{		
			main();
			return;
							   	
		}
		if(scelta_foresta == 'i')
		{
			inventario();
	    }		
}
//----------------------------------------------------------------------------------------labirinto---------------------------------------------------------------------------------------------
void labirinto()
{
	cout << "\nSalvataggio progresso...\n";
	salvataggio = 3;
	scelta_labirinto = '0';
	system("pause");
	cout << "\n---------------------Labirinto---------------------------\n\n";
	cout << "ti trovi d'avanti tre strade, una a sinistra, una d'avanti a te e l'altra a destra\n";
	while(scelta_labirinto != '1' && scelta_labirinto != '2' && scelta_labirinto != '3' && scelta_labirinto != '4' && scelta_labirinto != 'm')
	{
		cout << "1) Sinistra\n";
	cout << "2) Avanti\n";
	cout << "3) Destra\n";
	cout << "4) Torna indietro\n";
	cin >> scelta_labirinto;
	if(scelta_labirinto == '1')//sinistra
	{
		
		while (scelta_labirinto == '1' || scelta_labirinto == '3')
		{
			while (scelta_labirinto != '2' && scelta_labirinto != '4' && scelta_labirinto != 'm')
		   {
			if (scelta_labirinto == '1')
	       {
	    		 cout << "Prendi la strada a sinistra e dopo qualche metro di camminata ti ritrovi a dover scegliere tra altre tre strade\n";   	
		   }
		   if (scelta_labirinto == '3')
	       {
	    		 cout << "Prendi la strada a destra e dopo qualche metro di camminata ti ritrovi a dover scegliere tra altre tre strade\n";   	
		   }
		   
		   	   cout << "1) Sinistra\n";
	       cout << "2) Avanti\n";
	       cout << "3) Destra\n";
	       cout << "4) Torna all'inizio del labirinto\n";
	       cin >> scelta_labirinto;
	       if (scelta_labirinto == '2')//avanti
	    {
	    	while (scelta_labirinto == '2')
	    	{
	    		
	    		 while(scelta_labirinto != '3' && scelta_labirinto != '4' && scelta_labirinto != 'm' &&scelta_labirinto != '1')
		        {
				cout << "Prendi la strada davanti a te e dopo qualche metro di camminata ti ritrovi a dover scegliere tra altre tre strade\n";   	
		       
		        	cout << "1) Sinistra\n";
	            cout << "2) Avanti\n";
	            cout << "3) Destra\n";
	            cout << "4) Torna all'inizio del labirinto\n";
	            cin >> scelta_labirinto;
	            if(scelta_labirinto == '1')
	            {
	            	cout << "Prendi la strada a sinistra e ti imbatti in una lunghissima strettoia che inizi a percorrere\n";
	            	system("pause");
	            	cout << "Arrivi alla fine della strettoia e scopri che e' solo un vicolo ceco. Torni indietro\n";
	            	system("pause");
	            	cout << "Segui tutta la strettoia al contrario ma ti accorgi di aver fatto il doppio dei passi rispetto a quando l'hai percorsa la prima volta\n";
	            	system("pause");
	            	cout << "Continui a camminare senza trovare la fine. A questo punto ti rendi conto che sei finito in una strana e magica trappola, capisci che rimarrai li per sempre\n";
	            	system("pause");
	            	cout << "Hai perso\n";
	            	system("pause");
	            	main();
	            	return;
				}
	            if (scelta_labirinto == '3')//destra
	            {
	        	cout << "Prendi la strada a destra ma ti imbatti in un vicolo ceco dove vi e' un enorme serpente\n";
	        	while(scelta_labirinto != '1' && scelta_labirinto != '2' && scelta_labirinto != 'm')
	        	{
	        		cout << "1) Attacca il serpente\n";
	        	cout << "2) Fuggi\n";
	        	cin >> scelta_labirinto;
	        	if (scelta_labirinto == '1')// attacca la bestia
                {
	        	    if(armatura == 1)
	        	    {
	        	     	cout << "A mani nude e sanza protezioni decidi di attaccare l'enorme serpente\n";
	        	     	system("pause");
	        	        cout << "la bestia attacca per prima dilaniandoti con i suoi lunghi denti affilati, facendoti urlare dal dolore fino a quando, esanime, non cadi per terra\n";
	        	        system("pause");
	        	        cout << "Hai perso\n";
	        	        system("pause");
	        	        main();
	        	        return;
					}
					if(armatura == 0)
	        	    {
	        	     	cout << "Prendi la spada e lo attacchi\n";
	        	     	system("pause");
	        	        cout << "Dopo un lungo ed estenuante combattimento ne esci vincitore e con calma riesci a ritornare all'inizio del labirinto\n";
	        	        system("pause");
	        	        labirinto();
	        	        return;
					}
                }
                if (scelta_labirinto == '2')// fuggi bestia
                {
	        	    cout << "Ti giri e inizi a scappare sperando che il serpente non ti abbia visto\n";
	        	    system("pause");
	        	    cout << "Purtroppo l'enorme serpente ti ha gia' puntato e ha iniziato a riccorenti\n";
	        	    system("pause");
	        	    cout << "Sei nel panico ed inizi a prendere strade mai percorse perdendoti.\nTi ritrovi in una strada chiusa senza via di fuga\n";
	        	    system("pause");
	        	    cout << "Ti giri e sei faccia a faccia con la bestia\n";
	        	    system("pause");
	        	    if(armatura == 1)
	        	    {
	        	     	cout << "la bestia attacca per prima dilaniandoti con i suoi lunghi denti affilati, facendoti urlare dal dolore fino a quando, esanime, non cadi per terra\n";
	        	     	system("pause");
	        	     	cout << "Hai perso\n";
	        	     	system("pause");
	        	     	main();
	        	     	return;
					}
					if(armatura == 0)
	        	    {
	        	     	cout << "A questo punto sei costretto ad attaccare la bestia\n";
	        	     	system("pause");
	        	        cout << "Dopo un lungo ed estenuante combattimento ne esci vincitore e con calma riesci a ritornare all'inizio del labirinto dove ";
	        	        labirinto();
	        	        return;
					}
	        	     
                }
                if(scelta_labirinto == 'i')
             	{
	                	inventario();
            	}
				}
				
	        	
			   }
			   if (scelta_labirinto == '4')
	           {
	        	cout << "sei riuscito a ritornare all'inizio del labirinto dove ";
                labirinto();
                return;
			   }
			   if(scelta_labirinto == 'i')
            	{
	            	inventario();
             	}
				}
				
			}        
		}
		if (scelta_labirinto == '4')
	    {
	    	cout << "sei riuscito a ritornare all'inizio del labirinto dove ";
	    	labirinto();
	    	return;
		}
		if(scelta_labirinto == 'i')
       	{
	        inventario();
       	}
		   }
		   
		}	    
	}
	if(scelta_labirinto == '2')//avanti
	{
		while (scelta_labirinto == '1' || scelta_labirinto == '2')
		{
			while(scelta_labirinto != '3' && scelta_labirinto != '4' && scelta_labirinto != 'm')
		   {
			if (scelta_labirinto == '1')
	       {
	    		cout << "Prendi la strada a sinistra e dopo qualche metro di camminata ti ritrovi a dover scegliere tra altre tre strade\n";   	
		   }
		   if (scelta_labirinto == '2')
	       {
	    		cout << "Prendi la strada davanti a te e dopo qualche metro di camminata ti ritrovi a dover scegliere tra altre tre strade\n";   	
		   }
		   
		   	   cout << "1) Sinistra\n";
	       cout << "2) Avanti\n";
	       cout << "3) Destra\n";
	       cout << "4) Torna all'inizio del labirinto\n";
	       cin >> scelta_labirinto;
	       if (scelta_labirinto == '2')//bestia
	       {
	       	    cout << "Prendi la strada davanti a te e ti imbatti in un vicolo ceco dove vi e' un enorme toro dalle lunghe corna\n";
	        	while(scelta_labirinto != '1' && scelta_labirinto != 'm')
	        	{
	        		cout << "1) Attacca il toro\n";
	        	cout << "2) Fuggi\n";
	        	cin >> scelta_labirinto;
	        	if (scelta_labirinto == '1')// attacca la bestia
                {
	        	    if(armatura == 1)
	        	    {
	        	     	cout << "A mani nude e sanza protezioni decidi di attaccare l'enorme toro\n";
	        	     	system("pause");
	        	        cout << "la bestia riesce ad attacarti per prima usando le sue imponenti corna per sbalzarti contro la parete del labirinto. Svieni e il toro ne approfitta per colpirti altre svariate volte\n";
	        	        system("pause");
	        	        cout << "Hai perso\n";
	        	        system("pause");
	        	        main();
	        	        return;
					}
					if(armatura == 0)
	        	    {
	        	     	cout << "Prendi la spada e lo attacchi\n";
	        	     	system("pause");
	        	        cout << "Dopo un lungo ed estenuante combattimento ne esci vincitore e con calma riesci a ritornare all'inizio del labirinto\n";
	        	        system("pause");
	        	        labirinto();
	        	        return;
					}
                }
                if (scelta_labirinto == '2')// fuggi bestia
                {
	        	    cout << "Ti giri e inizi a scappare sperando che il toro non ti abbia visto\n";
	        	    system("pause");
	        	    cout << "Purtroppo l'enorme toro dalle grosse corna ti ha gia' puntato e ha iniziato a riccorenti\n";
	        	    system("pause");
	        	    cout << "Sei nel panico ed inizi a prendere strade mai percorse perdendoti.\nTi ritrovi in una strada chiusa senza via di fuga\n";
	        	    system("pause");
	        	    cout << "Ti giri e sei faccia a faccia con la bestia\n";
	        	    system("pause");
	        	    if(armatura == 1)
	        	    {
	        	     	cout << "La bestia inizia ad attaccarti ma, senza arma e armatura, non hai alcuna possibilita' di sopravvivere\n";
	        	     	system("pause");
	        	     	cout << "Hai perso\n";
	        	     	system("pause");
	        	     	main();
	        	     	return;
					}
					if(armatura == 0)
	        	    {
	        	     	cout << "A questo punto sei costretto ad attaccare la bestia\n";
	        	     	system("pause");
	        	        cout << "Dopo un lungo ed estenuante combattimento ne esci vincitore e con calma riesci a ritornare all'inizio del labirinto\n";
	        	        system("pause");
	        	        labirinto();
	        	        return;
					}
	        	     
                }
                if(scelta_labirinto == 'i')
               	{
	                    	inventario();
               	}
				}
				
		   }
		   if (scelta_labirinto == '3')//destra
	       {
	       	    while (scelta_labirinto == '1' || scelta_labirinto == '3')
		        {
			
			        while(scelta_labirinto != '2' && scelta_labirinto != '4' && scelta_labirinto != 'm')
		            {
					if (scelta_labirinto == '1')
	                {
	    		        cout << "Prendi la strada a sinistra e dopo qualche metro di camminata ti ritrovi a dover scegliere tra altre tre strade\n";   	
		            }
		            if (scelta_labirinto == '3')
	                {
	    		        cout << "Prendi la strada a destra e dopo qualche metro di camminata ti ritrovi a dover scegliere tra altre tre strade\n";   	
		            }
		            
		            	cout << "1) Sinistra\n";
	                cout << "2) Avanti\n";
	                cout << "3) Destra\n";
	                cout << "4) Torna all'inizio del labirinto\n";
	                cin >> scelta_labirinto;
	                if(scelta_labirinto == '2')//avanti
	                {
	                	while (scelta_labirinto == '1' || scelta_labirinto == '2')
		                {			
			                while(scelta_labirinto != '3' && scelta_labirinto != '4' && scelta_labirinto != 'm')
							{
							if (scelta_labirinto == '1')
	                        {
	    		                cout << "Prendi la strada a sinistra e dopo qualche metro di camminata ti ritrovi a dover scegliere tra altre tre strade\n";   	
		                    }
		                    if (scelta_labirinto == '2')
	                        {
	    		                cout << "Prendi la strada davanti a te e dopo qualche metro di camminata ti ritrovi a dover scegliere tra altre tre strade\n";   	
		                    }
		                       
							   	   cout << "1) Sinistra\n";
	                            cout << "2) Avanti\n";
	                            cout << "3) Destra\n";
	                            cout << "4) Torna all'inizio del labirinto\n";
	                            cin >> scelta_labirinto;
	                            if(scelta_labirinto == '3')//destra
	                            {
	                	            while (scelta_labirinto == '3' || scelta_labirinto == '2')
		                            {			
			                            while(scelta_labirinto != '1' && scelta_labirinto != '4' && scelta_labirinto != 'm')
		                                {
										if (scelta_labirinto == '3')
	                                    {
	    		                            cout << "Prendi la strada a destra e dopo qualche metro di camminata ti ritrovi a dover scegliere tra altre tre strade\n";   	
		                                }
		                                if (scelta_labirinto == '2')
	                                    {
	    		                            cout << "Prendi la strada davanti a te e dopo qualche metro di camminata ti ritrovi a dover scegliere tra altre tre strade\n";   	
		                                }
		                                
		                                	cout << "1) Sinistra\n";
	                                    cout << "2) Avanti\n";
	                                    cout << "3) Destra\n";
	                                    cout << "4) Torna all'inizio del labirinto\n";
	                                    cin >> scelta_labirinto;
	                                    if(scelta_labirinto == '1')
	                                    {
	                	                    cout << "Prendi la strada a sinistra e dopo qualche metro ti trovi davanti al portale dimensionale per accedere alla zona del drago\n";
	                	                    while(scelta_labirinto != '2' && scelta_labirinto != 'm')
	                	                    {
	                	                    	cout << "1) Entra nel portale\n";
	                	                    cout << "2) Torna all'inizio del labirinto\n";
	                	                    cin >> scelta_labirinto;
	                	                    if (scelta_labirinto == '1')
	                	                    {
	                	                    	portale_drago();
	                	                    	return;
											}
											if (scelta_labirinto == '2')
	                	                    {
	                	                    	cout << "sei riuscito a ritornare all'inizio del labirinto dove ";
	    	                                    labirinto();
	    	                                    return;
											}
											if(scelta_labirinto == 'i')
                                        	{
	                                              	inventario();
                                          	}
											}
											
					                    }
	                                    if (scelta_labirinto == '4')
	                                    {
	       	                                cout << "sei riuscito a ritornare all'inizio del labirinto dove ";
	    	                                labirinto();
	    	                                return;
		                                }
		                                if(scelta_labirinto == 'i')
                                     	{
		                                      inventario();
                                     	}
										}
										
		                            }
					            }
	                            if (scelta_labirinto == '4')
	                            {
	       	                        cout << "sei riuscito a ritornare all'inizio del labirinto dove ";
	    	                        labirinto();
	    	                        return;
		                        }
		                        if(scelta_labirinto == 'i')
                            	{
	                            	inventario();
                              	}
								} 
								
		                    }
					}
	                if (scelta_labirinto == '4')
	                {
	       	            cout << "sei riuscito a ritornare all'inizio del labirinto dove ";
	    	            labirinto();
	    	            return;
		            }
		            if(scelta_labirinto == 'i')
                  	{
	                   	inventario();
                   	}
					}
					
		        }
		   }
		   if (scelta_labirinto == '4')
	       {
	       	    cout << "sei riuscito a ritornare all'inizio del labirinto dove ";
	    	    labirinto();
	    	    return;
		   }
		   if(scelta_labirinto == 'i')
         	{
	            	inventario();
          	}
		   }	   

		}
	}
	if(scelta_labirinto == '3')//destra
	{
		while (scelta_labirinto == '3' || scelta_labirinto == '1')
		{
			while(scelta_labirinto != '2' && scelta_labirinto != '4' && scelta_labirinto != 'm')
			{
			   if (scelta_labirinto == '1')
	       {
	    		 cout << "Prendi la strada a sinistra e dopo qualche metro di camminata ti ritrovi a dover scegliere tra altre tre strade\n";   	
		   }
		   if (scelta_labirinto == '3')
	       {
	    		 cout << "Prendi la strada a destra e dopo qualche metro di camminata ti ritrovi a dover scegliere tra altre tre strade\n";   	
		   }
		   cout << "1) Sinistra\n";
	       cout << "2) Avanti\n";
	       cout << "3) Destra\n";
	       cout << "4) Torna all'inizio del labirinto\n";
	       cin >> scelta_labirinto;
	       if(scelta_labirinto == '2')//trappola
	       {
	       	    cout << "Prosegui davanti a te, ma ad un tratto senti il terreno tremare\n";
	       	    system("pause");
	       	    cout << "Guardi sotto ai tuoi piedi e vedi che dal terreno iniziano a crescere degli enormi spuntoni che lentamente ti trafiggono\n";
	       	    system("pause");
	       	    cout << "Hai perso\n";
	       	    system("pause");
	       	    main();
	       	    return;
		   }
		   if(scelta_labirinto == '3')//destra
	       {
	       	    while (scelta_labirinto == '3')
		        {			        
	    		    while(scelta_labirinto != '1' && scelta_labirinto != '2' && scelta_labirinto != '4' && scelta_labirinto != 'm')
	    		    {
	    		    	cout << "Prendi la strada a destra e dopo qualche metro di camminata ti ritrovi a dover scegliere tra altre tre strade\n";   	
		            cout << "1) Sinistra\n";
	                cout << "2) Avanti\n";
	                cout << "3) Destra\n";
	                cout << "4) Torna all'inizio del labirinto\n";
	                cin >> scelta_labirinto;
	                if(scelta_labirinto == '1')//bestia
	                {
	                	
						cout << "Prendi la strada a sinistra e, d'improvviso, ti ritrovi circondato da un immensa distesa d'acqua in cui galleggi. Ti accorgi che il labirinto e' scomparso\n";
	        	        system("pause");
	        	        cout << "guardandoti intorno noti un enorme pinna che si dirige verso di te\n";
	        	        while(scelta_labirinto != '2' && scelta_labirinto != 'm')
	        	        {
	        	        	cout << "1) Attacca lo squalo\n";
	        	        cout << "2) Fuggi\n";
	        	        cin >> scelta_labirinto;
	        	        if (scelta_labirinto == '1')// attacca la bestia
                        {
	        	            if(armatura == 1)
	        	            {
	        	     	        cout << "A mani nude e sanza protezioni decidi di attaccarlo\n";
	        	     	        system("pause");
	        	                cout << "lo squalo riesce ad attacarti per primo staccandoti di netto una gamba e facendoti urlare dal dolore fino a quando, stremato, non cadi sul fondo dell'oceano\n";
	        	                system("pause");
	        	                cout << "Hai perso\n";
	        	                system("pause");
	        	                main();
	        	                return;
					        }
					        if(armatura == 0)
	        	            {
	        	     	        cout << "Prendi la spada e lo attacchi\n";
	        	     	        system("pause");
	        	                cout << "Dopo un lungo ed estenuante combattimento ne esci vincitore e come per magia ti ritrovi all'inizio del labirinto\n";
	        	                system("pause");
	        	                labirinto();
	        	                return;
					        }
                        }
                    if (scelta_labirinto == '2')// fuggi bestia
                    {
	        	        cout << "Ti giri e inizi a nuotare da una parte all'altra cercando di trovare una salvezza\n";
	        	        system("pause");
	        	        cout << "Sei nel panico e inizi a nuotare il piu' velocemente possibile ma invano, lo squalo e' piu' veloce di te e ti sta raggiungendo\n";
	        	        system("pause");
	        	        cout << "Ad un tratto ti giri per vedere se e' ancora dietro di te ma ti accorgi di avere fatto la mossa sbagliata, lo squalo e' ad un passo da te\n";
	        	        system("pause");
	        	    if(armatura == 1)
	        	    {
	        	     	cout << "lo squalo riesce ad attacarti per primo staccandoti di netto una gamba e facendoti urlare dal dolore fino a quando, stremato, non cadi sul fondo dell'oceano\n";
	        	     	system("pause");
	        	     	cout << "Hai perso\n";
	        	     	system("pause");
	        	     	main();
	        	     	return;
					}
					if(armatura == 0)
	        	    {
	        	     	cout << "A questo punto, non avendo alternative, attacchi la bestia\n";
	        	     	system("pause");
	        	        cout << "Dopo un lungo ed estenuante combattimento ne esci vincitore e come per magia ti ritrovi all'inizio del labirinto\n";
	        	        system("pause");
	        	        labirinto();
	        	        return;
					}
	        	     
                    }
                    if(scelta_labirinto == 'i')
                	{
                    		inventario();
                   	}
						}
						
					}
					if(scelta_labirinto == '2')//balestra
	                {
	                	cout << "Prosegui davanti a te e trovi una porta chiusa da un enorme lucchetto\n";
	                	while(scelta_labirinto != '1' && scelta_labirinto != 'm')
	                	{
	                		cout << "1) Torna all'inizio del labirinto\n";
						if (chiave == 1)
	                	{
	                		cout << "2) Utilizza la chiave\n";
						}
						cin >> scelta_labirinto;
						if (scelta_labirinto == '1')
						{
							cout << "Non avendo una chiave per aprirlo torni all'inizio del labirinto dove ";
							labirinto();
	    	                return;
						}
						if (chiave == 1)
	                	{
	                		if (scelta_labirinto == '2')
						    {
							    cout << "Utilizzi la chiave e riesci ad aprire il lucchetto\n";
							    system("pause");
							    cout << "Apri la porta ed entri nella stanza dove al centro vi e' sospesa una balestra d'oro con a fianco una singola freccia dalla punta di diamante\n";
							    while(scelta_labirinto != '1' && scelta_labirinto != 'm')
							    {
							    	cout << "1) Prendi la balesta d'oro e la freccia\n";
							    cout << "2) Torna all'inizio del labirinto\n";
							    cin >> scelta_labirinto;
							    if (scelta_labirinto == '1')
							    {
							     	cout << "Ti avvicini e, sospettando un altro tranello, afferri con rapidita' entrambi gli oggetti\n";
							     	system("pause");
							     	balestra = 1;
							     	cout << "All'improvviso la balestra si illumina di luce propria\n";
							     	system("pause");
							     	cout << "La luce si allarga sempre di piu' fino a quando non vieni totalmente inghiottito da essa\n";
							     	system("pause");
							     	cout << "Pochi secondi e la luce scompare\n";
							     	system("pause");
							     	cout << "Ti senti diverso, come se quella luce ti abbia guarito da stanchezza e ferite, guardantoti, inoltre, ti accorgi di aver addosso un'armatura tutta d'orata\n";
							     	system("pause");
							     	cout << "Metti via la balestra per continuare il tuo viaggio e d'improvviso l'armatura scompare. Provi a riprendere la balestra e l'armatura riappare. Capisci che senza la balestra non avrai l'armatura d'oro a proteggerti e sicuro di te lasci quella stanza e ritorni all'inizio del labirinto dove ";
							     	labirinto();
	    	                        return;
								}
								if (scelta_labirinto == '2')
							    {
							     	cout << "Lasci la balestra dov'e' e ritorni all'inizio del labirinto dove ";
							     	labirinto();
	    	                        return;
								}
								if(scelta_labirinto == 'i')
                            	{
	                            	inventario();
                               	}
								}
								
							    
						    }
						}
						if(scelta_labirinto == 'i')
                       	{
	                       	inventario();
                       	}
						}
						
					}
					if(scelta_labirinto == '4')
	                {
	                	cout << "sei riuscito a ritornare all'inizio del labirinto dove ";
	    	            labirinto();
	    	            return;
					}
					if(scelta_labirinto == 'i')
                 	{
	                 	inventario();
                   	}
					}
										
	            }
		   }
		   if(scelta_labirinto == '4')
	       {
	       	    cout << "sei riuscito a ritornare all'inizio del labirinto dove ";
	    	    labirinto();
	    	    return;
		   }
		   if(scelta_labirinto == 'i')
        	{
	        	inventario();
        	}	
			}
			
	   }
	}
	if(scelta_labirinto == '4')
	{
	    bivio_vfl();
	    return;
	}
	if(scelta_labirinto == 'i')
	{
		inventario();
	}
	}
	
	if(scelta_labirinto == 'm')
	{
		main();
		return;
	}
	if(scelta_labirinto == 'i')
	{
		inventario();
	}
}
//------------------------------------------------------------------------------------------villaggio------------------------------------------------------------------------------------------------
void villaggio()
{
	cout << "Salvataggio progresso...\n";
	salvataggio = 4;
	system("pause");
	cout << "\n--------------------------Villaggio----------------------------------\n\n";
	cout << "Ritorni al villaggio e vedi tutte le persone ancora scosse per l'attacco del drago\n";
	system("pause");
	bivio_vfl();
	return;
}
//------------------------------------------------------------------------------------------bivio (foresta,labirinto,villaggio)--------------------------------------------------------------------------
void bivio_vfl()
{
	cout << "Salvataggio progresso...\n";
	salvataggio = 5;
	scelta_tre = '0';
	system("pause");
	cout << "\n-----------------------Primo incrocio----------------------------\n\n";
	cout << "Ti ritrovi davanti al bivio del villaggio\n";
	while(scelta_tre != '1' && scelta_tre != '2' && scelta_tre != '3' && scelta_tre != 'm')
	{
			cout << "1) Est\n";
	cout << "2) Ovest\n";
	cout << "3) Ritorna al villaggio\n";
	cin >> scelta_tre;
	if (scelta_tre == '1')//prosegui in direzione foresta
	{
		if(sentiero_F1 == 0)
		{
			opzione = 0;
		}
		if(sentiero_F1 != 0)
		{
			opzione = 1;
						
		}
		scelta_tre = 0;
		foresta();
		return;
	}
	if (scelta_tre == '2')//prosegui in direzione labirinto
	{
		
		cout << "Prendi la direzione ovest e ti trovi d'avanti un enorme labirinto fatto tutto di siepi\n";
	    while(scelta_tre != '1' && scelta_tre != 'm')
	    {
	    	cout << "1) Entra dentro al labirinto\n";
	    cout << "2) Torna indietro\n";
	    cin >> scelta_tre;
		if(scelta_tre == 'i')
 	    {
 	    	inventario();
		}		
		if(scelta_tre == '1')
	    {
		    cout << "Entrando nel labirinto ";
		   
			labirinto();
			return;
	    }
	    if(scelta_tre == '2')
	    {
	    	
		    bivio_vfl();
		    return;
 	    }
 	    
		}
		
	}
	if (scelta_tre == '3')//ritorna al villaggio
	{
		scelta_tre = 0;
		villaggio();
		return;
	}
	if (scelta_tre == 'm')//torna al menu
	{
		scelta_tre = 0;
		main();
		return;
					
	}
	if (scelta_tre == 'i')//torna al menu
	{
		
		inventario();
					
	}
	
	}

}
//----------------------------------------------------------------------------------------scalata montagna----------------------------------------------------------------------------------------
void scala_montagna()
{
	cout << "Salvataggio progresso...\n";
	salvataggio = 6;
	scelta_montagna = '0';
	system("pause");
	cout << "----------------------Zona innevata--------------------------------\n\n";
	cout << "Scegli il percorso di destra e ti ritrovi a viaggiare in una zona innevata nella quale si erge una maestosa montagna\n";
	while(scelta_montagna != '1' && scelta_montagna !=  '2' && scelta_montagna != 'm')
	{
		cout << "1) Prosegui nella direzione della montagna\n";
	cout << "2) Torna indietro\n";
	cin >> scelta_montagna;
	if (scelta_montagna == '1')
	{
		if (armatura == 0)//con armatura
	{
		cout << "Man mano che prosegui verso la montagna la temperatura si abbassa fino a toccare i -60 gradi. Per fortuna l'armatura ti ripara un po' dal freddo e ti permette di proseguire il viaggio\n"; 
		system("pause");
		cout << "Dopo qualche ora arrivi ai piedi della montagna\n";
		while(scelta_montagna != '2' && scelta_montagna != '3' && scelta_montagna != 'm')
		{
			cout << "1) Scali la montagna\n";
		cout << "2) Trova una via alternativa\n";
		cout << "3) Torna indietro\n";
		cin >> scelta_montagna;
		if (scelta_montagna == '1')//scala la montagna
		{
			if (rampino == 0)//senza rampino
			{
				cout << "Provi a scalare la montagna ma il peso dell'armatura ti ostacola rendendo la scalata molto faticosa\n";
				while(scelta_montagna != '2' && scelta_montagna != '3' && scelta_montagna != 'm')
				{
					cout << "1) Togliti l'armatura\n";
				cout << "2) Prosegui sopportando il peso dell'armatura\n";
				cout << "3) Torna indietro\n";
			    cin >> scelta_montagna;
				if (scelta_montagna == '1')//scalare togliendo l'armatura
				{
					cout << "Mentre ti togli l'armatura ti scivola dalle mani e ti cade tornando ai piedi della parete, perdendola per sempre.\nSei arrabbiato, non solo per aver perso l'armatura, ma anche per aver perso la spada attaccata ad essa. Decidi comunque di proseguire con la scalata, diventata piu' sempllice grazie alla tua scelta\n"; 
					armatura = 1;					    	
					system("pause");					    	
					cout << "Prosegui la scalata ma dopo poco inizi a tremare e a soffrire per il freddo al punto che le tue dita iniziano a diventare di colore bluastro.\nTi rendi conto che il tuo corpo sta entrando in ipotermia e con le ultime forze cerchi di raggiungere la cima della montagna\n";
					system("pause");
					opzione = 5;				
					cima_montagna();
					return;				    
				}
				if (scelta_montagna == '2')//scalare mentenendo l'armatura
				{
					cout << "Nonostante il peso dell'armatura che ti ostacola, sei deciso a continuare.\nCon molta fatica sei riuscito ad arrivare in cima alla montagna dove ti accasci per terra stremato dall'enorme sforzo che hai dovuto affrontare.\nDopo qualche minuti ti riprendi e\n";
					opzione = 6;
					system("pause");
					cima_montagna();
					return;
				}
				if (scelta_montagna == '3')//tornare indietro
				{
					cout << "L'armatura rende la scalata molto difficile. Decidi di scendere dalla montagna e ritornare al bivio\n",
					system("pause");					
					bivio_md();
					return;
				}
				if(scelta_montagna == 'i')
             	{
	               	inventario();
	            }
				}
						
			}
			if (rampino == 1)//con rampino
			{
				cout << "Per scalare la montagna utilizzi il rampino che ti aiuta ad arrivare in cima piu' velocemente, sprecando meno energie\n";
				system("pause");
				opzione = 7;
				cima_montagna();
				return;
			}					
		}
		if (scelta_montagna == '2')//via alternativa
		{
			cout << "Ti guardi intorno e vedi che nella montagna vi e' incastonata una grotta\n";
			while(scelta_montagna != '1' && scelta_montagna != '3' && scelta_montagna != 'm')
			{
				cout << "1) Esplora la grotta\n";
			cout << "2) Scala la montagna\n";
			cout << "3) Torna indietro\n";
			cin >> scelta_montagna;
			if (scelta_montagna == '1')
			{
				if (rampino == 0)
				{
					cout << "\n--------------------------Grotta----------------------------------\n\n";
					cout << "Entri nella grotta che ti ripara un po' dal freddo. Ti guardi intorno e vedi un rampino, forse lasciato dagli impavidi scalatori che in passato tentarono invano di raggiungere la cima\n";
					while(scelta_montagna != '2' && scelta_montagna != 'm')
					{
						cout << "1) Prendi il rampino\n";
					cout << "2) Esci dalla grotta e torna al bivio\n";
					cin >> scelta_montagna;
					if (scelta_montagna == '1')
					{
						cout << "Prendi il rampino ed esci dalla grotta.\nDecidi poi di ritornare al bivio\n";
						rampino = 1;
						system("pause");
						bivio_md();
						return;
					}
					if (scelta_montagna == '2')
					{
						cout << "Esci dalla grotta lasciando il rampino incostudito e decidi di ritornare al bivio\n";
						system("pause");
						bivio_md();
						return;
					}	
					if(scelta_montagna == 'i')
                 	{
	                   	inventario();
                  	}
					}
					
				}
				if(rampino == 1)
				{
					cout << "\n--------------------------Grotta----------------------------------\n\n";
					cout << "Entri nella grotta ma oltre al rampino che hai gia' preso non c'e' piu' nulla. Decidi di tornare al bivio\n";
					system("pause");
					bivio_md();
					return;
				}					
			}
			if (scelta_montagna == '2')//scala la montagna
			{				    
				if (rampino == 0)//senza rampino
				{
					cout << "Provi a scalare la montagna pero' il peso dell'armatura ti ostacola rendendo la scalata molto faticosa\n";
					while(scelta_montagna != '1' && scelta_montagna != '3' && scelta_montagna != 'm')
					{
						cout << "1) Togliti l'armatura\n";
					cout << "2) Prosegui sopportando il peso dell'armatura\n";
					cout << "3) Torna indietro\n";
					cin >> scelta_montagna;
					if (scelta_montagna == '1')//scalare togliendo l'armatura
					{
					    cout << "Mentre ti togli l'armatura ti scivola dalle mani e ti cade tornando ai piedi della parete, perdendola per sempre.\nSei arrabbiato, non solo per aver perso l'armatura, ma anche per aver perso la spada attaccata ad essa. Decidi comunque di proseguire con la scalata, diventata piu' sempllice grazie alla tua scelta\n"; 
					    armatura = 1;					    	
					    system("pause");					    	
					    cout << "Prosegui la scalata ma dopo poco inizi a tremare e a soffrire per il freddo al punto che le tue dita iniziano a diventare di colore bluastro.\nTi rendi conto che il tuo corpo sta entrando in ipotermia e con le ultime forze cerchi di raggiungere la cima della montagna\n";
					    system("pause");
					    opzione = 5;				
					    cima_montagna();
					    return;						    
					}
					if (scelta_montagna == '2')//scalare mentenendo l'armatura
					{
					    cout << "Nonostante il peso dell'armatura che ti ostacola, sei deciso a continuare.\nCon molta fatica sei riuscito ad arrivare in cima alla montagna dove ti accasci per terra stremato dall'enorme sforzo che hai dovuto affrontare.\nDopo qualche minuti ti riprendi e\n";
					    opzione = 6;
					    system("pause");
					    cima_montagna();
					    return;
					}
					if (scelta_montagna == '3')//tornare indietro
					{
					    cout << "L'armatura rende la scalata molto difficile. Decidi di scendere dalla montagna e ritornare al bivio\n",
					    system("pause");					
					    bivio_md();
					    return;
					}
					if(scelta_montagna == 'i')
                	{
	                    inventario();
                	}
					}
					
		        }
				if (rampino == 1)//con rampino
				{
					cout << "Per scalare la montagna utilizzi il rampino che ti aiuta ad arrivare in cima piu' velocemente, sprecando meno energie\n";
				    system("pause");
				    opzione = 7;
				    cima_montagna();
				    return;
				}
			}
			if (scelta_montagna == '3')
			{
				cout << "Decidi di non voler esplorare la grotta e ritorni al bivio\n";
				system("pause");
				bivio_md();
				return;
			}
			if(scelta_montagna == 'i')
          	{
	          	inventario();
          	}
			}
			
		}
		if (scelta_montagna == '3')//tornare al bivio tra montagna e deserto
		{
			bivio_md();
			return;
		}
		if(scelta_montagna == 'i')
	    {
	     	inventario();
     	}
		}
			
	}
	if (armatura == 1)//senza armatura
	{
		cout << "Prosegui nella direzione dalla montagna ma la temperatura si abbassa gradualmente fino a toccare i -60 gradi. Inizi a congelare e a non sentirti piu' le mane e le gambe. Nostante cio' prosegui il viaggio verso la montagna\n"; 
		system("pause");
		cout << "Dopo qualche ora sei costretto a continuare con i piedi ormai congelati che ti fanno cadere quasi ad ogni passo. Finalmente riesci ad arrivare ai piedi della montagna\n";
		while(scelta_montagna != '2' && scelta_montagna != '3' && scelta_montagna != 'm')
		{
		    cout << "1) Scali la montagna\n";
		cout << "2) Trova una via alternativa\n";
		cout << "3) Torna indietro\n"; 
		cin >> scelta_montagna;
		if (scelta_montagna == '1')//scala la montagna
		{
			if (rampino == 0)//senza rampino (morte)
			{
				cout << "Provi a scalare la montagna ma senza armatura il freddo si fa sempre piu' intenso\n"; 
				system("pause");
				cout << "Il tuo corpo e' talmente debole che ad ogni folata di vento devi usate tutte le poche forze che ti rimangono per riuscire a tenerti attaccato alla parete.\n"; 
				system("pause");
				cout << "Ad un certo punto una folata piu' forte delle altre ti fa perdere l'equilibrio e inevitabilmente precipiti, consapevole di star vivendo i tuoi ultimi secondi\n";
				system("pause");
				cout << "Hai perso\n";
				system("pause");
				main();
				return;
			}
			if (rampino == 1)//con rampino
			{
				cout << "Per scalare la montagna utilizzi il rampino che ti aiuta a raggiungere piu' in fretta la cima nonostante il freddo renda qualsiasi tuo movimento piu' goffo\n";
				system("pause");
				opzione = 7;
				cima_montagna();
				return;
			}					
		}
		if (scelta_montagna == '2')//via alternativa
		{
			cout << "Ti guardi intorno e vedi che nella montagna vi e' incastonata una grotta\n";
			while(scelta_montagna != '1' && scelta_montagna != '3' && scelta_montagna != 'm')
			{
				cout << "1) Esplora la grotta\n";
			cout << "2) Scala la montagna\n";
			cout << "3) Torna indietro\n";
			cin >> scelta_montagna;
		    if (scelta_montagna == '1')
		    {
			    if (rampino == 0)
			    {
				    cout << "\n--------------------------Grotta----------------------------------\n\n";
					cout << "Entri nella grotta che ti ripara un po' dal freddo. Ti guardi intorno e vedi un rampino, forse lasciato dagli impavidi scalatori che in passato tentarono invano di raggiungere la cima\n";
					while(scelta_montagna != '2' && scelta_montagna != 'm')
					{
						cout << "1) Prendi il rampino\n";
					cout << "2) Esci dalla grotta e torna al bivio\n";
					cin >> scelta_montagna;
					if (scelta_montagna == '1')
					{
						cout << "Prendi il rampino ed esci dalla grotta.\nDecidi poi di ritornare al bivio\n";
						rampino = 1;
						system("pause");
						bivio_md();
						return;
					}
					if (scelta_montagna == '2')
					{
						cout << "Esci dalla grotta lasciando il rampino incostudito e decidi di ritornare al bivio\n";
						system("pause");
						bivio_md();
						return;
					}
					if(scelta_montagna == 'i')
                	{
	                	inventario();
                  	}
					}
					
				}
				if(rampino == 1)
				{
					cout << "\n--------------------------Grotta----------------------------------\n\n";
					cout << "Entri nella grotta ma oltre al rampino che hai gia' preso non c'e' piu' nulla. Decidi di tornare al bivio\n";
					system("pause");
					bivio_md();
					return;
				}						
			}
			if (scelta_montagna == '2')
			{
				if (rampino == 0)//senza rampino (morte)
			    {
				    cout << "Provi a scalare la montagna ma senza armatura il freddo si fa sempre piu' intenso\n"; 
				    system("pause");
				    cout << "Il tuo corpo e' talmente debole che ad ogni folata di vento devi usate tutte le poche forze che ti rimangono per riuscire a tenerti attaccato alla parete.\n"; 
				    system("pause");
				    cout << "Ad un certo punto una folata piu' forte delle altre ti fa perdere l'equilibrio e inevitabilmente precipiti, consapevole di star vivendo i tuoi ultimi secondi\n";
				    system("pause");
				    cout << "Hai perso\n";
				    system("pause");
				    main();
				    return;
			    }
			    if (rampino == 1)//con rampino
			    {
				    cout << "Per scalare la montagna utilizzi il rampino che ti aiuta a raggiungere piu' in fretta la cima nonostante il freddo renda qualsiasi tuo movimento piu' goffo\n";
				    system("pause");
				    opzione = 7;
				    cima_montagna();
				    return;
			    }
		    }
			if (scelta_montagna == '3')
			{
				cout << "Decidi di non voler esplorare la grotta e ritorni al bivio\n";
				system("pause");
				bivio_md();
				return;
			}	
			if(scelta_montagna == 'i')
        	{
	          	inventario();
           	}
			}
						
	    }
		if (scelta_montagna == '3')//torna al bivio tra montagna e deserto
		{
			bivio_md();
			return;
		}
		if(scelta_montagna == 'i')
      	{
	       	inventario();
      	}	
		}
						
   }
	}
	if (scelta_montagna == '2')
	{
		bivio_md();
		return;
	}
	if(scelta_montagna == 'i')
	{
		inventario();
	}
	}
	
	if (scelta_montagna == 'm')
	{
		main();
		return;
	}
	if(scelta_montagna == 'i')
	{
		inventario();
	}
}
//------------------------------------------------------------------------------------------cima montagna--------------------------------------------------------------------------------------
void cima_montagna()
{
	cout << "Salvataggio progresso...\n";
	salvataggio = 10;
	scelta_montagna = '0';
	system("pause");
	if (armatura == 1 && rampino == 0)//senza armatura e senza rampino
	{
		cout << "Con un ultimo sforzo raggiungi la cima ed improvvisamente scorgi una baita\n";
		while(scelta_montagna != '1' && scelta_montagna != '2' && scelta_montagna != '3' && scelta_montagna != 'm')
		{
		    cout << "1) Corri verso la baita\n";
		cout << "2) Prosegui lasciandoti la baita alle spalle\n";
		cout << "3) Torna indietro\n";
		cin >> scelta_montagna;
		if (scelta_montagna == '1')//corri verso la baita
		{
			cout << "Cadi per terra, l'ipotermia ti impedisce di appoggiarti sulle mani per rialzarti e sei costretto ad appoggiarti ad un albero per poter rimetterti in piedi.\nTi incammini verso la baita, incespicando in ogni cumulo di neve. Finalmene riesci a raggiungere la baita. \n";
			while(scelta_montagna != '2' && scelta_montagna != '3' && scelta_montagna != 'm')
			{
				cout << "1) Entra nella baita\n";
			cout << "2) Non entrare nella baita e prosegui il viaggio\n";
			cout << "3) Torna indietro\n";
			cin >> scelta_montagna;
			if (scelta_montagna == '1')//entra nella baita
			{
				cout << "\n--------------------------Baita abbandonata----------------------------------\n\n";
				cout << "Entri nella baita e trovi solamente un letto rifatto.\nTi sdrai nel letto, ti copri, e appoggi la testa sul cuscino. Chiudi gli occhi\n";
				system("pause");
				cout << "Non sai dove sei ma per la prima volta dopo tanti giorni ti senti bene, in pace con te stesso e con il mondo. Ti guardi intorno e vedi un uomo disteso nella neve. Ti avvicini lentamente fino a riuscire a vedere il suo viso e solo allora capisci che la baita era soltanto un illusione\n";
				system("pause");
				cout << "Hai perso\n";
				system("pause");
				main();
				return;	   	
			}
			if (scelta_montagna == '2')//lascia stare la baita e prosegui
			{
				cout << "Non entri nella baita... solo un pazzo puo' vivere in quella landa desolata. Prosegui il viaggio\n";
				system("pause");
				if (inferno == 0)//visione luce
				{
					cout << "Non vuoi arrenderti e dopo una lunga camminata vedi in lontananza una luce\n";
					while(scelta_montagna != '1' && scelta_montagna != 'm')
					{
					    cout << "1) Vai verso la luce\n";
					cout << "2 ) Con le ultime forze provi a tornare indietro\n";
					cin >> scelta_montagna;
					if (scelta_montagna == '1')//vai verso la luce
					{
						cout << "Non ti resta molto tempo prima che il tuo corpo collassi, quella luce e' la tua ultima speranza e cerchi quindi di raggiungerela\n";
						system("pause");
						cout << "Una volta raggiunta provi ad afferrerla ma essa scompare e vieni circondato da una nube scura\n";
						system("pause");
						cout << "Non vedi piu' nulla, ti fai prendere dal panico e chiudi gli occhi\n";
						system("pause");
						cout << "\n---------------Inferno--------------------\n\n";
						cout << "Una volta riaperti ti trovi faccia a faccia con la Morte\n";
						morte();
						return;	
					}
					if (scelta_montagna == '2')//torna indietro dalla luce(morte)
					{
						cout << "Provi a tornare indietro ma con tutta questa neve le strade sembrano tutte uguali\n";
						system("pause");
						cout << "Scegli una direzione e inizi a camminare.\nDopo neanche 20 minuti cadi nella neve, provi a rialzarti ma le tue mani sono congelate, i tuoi piedi sono duri come la roccia e le tue gambe non rispondono piu' ai tuoi comandi. Capisci che hai esaurito il tuo tempo su questa terra. la mente inizia a vagare fra i tuoi ricordi... vedi immagini confuse che racconatano la tua vita e poi una domanda sorge spontanea:''e se non avessi aperto la busta?''. Chiudi gli occhi\n";
						system("pause");
						cout << "Hai perso\n";
						system("pause");
						main();
						return;	
					}
					if (scelta_montagna == 'i')
                	{
				
	                	inventario();	
                	}	
					}
											    	
				}
				if (inferno == 1)//non visione luce con morte
				{
					cout << "Dopo una lunga e faticosa camminata ti accorgi che la luce delle anime che avevi avvistato ormai e' scomparsa. Oltre a neve e alberi non c'e' nient'altro.\nDecidi di scendere dalla montagna e di ritornare al bivio\n";	 
					system("pause");
					cout << "Provi a tornare indietro ma con tutta questa neve le strade ti sembrano tutte uguali\n";
					system("pause");
					cout << "Scegli una direzione e inizi a camminare.\nDopo neanche 20 minuti cadi nella neve, provi a rialzarti ma le tue mani sono congelate, i tuoi piedi sono duri come la roccia e le tue gambe non rispondono piu' ai tuoi comandi. Capisci che hai esaurito il tuo tempo su questa terra. la mente inizia a vagare fra i tuoi ricordi... vedi immagini confuse che racconatano la tua vita e poi una domanda sorge spontanea:''e se non avessi aperto la busta?''. Chiudi gli occhi\n";
					system("pause");
				    cout << "Hai perso\n";
					system("pause");
					main();
					return;	
							   	
				}						
			}
			if (scelta_montagna == '3')// torna indietro
			{
				cout << "Per fortuna la baita si trova vicino ad una delle pareti della montagna,\nla raggiungi subito ed inizi a scendere.\nNonostante il tuo stato sai che stai lottando per la sopravvivenza e riesci a scendere dalla montagna ritornando al bivio\n";
				system("pause");
				bivio_md();
				return;	    	
			}
			if (scelta_montagna == 'i')
        	{
				
	           	inventario();	
        	}
			}
			
		}
		if (scelta_montagna == '2')//lascia stare la baita
		{
			if (inferno == 0)//visione luce
			{
				cout << "Non vuoi arrenderti e dopo una lunga camminata vedi in lontananza una luce\n";
				while(scelta_montagna != '1' && scelta_montagna != 'm')
				{
					cout << "1) Vai verso la luce\n";
				cout << "2) Con le ultime forze provi a tornare indietro\n";
				cin >> scelta_montagna;
				if (scelta_montagna == '1')//vai verso la luce
				{
						cout << "Non ti resta molto tempo prima che il tuo corpo collassi, quella luce e' la tua ultima speranza e cerchi quindi di raggiungerela\n";
						system("pause");
						cout << "Una volta raggiunta provi ad afferrerla ma essa scompare e vieni circondato da una nube scura\n";
						system("pause");
						cout << "Non vedi piu' nulla, ti fai prendere dal panico e chiudi gli occhi\n";
						system("pause");
						cout << "\n---------------Inferno--------------------\n\n";
						cout << "Una volta riaperti ti trovi faccia a faccia con la Morte\n";
						morte();
						return;	
				}
				if (scelta_montagna == '2')//torna indietro dalla luce(morte)
				{
						cout << "Provi a tornare indietro ma con tutta questa neve le strade sembrano tutte uguali\n";
						system("pause");
						cout << "Scegli una direzione e inizi a camminare.\nDopo neanche 20 minuti cadi nella neve, provi a rialzarti ma le tue mani sono congelate, i tuoi piedi sono duri come la roccia e le tue gambe non rispondono piu' ai tuoi comandi. Capisci che hai esaurito il tuo tempo su questa terra. la mente inizia a vagare fra i tuoi ricordi... vedi immagini confuse che racconatano la tua vita e poi una domanda sorge spontanea:''e se non avessi aperto la busta?''. Chiudi gli occhi\n";
						system("pause");
						cout << "Hai perso\n";
						system("pause");
						main();
						return;	
				}
				if (scelta_montagna == 'i')
            	{
				
	            	inventario();	
            	}
				}
										    	
			}
			if (inferno == 1)//non visione luce con morte
			{
					cout << "Dopo una lunga e faticosa camminata ti accorgi che la luce delle anime che avevi avvistato ormai e' scomparsa. Oltre a neve e alberi non c'e' nient'altro.\nDecidi di scendere dalla montagna e di ritornare al bivio\n";	 
					system("pause");
					cout << "Provi a tornare indietro ma con tutta questa neve le strade ti sembrano tutte uguali\n";
					system("pause");
					cout << "Scegli una direzione e inizi a camminare.\nDopo neanche 20 minuti cadi nella neve, provi a rialzarti ma le tue mani sono congelate, i tuoi piedi sono duri come la roccia e le tue gambe non rispondono piu' ai tuoi comandi. Capisci che hai esaurito il tuo tempo su questa terra. la mente inizia a vagare fra i tuoi ricordi... vedi immagini confuse che racconatano la tua vita e poi una domanda sorge spontanea:''e se non avessi aperto la busta?''. Chiudi gli occhi\n";
					system("pause");
				    cout << "Hai perso\n";
					system("pause");
					main();
					return;	
							   	
			}			    
		}
		if (scelta_montagna == '3')//torna indietro
		{
			cout << "Dopo tanto sforzo per scalare la montagna, inizi a pensare che sia tutto inutile e che in cima non troverai nulla. Decidi di tornare indietro.\nNonostante il tuo stato sai che stai lottando per la sopravvivenza e riesci a scendere dalla montagna ritornando al bivio\n";
			system("pause");
			bivio_md();	
			return;			
		}
		if (scelta_montagna == 'i')
      	{
				
	        	inventario();	
      	}	
		}
					    
	}
	if (armatura == 0 && rampino == 0)//con armatura ma senza rampino
	{
		while (scelta_montagna != '1' && scelta_montagna != '2' && scelta_montagna != 'm')
		{
			cout << "1) Prosegui lungo la cima\n";
		cout << "2) Torna indietro\n";
		cin >> scelta_montagna;
		if (scelta_montagna == '1')//prosegui lungo la cima
		{
			if (inferno == 0)//visione luce
		    {
			    cout << "Dopo esserti ripreso dallo sforzo ti incammini lungo la cima della montagna.\nDopo qualche ora vedi una luce in lontanaza\n";
				while(scelta_montagna != '2' && scelta_montagna != 'm')
				{
					cout << "1) Vai verso la luce\n";
				cout << "2) Provi a tornare indietro\n";
				cin >> scelta_montagna;
				if (scelta_montagna == '1')//vai verso la luce
				{
					cout << "Nonostante il peso dell'armatura ti faccia sprofondare ancora di piu' nella neve, ti avvicini alla luce\n";
					system("pause");
					cout << "Una volta raggiunta provi ad afferrerla ma essa scompare e vieni circondato da una nube scura\n";
					system("pause");
					cout << "Non vedi piu' nulla, ti fai prendere dal panico e chiudi gli occhi\n";
					system("pause");
					cout << "\n---------------Inferno--------------------\n\n";
					cout << "Una volta riaperti ti trovi faccia a faccia con la Morte\n";
					morte();
					return;		
				}
				if (scelta_montagna == '2')//torna indietro dalla luce(morte)
				{
					cout << "Provi a tornare indietro ma con tutta questa neve le strade ti sembrano tutte uguali\n";
					system("pause");
					cout << "Scegli una direzione e inizi a camminare.\nDopo un paio d'ore inizia a nevicare. Ormai il tuo corpo procede quasi autonomamente, la tua testa non ce la fa piu' e chiudi gli occhi continuando ormai nella convizione di morire in quella landa desolata. Purtroppo in questo modo hai firmato la tua condanna perche' con gli occhi chiusi non hai potuto vedere il burrone in cui sei precipitato.\n";
					system("pause");
					cout << "Hai perso\n";
					system("pause");
					main();
					return;	
				}
				if (scelta_montagna == 'i')
            	{
				
	            	inventario();	
              	}
				}
												    	
			}
			if (inferno == 1)//non visione luce con morte
			{
				cout << "Dopo una lunga e faticosa camminata ti accorgi che la luce delle anime che avevi avvistato ormai e' scomparsa. Oltre a neve e alberi non c'e' nient'altro.\nDecidi di scendere dalla montagna e di ritornare al bivio\n";	 
				system("pause");
				cout << "Provi a tornare indietro ma con tutta questa neve le strade ti sembrano tutte uguali\n";
				system("pause");
				cout << "Scegli una direzione e inizi a camminare.\nDopo un paio d'ore inizia a nevicare. Ormai il tuo corpo procede quasi autonomamente, la tua testa non ce la fa piu' e chiudi gli occhi continuando ormai nella convizione di morire in quella landa desolata. Purtroppo in questo modo hai firmato la tua condanna perche' con gli occhi chiusi non hai potuto vedere il burrone in cui sei precipitato.\n";
				system("pause");
				cout << "Hai perso\n";
				system("pause");
				main();
				return;	
							   	
			}
		}
		if (scelta_montagna == '2')//torna indietro
		{
			cout << "Pensi che sulla cima non troverai nulla di utile e decidi di scendere dalla montagna. Ritorni al bivio\n";
			system("pause");
		    bivio_md();
		    return;	
		}
		if (scelta_montagna == 'i')
     	{
				
	        	inventario();	
    	}
		}
					
	}
	if (rampino == 1 && opzione == 7)//con rampino
	{
		cout << "Una volta in cima decidi di\n";
		while(scelta_montagna != '1' && scelta_montagna != '2' && scelta_montagna != 'm')
		{
			cout << "1) Proseguire\n";
		cout << "2) Tornare indietro\n";
		cin >> scelta_montagna;
		if (scelta_montagna == '1')
		{
			if (inferno == 0)//visione luce
			{
				cout << "Dopo ore ed ore di camminata vedi una luce in lontanaza\n";
				while(scelta_montagna != '2' && scelta_montagna != 'm')
				{
					cout << "1) Vai verso la luce\n";
				cout << "2) Provi a tornare indietro\n";
				cin >> scelta_montagna;
				if (scelta_montagna == '1')//vai verso la luce
				{
					cout << "Ti dirigi verso la luce\n";
					system("pause");
					cout << "Una volta raggiunta provi ad afferrerla ma essa scompare e vieni circondato da una nube scura\n";
					system("pause");
					cout << "Non vedi piu' nulla, ti fai prendere dal panico e chiudi gli occhi\n";
					system("pause");
					cout << "\n---------------Inferno--------------------\n\n";
					cout << "Una volta riaperti ti trovi faccia a faccia con la Morte\n";
					morte();
					return;	
				}
				if (scelta_montagna == '2')//torna indietro dalla luce(morte)
				{
					cout << "Provi a tornare indietro ma con tutta questa neve le strade ti sembrano tutte uguali\n";
					system("pause");
					cout << "Scegli una direzione e inizi a camminare.\nDopo un paio d'ore inizia a nevicare. Ormai il tuo corpo procede quasi autonomamente, la tua testa non ce la fa piu' e chiudi gli occhi continuando ormai nella convizione di morire in quella landa desolata. Purtroppo in questo modo hai firmato la tua condanna perche' con gli occhi chiusi non hai potuto vedere il burrone in cui sei precipitato.\n";
					system("pause");
					cout << "Hai perso\n";
					system("pause");
					main();
					return;
				}
				if (scelta_montagna == 'i')
              	{
				
	                inventario();	
             	}
				}
				
			}
			if (inferno == 1)//non visione luce con morte
			{
				cout << "Dopo ore di camminata davanti a te vedi solo una grande distesa di neve\n";
				while(scelta_montagna != '2' && scelta_montagna != 'm')
				{
					cout << "1) Prosegui\n";
				cout << "2) Torna indietro\n";
				cin >> scelta_montagna;
				if (scelta_montagna == '1')
				{
					while (scelta_montagna == '1')
					{
						cout << "Dopo ore di camminata davanti a te vedi solo una grande distesa di neve\n";
						cout << "1) Prosegui\n";
						cout << "2) Torna indietro\n";
						cin >> scelta_montagna;
						if (scelta_montagna == '2')
						{
							cout << "Provi a tornare indietro ma non riesci a capire da che direzione sei arrivato. Scegli una direzione e inizi a camminare\n";
					        system("pause");
					        cout << "Dopo un paio d'ore inizia a nevicare. Ormai il tuo corpo procede quasi autonomamente, la tua testa non ce la fa piu' e chiudi gli occhi continuando ormai nella convizione di morire in quella landa desolata. Purtroppo in questo modo hai firmato la tua condanna perche' con gli occhi chiusi non hai potuto vedere il burrone in cui sei precipitato.\n";
					        system("pause");
					        cout << "Hai perso\n";
					        system("pause");
					        main();
					        return;
						}
					}
				}
				if (scelta_montagna == '2')
				{
				    cout << "Dopo ore di camminata ti convinci che non troverai niente e decidi di ritornare al bivio\n";
				    system("pause");
					bivio_md();
					return;	
				}
				if (scelta_montagna == 'i')
             	{
				
	            	inventario();	
             	}
				}
										   	
			}					
		}
		if (scelta_montagna == '2')//torna indietro
		{
			cout << "Pensi che sulla montagna non troverai nulla di utile allora decidi di scendere.\nGrazie al rampino riesci a scendere molto velocemente ed a raggiungere il bivio in poco tempo\n";
			system("pause");
			bivio_md();
			return;	
		}
		if (scelta_montagna == 'i')
       	{
				
	       	inventario();	
    	}	
		}
					
	}
	if (scelta_montagna == 'm')
	{
				
		main();
		return;	
	}
	if (scelta_montagna == 'i')
	{
				
		inventario();	
	}			
}
//-------------------------------------------------------------------------------------------inferno-----------------------------------------------------------------------------------------
void morte()
{
	scelta_inferno = '0';
	while(scelta_inferno != '1' && scelta_inferno != '2' && scelta_inferno != 'm')
	{
		cout << "1) Parla con la Morte\n";
	cout << "2) Guardati intorno\n";
	cin >> scelta_inferno;
	if (scelta_inferno == '2')//guardati intorno nell'inferno
	{
		while (scelta_inferno == '2' && scelta_inferno != '1' && scelta_inferno != 'm')
		{
			cout << "Guardandoti intorno vedi le anime dei soldati caduti in battaglia, ancora sanguinanti e trafitti da spade e lance. Le loro urla si uniscono a quelle di tutti coloro che hanno meritato l'inferno.\nDi questo luogo le fiamme sono come tiranni che infliggono ulteriori pene ai tristi residenti.\nAbbassi lo sguardo e non vedi altro che terra morta, non c'e' un filo d'erba che cresce, anche perche' dal cielo non proviene neanche un minuscolo raggio di luce\n";
			cout << "1) Parla con la Morte\n";
			cout << "2) Guardati intorno\n";
			cin >> scelta_inferno;
	   	}
	}
	if (scelta_inferno == '1')//parla con la morte
	{
		while(scelta_inferno !='2' && scelta_inferno != '3' && scelta_inferno != '4' && scelta_inferno != '5' && scelta_inferno != '6' && scelta_inferno != 'm')
		{
			cout << "Morte:''come hai osato toccare la luce delle anime!! Per uscire dal mondo degli inferi e ritornare al tuo mondo devi risolvere un indovinello:\nsai dirmi cos'e' che non ha gambe, ne' braccia, ne' testa, ne' corpo ma tuttavia entra dappertutto\n";
		cout << "1) Acqua\n";
		cout << "2) Luce\n";
		cout << "3) Vento\n";
		cout << "4) Le anime\n";
		cout << "5) Laser\n";
		cout << "6) Fuoco\n";
		cin >> scelta_inferno;
		if (scelta_inferno == '3')//risposta esatta
		{
			if (armatura == 0)//con armatura
			{
				cout << "Morte:''complimenti!! hai il diritto di tornare da dove sei venuto. In cambio pero' mi devi lasciare la tua armatura e la tua spada. La morte vuole sempre qualcosa in cambio. AH AH AH!!!\n";
				armatura = 1;
				inferno = 1;
				system("pause");
				cout << "Una folata di vento ti trasporta fuori dal mondo degli inferi e ti riporta al bivio\n";
				bivio_md();
				return;
			}
			if (armatura == 1)//senza armatura
			{
				cout << "Morte:''complimenti!! purtroppo mi tocca mantenere il patto, hai il diritto di ritornare da dove sei venuto\n";
				system("pause");
				inferno = 1;
				cout << "Una folata di vento ti trasporta fuori dal mondo degli inferi e ti riporta al bivio\n";
				bivio_md();
				return;
			}
		}
		if (scelta_inferno == '1' || scelta_inferno == '2' || scelta_inferno == '4' || scelta_inferno == '5' || scelta_inferno == '6')//risposta sbagliata
		{
			cout << "Morte:''sbagliato! la tua ingeniuita' ti ha fatto condannare all'esilio eterno nella mia terra. AH AH AH!!!\n";
			system("pause");
			cout << "Hai perso\n";
			system("pause");
			main();
			return; 
		}
		if(scelta_inferno == 'i')
      	{
	        inventario();
      	}
 		}
					
	}
	if(scelta_inferno == 'i')
	{
		inventario();
	}
	}
	
	if (scelta_inferno == 'm')
	{
		main();
		return;							
	}
	if(scelta_inferno == 'i')
	{
		inventario();
	}		
}
//------------------------------------------------------------------------------------bivio(montagna,deserto)----------------------------------------------------------------------------
void bivio_md()
{
	cout << "Salvataggio progresso...\n";
	salvataggio = 7;
	scelta_foresta = '0';
	system("pause");
	cout << "\n------------------Secondo incrocio-------------------------------------\n\n";
	cout << "Sei ritornato al bivio, a destra vi e una zona verde e scoscesa invece a sinistra vi e' una zona arida e ventosa\n";
	while(scelta_foresta != '1' && scelta_foresta != '2' && scelta_foresta != '3' && scelta_foresta != 'm')
	{
		cout << "1) Destra\n";
	cout << "2) Sinistra\n";								    
	cout << "3) Torna indietro\n";
	if (chiave == 0)
	{
	    cout << "4) Ricordati le parole del Re\n";
	}
	cin >> scelta_foresta;
	if(scelta_foresta == '1')//percorso montagna
	{
		if(rampino == 0)
		{
			opzione = 3;
		}
		if(rampino != 0)
		{
			opzione = 4;
	    }
						
		
		scala_montagna();
		return;
	}
	if(scelta_foresta == '2')//percorso deserto
	{
		deserto();
		return;
	}
	if(chiave == 0)
	{
			if(scelta_foresta == '4')//ricordare le parole del Re
    {
		parole_Re();
		return;
	}
	}

	if(scelta_foresta == '3')//tornare indietro
	{
		cout << "Torni indietro riattraversando la foresta\n";
		system("pause");
		bivio_vfl();
		return;										
	}
	if(scelta_foresta == 'm')
	{
		main();
		return;
				
	}
	if(scelta_foresta == 'i')
	{
		inventario();
	}
	}
	
}
//----------------------------------------------------------------------------------------deserto---------------------------------------------------------------------------------------------
void deserto()
{
	cout << "Salvataggio progresso...\n";
	salvataggio = 8;
	scelta_deserto = '0';
	system("pause");
	cout << "\n--------------------------Deserto----------------------------------\n\n";
	cout << "Scegli il percorso di sinistra e ti ritrovi a camminare con i piedi che sprofondono nella sabbia. Guardandoti attorno ti rendi conto che sei finito in un deserto e poco dopo inizi a sudare a causa del caldo afoso\n";
	while (scelta_deserto != '1' && scelta_deserto != '2' && scelta_deserto != 'm')
	{
		cout << "1) Prosegui\n";
	cout << "2) Torna indietroi\n";
	cin >> scelta_deserto;
	if (scelta_deserto == '1')
	{
		if (armatura == 0)//con armatura
		{
			cout << "Nonostante il caldo prosegui il tuo cammino\n";
			system("pause");
			cout << "Dopo ore di cammino senza vedere anima viva, il caldo si fa sempre piu' forte. L'armatura cha hai addosso rende il calore ancora piu' insopportabile al punto di non riuscire quasi reggerti in piedi\n";
			while(scelta_deserto != '2' && scelta_deserto != '3' && scelta_deserto != 'm')
			{
			     cout << "1) Cerca di proseguire con l'armatura addosso\n";
			cout << "2) Prosegui togliendoti l'armatura\n";
			cout << "3) Torna indietro\n";
			cin >> scelta_deserto;
			if (scelta_deserto == '1')//prosegui con armatura
			{
				cout << "Raccogli tutte le tue forze e ti rimetti in viaggio\n";
				system("pause");
				cout << "Dopo qualche minuto di camminata sei sfinito ma continui a camminare cadendo piu' e piu' volte. Ad un certo punto alzi lo sguardo e vedi una maestosa piramide affiancata da un'oasi\n";
				while(scelta_deserto != '2' && scelta_deserto != '3' && scelta_deserto != 'm')
				{
					cout << "1) Vai all'oasi\n";
				cout << "2) Entra nella piramide\n";
				cout << "3) Torna indietro\n";
				cin >> scelta_deserto;
				if (scelta_deserto == '1')//oasi
				{
					cout << "\n--------------------------Oasi----------------------------------\n\n";
					cout << "Ti dirigi verso l'oasi ed istintivamente ti butti dentro alla pozza d'acqua per rinfrescarti e dissetarti\n";
					system("pause");
					cout << "Con le mani prendi un po' d'acqua e la porti alla bocca.\nAppena inizi ad assaporarla ti rendi conto che e' solo sabbia\n";
					system("pause");
					cout << "Questa situazione ti fa ritornare ad essere lucido. Ti accorgi ormai trppo tardi che il tuo corpo sta sprofondando lentamente.\nCapisci immediatamente che sei finito nelle sabbie mobili ed inizi a cercare un appiglio per tirarti fuori. Ormai pero' la sabbia ti arriva al collo e capisci di non avere alcuna speranza... l'oasi era solo un miraggio\n";
					system("pause");
					cout << "Hai perso\n";
					system("pause");
					main();
					return;
				}
				if (scelta_deserto == '2')//piramide
				{

					cout << "Entri nella piramide che finalmente impedisce ai raggi del sole di raggiungerti. Cio' ti da la forza di continuare\n";
					system("pause");
					piramide();
					return;
				}
				if (scelta_deserto == '3')//torna indietro
				{
					bivio_md();
					return;
				}
				if (scelta_deserto == 'i')//torna al menu
            	{
	              	inventario();	
               	}
				}
							
			}
			if (scelta_deserto == '2')//prosegui senza armatura
			{
				cout << "Per il troppo caldo ti togli l'armatura e l'appoggi sulla sabbia\n"; 
				system("pause");
				cout << "Appena la appoggi essa inizia a sprofondare tirandosi dietro la spada a cui l'avevi legata. Provi a tirala fuori ma e' come se pesasse 100 volte di piu' e scompare per sempre sotto la sabbia.\nArrabbiato per la perdita dell'armatura e della spada prosegui il tuo cammino. L'unico lato positivo e' che adesso il caldo e' piu'sopportabile\n";
				system("pause");
				cout << "Dopo qualche minuto di camminata ti trovi davanti ad una maestosa piramide\n";
				while(scelta_deserto != '1' && scelta_deserto != 'm')
				{
					cout << "1) Entra nella piramide\n";
				cout << "2) Torna indietro\n";
				cin >> scelta_deserto;
				if (scelta_deserto == '1')//piramide
				{
	
					cout << "Entri nella piramide che finalmente impedisce ai raggi del sole di raggiungerti. Cio' ti da la forza di continuare\n";
					system("pause");
					piramide();
					return;
				}
				if (scelta_deserto == '2')//torna indietro
				{
					bivio_md();
					return;
				}
				if (scelta_deserto == 'i')//torna al menu
             	{
	              	inventario();	
              	}
				}
				
			}
			if (scelta_deserto == '3')//torna indietro
			{
				bivio_md();
		        return;
			}
			if (scelta_deserto == 'i')//torna al menu
         	{
	           	inventario();	
         	}	
			}
			
 		}
		if (armatura == 1 )//senza armatura
		{
			cout << "Nonostante il caldo prosegui il tuo cammino lungo l'enorme distesa di sabbia\n";
			system("pause");
			cout << "Dopo ore di cammino senza vedere anima viva, il caldo si fa sempre piu' forte. Per fortuna senza armatura riesci a sopportarlo meglio\n";
			while(scelta_deserto != '2' && scelta_deserto != 'm')
			{
				cout << "1) Prosegui\n";
			cout << "2) Torna indietro\n";
			cin >> scelta_deserto;
			if (scelta_deserto == '1')
			{
				cout << "Decidi di proseguire il viaggio con la consapevolezza che potresti non trovare nulla\n";
				system("pause");
				cout << "Dopo qualche minuta davanti a te copare una maestosa piramide\n";
				while (scelta_deserto != '2' && scelta_deserto != 'm')
				{
					cout << "1) Entri nella piramide\n";
				cout << "2) Torna indietro\n";
				cin >> scelta_deserto;
				if (scelta_deserto == '1')
				{
					cout << "Entri nella piramide che finalmente impedisce ai raggi del sole di raggiungerti. Cio' ti da la forza di continuare\n";
					system("pause");
					piramide();
					return;
				}
				if (scelta_deserto == '2')
				{
					bivio_md();
					return;
				}
				if (scelta_deserto == 'i')//torna al menu
             	{
	            	inventario();	
              	}
				}
				
			}
			if (scelta_deserto == '2')
			{
				bivio_md();
				return;
			}
			if (scelta_deserto == 'i')//torna al menu
           	{
	          	inventario();	
          	}
			}
			
		}	
		
	}
		if (scelta_deserto == '1')//torna indietro
	{
		bivio_md();
		return;	
	}
	if (scelta_deserto == 'i')//torna al menu
	{
		inventario();	
	}
	}
	
		if (scelta_deserto == 'm')//torna al menu
	{
		main();
		return;	
	}
	if (scelta_deserto == 'i')//torna al menu
	{
		inventario();	
	}
}
//----------------------------------------------------------------------------piramide------------------------------------------------------------------------------------------
void piramide()
{
	cout << "Salvataggio progressi...\n";
	salvataggio = 11;
	cout << "\n------------------Piramide---------------------\n\n";
	scelta_deserto = '0';
	system("pause");
	cout << "Ti trovi davanti a tre strade, una che porta a sinistra, una che porta a destra e una continua davanti a te\n";
	while(scelta_deserto != '1' && scelta_deserto != '2' && scelta_deserto != '3' && scelta_deserto != '4' && scelta_deserto != 'm')
	{
		cout << "1) Destra\n";
	cout << "2) Sinistra\n";
	cout << "3) Avanti\n";
	cout << "4) Torna indietro\n";
	cin >> scelta_deserto;
	if(scelta_deserto == '1')//bivio destra
	{
		cout << "Segui la strada di destra e dopo qualche metro ti trovi ad affrontare un'altro bivio\n";
		while(scelta_deserto != '2' && scelta_deserto != '3' && scelta_deserto !='m')
		{
			cout << "1) Sinistra\n";
		cout << "2) Destra\n";
		cout << "3) Torna all'inizio della piramide\n";
		cin >> scelta_deserto;
		if (scelta_deserto == '1')//secondo bivio sinistra
		{
			cout << "Prendi la strada a sinistra e inizi a percorrerla.\nArrivi alla fine e ti trovi la strada sbarrata da un muro. Senza altre alternative decidi di tornare indietro\n";
			system("pause");
			cout << "Mentre torni indietro accidentalmente metti un piede su una piastrella che fa attivare un meccanismo. Sei subito innondato da un fiume di frecce che ti colpiscono piu' e piu' volte\n";
			system("pause");
			if (armatura == 0)
			{
				cout << "Grazie all'armatura le frecce ti rimbalzano addosso senza trafiggerti e riesci a tornare indietro\n";
				system("pause");
				piramide();
				return;
			}
			if (armatura == 1)
			{
				cout << "Non avendo l'armatura vieni trafitto da innumerevoli frecce e cadi a terra ferito\n";
				system("pause");
				cout << "Hai perso\n";
				system("pause");
				main();
				return;
			}
		}
		if (scelta_deserto == '2')//secondo bivio destra
		{
			if(rosa == 0)
			{
				cout << "Prendi la strada a destra e ti ritrovi dentro una stanza. Al centro si trova un piedistallo su cui vi e' appoggiata una rosa del deserto illuminata da un fascio di luce\n";
			    while(scelta_deserto != '1' && scelta_deserto != 'm')
			    {
			    	cout << "1) Prendi la rosa del deserto\n";
			    cout << "2) Lascia la rosa sul piedistallo e torna all'inizio della piramide\n";
			    cin >> scelta_deserto;
			    if (scelta_deserto == '1')
			    {
				    cout << "Ti avvicini alla rosa del deserto e con un gesto veloce la prendi\n";
				    rosa = 1;
				    system("pause");
				    cout << "Inizi a correre velocemente verso l'entrata della piramide per paura che si attivi una trappola come nei film. Per fortuna non sucede nulla\n";
				    system("pause");
				    piramide();
				    return;
			    }
			    if (scelta_deserto == '2')
			    {
				    piramide();
				    return;
			   }
			   if(scelta_deserto == 'i')//torna al menu
            	{
	            	inventario();
               	
				}
			   }
			}
			if(rosa ==1)
			{
				cout << "Prendi il bivio di destra e ti ritrovi dentro alla stanza.  Al centro si trova il piedistallo ma e' vuoto.\nDecidi di tornare all'inizio della piramide\n";
				system("pause");
				piramide();
				return;
			}
			
		}
		if (scelta_deserto == '3')//torna all'inizio della piramide
		{
			piramide();
			return;
		}
		if(scelta_deserto == 'i')
		{
			inventario();
		}
		}
		
	}
	if(scelta_deserto == '2')//bivio sinistra
	{
		cout << "Prendi la strada a sinistra e ti imbatti in un altro bivio\n";
		while(scelta_deserto != '1' && scelta_deserto != '3' && scelta_deserto != 'm')
		{
			cout << "1) Destra\n";
		cout << "2) Sinistra\n";
		cout << "3) Torna all'inizio della piramide\n";
		cin >> scelta_deserto;
		if(scelta_deserto == '1')
		{
			cout << "Prendi la strada a destra e ti trovi in una stanza dove al centro vi e' un pulsante\n";
			while(scelta_deserto != '2' && scelta_deserto != 'm')
			{
				cout << "1) Premi il pulsante\n";
			cout << "2) Torna all'inizio della piramide\n";
			cin >> scelta_deserto;
			if (scelta_deserto == '1')
			{
				cout << "Subito dopo che hai premuto il pulsante la stanza si chiude. Non ci sono piu' vie d'uscita ed inizi a sentire dei rumori strani\n";
				system("pause");
				cout << "Il pavimento inizia a tremare\n";
				system("pause");
				cout << "Ti guardi attorno e ti accorgi che le pareti intorno a te si stanno avvicinando.\nSe non trovi una via di fuga rimarrai schiacciato. Provi a ripremere il pulsante e a dare dei colpi sulle pareti alla ricerca di un punto debole. Putroppo e' tutto inutile\n";
				system("pause");
				cout << "Hai perso\n";
				system("pause");
				main();
				return;
			}
			if (scelta_deserto == '2')
			{
				piramide();
				return;
			}
			if(scelta_deserto == 'i')//torna al menu
         	{
	           	inventario();
           	}
			}
			
		}
		if(scelta_deserto == '2')
		{
			cout << "prendi la strada a sinistra e ti imbatti in un altro bivio\n";
		    while(scelta_deserto != '1' && scelta_deserto != '3' && scelta_deserto != 'm')
		    {
		    	cout << "1) Destra\n";
		    cout << "2) Sinistra\n";
	     	cout << "3) Torna all'inizio della piramide\n";
		    cin >> scelta_deserto;
		    if (scelta_deserto == '1')
		    {
		    	cout << "Prendi la strada a destra e ti ritrovi dentro ad una stanza con al centro una leva\n";
		    	while (scelta_deserto != '2' && scelta_deserto != 'm')
		    	{
		    		cout << "1) Usa la leva\n";
			    cout << "2) Torna all'inizio della piramide\n";
			    cin >> scelta_deserto;
			    if(scelta_deserto == '1')
			    {
			    	if(leva == 0)
			    	{
			    		cout << "Abbassi la leva e senti un rumore, come se si sia aperta una porta.\nNella stanza non e' successo nulla quindi esci e torni all'inizio della piramide\n";
			    	leva = 1;
					system("pause");
			    	piramide();
			    	return;
					}
					if(leva == 1)
			    	{
			    		cout << "Alzi la leva e senti un rumore, come se si sia chiusa una porta.\nNella stanza non e' successo nulla quindi esci e torni all'inizio della piramide\n";
			    	leva = 0;
					system("pause");
			    	piramide();
			    	return;
					}
					
				}
				if(scelta_deserto == '2')
			    {
			    	piramide();
			    	return;
				}
				if(scelta_deserto == 'i')//torna al menu
            	{
	            	inventario();
             	}
				}
				
			    
			}
			 if (scelta_deserto == '2')
		    {
		    	cout << "Prendi la strada a sinistra. IL pavimento inizia a tremare\n";
				system("pause");
				cout << "Soto ai tuoi piedi si apre una voragine e cadi in lago di lava\n";
				system("pause");
				cout << "Hai perso\n";
				system("pause");
				main();
				return;
			}
			 if (scelta_deserto == '3')
		    {
		    	piramide();
				return;
			}
			if(scelta_deserto == 'i')//torna al menu
        	{
	           	inventario();
          	}
			}
			
		}
		if(scelta_deserto == '3')
		{
			piramide();
			return;
		}
		if(scelta_deserto == 'i')//torna al menu
      	{
	         	inventario();
      	}
		}
		
	}
	if(scelta_deserto == '3')//bivio avanti
	{
		if(blocco_piramide == 0 && attacco_scorpione == 0)
		{
			
			if (leva == 0)
		{
			cout << "Segui la strada di fronte a te e dopo qualche metro ti imbatti in un enorme scorpione che sembra custodire una porta chiusa\n";
			while(scelta_deserto != '1' && scelta_deserto != '2' && scelta_deserto != 'm')
			{
				cout << "1) Attacca lo scorpione\n";
			cout << "2) Torna all'inizio della piramide\n";
			if (rosa == 1)
			{
				cout << "3) Utilizza la rosa del deserto\n";
			}
			cin >> scelta_deserto;
			if (scelta_deserto == '1')
			{
				if (armatura == 0)
				{
					cout << "Con coraggio tiri fuori la spada e attacchi la bestia\n";
					system("pause");
					cout << "Dopo vari colpi ti accorgi che non gli hai arrecato alcun danno.\nMentre rifletti su come poterla abbattere lei ne approfitta e ti attacca. Con il suo pungiglione riesce a penetrare l'armatura e inizia ad iniettere una grande quantita di veleno\n";
					system("pause");
					cout << "il veleno ti paralizza e non puoi piu' ne scappare ne attaccarla. Sei diventato il suo nuovo giocattolino\n";
					system("pause");
					cout << "Hai perso\n";
					system("pause");
					main();
					return;
				}
				if (armatura == 1)
				{
					cout << "Con coraggio e senza spada provi ad attaccare la bestia\n";
					system("pause");
					cout << "Dopo vari colpi ti accorgi che non gli hai arrecato alcun danno.\nMentre rifletti su come poterla abbattere lei ne approfitta e ti attacca. Con il suo pungiglione riesce a colpirti e inizia ad iniettere una grande quantita di veleno\n";
					system("pause");
					cout << "il veleno ti paralizza e non puoi piu' ne scappare ne attaccarla. Sei diventato il suo nuovo giocattolino\n";
					system("pause");
					cout << "Hai perso\n";
					system("pause");
					main();
					return;
				}
			}
			if (scelta_deserto == '2')
			{
				piramide();
				return;
			}
			if (rosa == 1)
			{
				if (scelta_deserto == '3')
		        {
				    cout << "D'istinto prendi in mano la rosa del deserto e te la metti davanti agli occhi.\nLa rosa inizia a brillare sempre di piu' di una luce propria.\nUn raggio potentissimo parte dalla rosa e colpisce lo scoprione trasformandolo in cenere.\nIl raggio e' talmente potente che ti sbalza contro il muro. Con grande stupore guardi lo scorpione ormai ridotto in cenere e ti accorgi che la rosa e' scomparsa.\nDopo esserti ripreso ti avvicini alla porta ma, non avendo nulla con cui aprirla, sei costretto a ritornare all'inizio della piramide\n";
				    attacco_scorpione = 1;
					system("pause");
				    piramide();
				    return;
			    }
			}
			if(scelta_deserto == 'i')//torna al menu
         	{
	               	inventario();
        	}
			}
			
			
		}
		if (leva == 1)
		{
			cout << "Segui la strada di fronte a te e dopo qualche metro ti imbatti in un enorme scorpione che sembra custodire una porta. Alli'nterno vedi una chiave\n";
			while(scelta_deserto != '1' && scelta_deserto != '2' && scelta_deserto != 'm')
			{
				cout << "1) Attacca lo scorpione\n";
			cout << "2) Torna all'inizio della piramide\n";
			if (rosa == 1)
			{
				cout << "3) Utilizza la rosa del deserto\n";
			}
			cin >> scelta_deserto;
			if (scelta_deserto == '1')
			{
				if (armatura == 0)
				{
					cout << "Con coraggio tiri fuori la spada e attacchi la bestia\n";
					system("pause");
					cout << "Dopo vari colpi ti accorgi che non gli hai arrecato alcun danno.\nMentre rifletti su come poterla abbattere lei ne approfitta e ti attacca. Con il suo pungiglione riesce a penetrare l'armatura e inizia ad iniettere una grande quantita di veleno\n";
					system("pause");
					cout << "il veleno ti paralizza e non puoi piu' ne scappare ne attaccarla. Sei diventato il suo nuovo giocattolino\n";
					system("pause");
					cout << "Hai perso\n";
					system("pause");
					main();
					return;
				}
				if (armatura == 1)
				{
					cout << "Con coraggio e senza spada provi ad attaccare la bestia\n";
					system("pause");
					cout << "Dopo vari colpi ti accorgi che non gli hai arrecato alcun danno.\nMentre rifletti su come poterla abbattere lei ne approfitta e ti attacca. Con il suo pungiglione riesce a colpirti e inizia ad iniettere una grande quantita di veleno\n";
					system("pause");
					cout << "il veleno ti paralizza e non puoi piu' ne scappare ne attaccarla. Sei diventato il suo nuovo giocattolino\n";
					system("pause");
					cout << "Hai perso\n";
					system("pause");
					main();
					return;
				}
			}
			if (scelta_deserto == '2')
			{
				piramide();
				return;
			}
			if (rosa == 1)
			{
				if (scelta_deserto == '3')
		        {
				    cout << "D'istinto prendi in mano la rosa del deserto e te la metti davanti agli occhi.\nLa rosa inizia a brillare sempre di piu' di una luce propria.\nUn raggio potentissimo parte dalla rosa e colpisce lo scoprione trasformandolo in cenere.\nIl raggio e' talmente potente che ti sbalza contro il muro. Con grande stupore guardi lo scorpione ormai ridotto in cenere e ti accorgi che la rosa e' scomparsa.\nDopo esserti ripreso entri nella stanza e ti avvicini alla chiave\n";
				    attacco_scorpione = 1;
					while(scelta_deserto != '1' && scelta_deserto != '2' && scelta_deserto != 'm')
					{
						cout << "1) Prendi la chiave\n";
				    cout << "2) Torna all'inizio della piramide\n";
				    cin >> scelta_deserto;
				    if (scelta_deserto == '1')
				    {
				    	cout <<"Prendi la chiave e senti un forte terremoto.\nInizi a correre fino all'ingresso della piramide mentre dietro di te iniziano a cadere degli enormi massi dal sofitto.\nArrivato all'ingresso della piramide il terremoto finisce e noti che la strada davanti a te e' bloccatata dalle rocce\n";
				        blocco_piramide = 1;
				        chiave = 1;
						system("pause");
				    	piramide();
				    	return;
					}
					if (scelta_deserto == '2')
				    {
				    	piramide();
				    	return;
					}
					if(scelta_deserto == 'i')//torna al menu
                	{
	                 	inventario();
                	}
					}
					
			    }
			}
			if(scelta_deserto == 'i')//torna al menu
         	{
	            	inventario();
        	}
			}
			
		}
		}
		if(blocco_piramide == 0 && attacco_scorpione == 1)
		{
			if (leva == 0)
		{
			cout << "Segui la strada di fronte a te e ritorni alla porta chiusa ma, non avendo nulla con cui aprirla, sei costretto a ritornare all'inizio della piramide\n";
			system ("pause");
			piramide();
			return;		
		}
		if (leva == 1)
		{
			cout << "Segui la strada di fronte a te e ritorni alla porta. All'interno vedi una chiave\n";
			while(scelta_deserto != '1' && scelta_deserto != '2' && scelta_deserto != 'm')
			{
				cout << "1) Prendi la chiave\n";
			cout << "2) Torna all'inizio della piramide\n";
			cin >> scelta_deserto;
			if (scelta_deserto == '1')
			{
				cout <<"Prendi la chiave e senti un forte terremoto.\nInizi a correre fino all'ingresso della piramide mentre dietro di te iniziano a cadere degli enormi massi dal sofitto.\nArrivato all'ingresso della piramide il terremoto finisce e noti che la strada davanti a te e' bloccatata dalle rocce\n";
				blocco_piramide = 1;
				chiave = 1;
				system("pause");
				piramide();
				return;
			}
			if (scelta_deserto == '2')
			{
				piramide();
				return;
			}
			if(scelta_deserto == 'i')//torna al menu
         	{
	        	inventario();
          	}
			}
					
		}
	    }
		if(blocco_piramide == 1)
		{
			cout << "il passaggio e' bloccato da enormi massi, non puoi proseguire per questa strada\n";
			system("pause");
			piramide();
			return;
		}
		
			
		
		
		
	}
	if(scelta_deserto == '4')//torna indietro
	{
		bivio_md();
		return;
	}
	if(scelta_deserto == 'i')//torna al menu
	{
		inventario();
	}
	}
	
	if(scelta_deserto == 'm')//torna al menu
	{
		main();
		return;
	}
	if(scelta_deserto == 'i')//torna al menu
	{
		inventario();
	}
}
//-------------------------------------------------------------------------attacco del drago-------------------------------------------------------------------------------------------------
void portale_drago()
{
	scelta_drago = '0';
	cout << "\n--------------------------Mondo del drago----------------------------------\n\n";
	cout << "Appena entri nel portale vieni subito colpito da una palla di fuoco sputata dal drago che sta gia volando sopra di te. Sei preparato e con grande abilita' la schivi\n";
	while(scelta_drago != '1' && scelta_drago != '2' && scelta_drago != 'm')
	{
		cout << "1) Attacca il drago\n";
	cout << "2) Torna indietro\n";
	cin >> scelta_drago;
	if (scelta_drago == '1')
	{
		if (balestra == 1)
		{			
			cout << "Prendi la balestra e la armi con l'unica freccia che hai\n";
			system("pause");
			cout << "Prendi la mira e spari\n";
			system("pause");
			cout << "Per fortuna riesci a colpirlo\n";
			system("pause");
			cout << "Il drago inizia a sgretolarsi poco a poco e dall'interno del suo corpo partono dei fasci di luce che gli si avvolgono intorno. L'intensita' di quella luce ti costringe a distogliere lo sguardo ma riesci comunque a sentire un grande boato provenire dalla direzione del drago. Apri gli occhi, il drago e' scomparso e per terra e' comparso un portale\n";
			system("pause");
			cout << "Entri nel portale che ti catapulta al villaggio\n";
			system("pause");
			vittoria();
			return;
			
		}
		if (balestra == 0)
		{
			cout << "Nonostante sei privo di balestra provi lo stesso ad attacare il drago\n";
			system("pause");
			
			if(armatura == 0)
			{
				cout << "Cerchi un punto alto per attaccarlo con la spada, ma non trovi nulla\n";
			    system("pause");
				cout << "Il drago ti sputa addosso un'altra palla incandescente ma questa volta ti colpisce scavando un cratere nel terreno\n";
			    system("pause");
			    cout << "Ti trovi per terra sul punto di morte. Il drago ti attacca con un'altra palla di fuoco che ti riduce in cenere\n";
			    system("pause");;
			    cout << "Hai perso\n";
			    system("pause");
			    main();
			    return;
			}
			if(armatura == 1)
			{
				cout << "Cerchi un punto alto per attaccarlo, ma non trovi nulla\n";
			    system("pause");
				cout << "Il drago ti sputa addosso un'altra palla incandescente ma questa volta ti colpisce scavando un cratere nel terreno\n";
			    system("pause");
			    cout << "Ti trovi per terra sul punto di morte. Il drago ti attacca con un'altra palla di fuoco che ti riduce in cenere\n";
			    system("pause");;
			    cout << "Hai perso\n";
			    system("pause");
			    main();
			    return;
			}
			
			
			
			
		}
	}
	if (scelta_drago == '2')
	{
		cout << "Ti giri per uscire dal portale ma ti accorgi che non c'e' piu'\n";
		system("pause");
		
		if (balestra == 1)
		{
			cout << "Prendi la balestra e ti volti verso il drago ma una palla incandescente ti colpisce di nuovo\n";
		    system("pause");
			cout << "Come per magia ti ritrovi circondato da uno scudo protettivo che ti ripara dalla palla di fuoco. Sei vivo grazie al potere della balestra che ti ha conferito l'armatura\n";
			system("pause");
			cout << "Ti senti piu' forte che mai e prendi la balestra\n";
			system("pause");
			cout << "La carichi con l'unica freccia che possiedi, prendi la mira e spari\n";
			system("pause");
			cout << "Riesci a colpire il drago!\n";
			system("pause");
			cout << "Il drago inizia a sgretolarsi poco a poco e dall'interno del suo corpo partono dei fasci di luce che gli si avvolgono intorno. L'intensita' di quella luce ti costringe a distogliere lo sguardo ma riesci comunque a sentire un grande boato provenire dalla direzione del drago. Apri gli occhi, il drago e' scomparso e per terra e' comparso un portale\n";
			system("pause");
			cout << "Entri nel portale che ti catapulta al villaggio\n";
			system("pause");
			vittoria();
			return;
			
		}
		if (balestra == 0)
		{
			cout << "Ti volti verso il drago ma una palla incandescente ti colpisce di nuovo\n";
		    system("pause");
			cout << "Il colpo ti sfracella al suolo con violenza creando una voraggine\n";
			system("pause");
			cout << "Ti trovi per terra sul punto di morte. Il drago ti attacca con un'altra palla di fuoco che ti riduce in cenere\n";
			system("pause");;
			cout << "Hai perso\n";
			system("pause");
			main();
			return;
			
			
			
		}
		
		
	}
	}
	
	if (scelta_drago == 'm')
	{
		main();
		return;
	}
	if(scelta_drago == 'i')
	{
		inventario();
	}
}	
//-------------------------------------------------------------------parole del re----------------------------------------------------------------------------------------------------------
void parole_Re()
{
	cout << "Salvataggio progresso...\n";
	salvataggio = 9;
	system("pause");
	cout << "Re:''una volta attraversata la foresta nebulosa  dovrai scegliere il sentiero dove,\nuna rosa pervasa di spine ma che non punge, risorge nel vento e nella quiete del silenzio rinasce.\nSenza acqua non muore, profuma dell’attimo cristallino imbevuto in una stilla di luce\n";
	system("pause");
	bivio_md();
	return;
	
}
void vittoria()
{
	scelta = '0';
	cout << "\n--------------------------Villaggio----------------------------------\n\n";
	cout << "Tutta la gente del villaggio si raduna attorno a te speranzosa. Ti dirigi al castello e quando comunichi al Re di aver sconfitto il drago tutte le persone nella corte iniziano ad esultare\n";
	system("pause");
	cout << "In segno di gratitudine il Re ti nomina cavagliere onorario e ti dona una medaglietta in cui c'e' incisa una rosa dei venti, cioe' il logo del villaggio\n";
	system("pause");
	cout << "\n--------------------------Casa----------------------------------\n\n";
	cout << "Tutto diventa nero. Ti svegli e ti ritrovi nel letto di casa tua. Guardi la sveglia e sono le 6:30\n";
	while(scelta != '1' && scelta != '2')
	{
		cout << "1) Ti alzi e fai colazione\n";
	cout << "2) Ritorna a dormire\n";
	cin >> scelta;
	if(scelta == '1')
	{
		cout << "Ti alzi per preparre la colazione e sul tavolo noti qualcosa che luccica\n";
		system("pause");
		cout << "Ti avvicini e vedi che e' la medaglia che il Re ti ha donato\n";
		system("pause");
		cout << "-----------FINE--------------\n";
		system("pause");
		main();
		return;
	}
	if(scelta == '2')
	{
		cout << "Pensi sia stato solo un sogno e torni a dormire\n";
		system("pause");
		cout << "-----------FINE--------------\n";
		system("pause");
		main();
		return;
	}
	}
	
}
void inventario()
{
	cout << "\n----------------Inventario-------------------\n\n";
	if(armatura == 0)
	{
		cout << "# Armatura e spada\n\n";
	}
	if(armatura == 1)
	{
		cout << "# No armature e spada\n\n";
	}
	if(rosa == 1 && attacco_scorpione == 0)
	{
		cout << "# Rosa del deserto (Serve per sconfiggere una bestia apparentemente immortale)\n\n";
	
	}
	if(chiave == 1)
	{
		cout << "# Chiave (Aprira' una porta segreta nel labirinto)\n\n";

	}
	if(rampino == 1)
	{
		cout << "# Rampino (Serve per scalare la montagna piu' velocemente senza fatica)\n\n";

	}
	if(balestra == 1)
	{
		cout << "# Balestra (equipaggiata ti conferira' un'armatura d'oro. Necessaria solo per sconfiggere il drago)\n\n";

	}
	cout << "\n------------------------------------------\n\n";
	return;
}

			
		
			   

			
			
			
			
			
	
