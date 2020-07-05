SARA HASNAOUI MATRICOLA:322294

#include "gamelib.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

static struct Caverna* primo_cunicolo_arvais = NULL;
static struct Caverna* primo_cunicolo_hartornen = NULL;


static int serbatoio_energie=4;
static int serbatoio_raccolta=0;
static void ins_caverna();
static void canc_caverna();
static void stampa_cunicolo();
static void chiudi_cunicolo();



void crea_cunicoli(){
int choose=0;
do{
printf(">$ Scegli un operazione \n");
printf("1. Inserisci caverna, \n 2. Cancella Caverna, \n 3. Stampa cunicolo, \n 4. Chiudi cunicolo. \n");
printf(">$");
scanf("%d", choose);


switch (choose){
case 1:
ins_caverna();
break;

case 2:
canc_caverna();
break;

case 3:
stampa_cunicolo();
break;

case 4:
chiudi_cunicolo();
break;

default:
printf("operazione non valida \n");
break;
}
 }while(choose!=4);

}


static void ins_caverna(struct caverna* primo){

char tipo_caverna[4];
char tipo_imprevisto[3];

{//in testa


struct caverna* nuova_caverna = (struct caverna*) malloc(sizeof(struct caverna*));
scanf("%s",&(nuova_caverna-> caverna));
nuova_caverna->caverna_successiva= NULL;

if(primo == NULL){ //nessun nodo nella lista
primo= nuova_caverna;
}
else if(nuova_caverna->avanti = primo){
 primo=nuova_caverna;
}



else if(nuova_caverna->destra = primo){
primo=nuova_caverna;
}

else if(nuova_caverna->sinistra  = primo){
primo=nuova_caverna;}

return;
}



static enum  tipo_caverna ( char* string){
     int result;                                         	//generatore tipo caverne
    for(int i=0; i<4; i++){
        if(tipo_caverna_char[i],string==0){
            result=i;
            break;
        }
    }
	

	
	
	int caverna=0;
do{
	
	printf("Che tipo di caverna vuoi?");
	scanf("%d", caverna);
	
	switch(caverna){
	case 1:
	normale;
	
	case 2:
	speciale;
	
	case 3:
	accidentata;
	
	default:
printf("operazione non valida \n");
break;

}
	
	int tipo_imprevisto=0;
do{
printf("Che tipo di imprevisto vuoi?");
scanf("%d", tipo_imprevisto);

switch(tipo_imprevisto){
	case 1:
	nessun_imprevisto;
	
	case 2:
	crollo;
	
	case 3:
	baco;
	
	default:
printf("operazione non valida \n");
break;

}

enum Quantita_melassa{
	(p=(rand()%100)){
	if (p<50){
		printf("non c'è melassa");
	}
    else if (p<30){
		printf("c'è poca melassa");
	}
	else if (p<20){
		printf("c'è molta melassa");
	}
	}
}

		
	EnumTipo_imprevisto{
	(p=(rand()%100)){
	if (p<50){
		printf("nessun imprevisto");
	}
	 else if (p<35){
		printf("crollo");
	}
	else if (p<15){
		printf("baco");
	}
	}
	return result;
}



static void canc_caverna(struct caverna* primo){


{ //head deletion
if(primo == NULL) //nessun nodo nella lista
primo= ultima_caverna; 
 
else{
struct caverna* ultima_caverna= primo-> caverna_successiva;
free(primo);
primo=ultima_caverna;
}
return;
}



static void stampa_cunicolo(struct caverna* cunicolo){

if(cunicolo==NULL)//nessun nodo in lista
cunicolo=caverna_successiva;
else{
 struct caverna* pScancaverna= cunicolo;
 do{
 
printf(pScancaverna->avanti);
printf( pScancaverna-> destra);
printf( pScancaverna-> sinistra);

printf( pScancaverna->enumimprevisto->avanti);
printf( pScancaverna->enumimprevisto-> destra);
printf( pScancaverna->enumimprevisto-> sinistra);



printf( pScancaverna-> melassa-> avanti);
printf( pScancaverna->melassa-> destra);
printf( pScancaverna->melassa-> sinistra);


pScancaverna = pScancaverna->caverna_successiva;

}while(pScancaverna!= NULL);
}

return;
}


static void chiudi_cunicoli() {
if(cunicolo==10)  {
cunicolo=1;                                         //vero
  }

 else {  struct caverna* pScancaverna = cunicolo; 
 do { printf(pScancaverna->cunicolo);
 
  pScancaverna = pScancaverna->ultima_caverna; 
  
  }while(pScancaverna!=NULL); 
  } 
  
  
  else if (cunicolo<10)  {
cunicolo=0; 	//falso
  }

 else {  struct caverna* pScancaverna = cunicolo; 
 do { printf( pScancaverna->cunicolo);
 
  pScancaverna = pScancaverna->ultima_caverna; 
  }while(pScancaverna!= NULL); 
}
return; 
}



void gioca(){
static struct Scavatrice arvais* serbatoio_energie=4;
static struct Scavatrice arvais* serbatoio_raccolta=10;
static struct Scavatrice hartornen* serbatoio_energie=4;
static struct Scavatrice hartornen* serbatoio__raccolta=10;
struct scavatrice* posizione = primo_cunicolo_Arvais;
struct scavatrice* posizione = primo_cunicolo_hartornen;


int scavatrice=0;
struct scavatrice* posizione= struct caverna* posizione->next posizione;

do{
	
    printf("dove vuoi spostarti? \n");
	scanf("%d", scavatrice);
	
	switch(scavatrice){
	case 1:
	struct* scavatrice* posizione= avanti;
	
	case 2:
	 struct scavatrice* posizione= destra
	
	case 3:
	  struct scavatrice* posizione= sinistra;
	
	default:
printf("operazione non valida \n");
break;

}

int scavatrice=0
if(scavatrice%2==0){
  scavatrice++; 
} 	
do { printf("Cosa vuoi fare?");
                scanf("%d",&scavatrice);
                switch(choose){
                    case 1:
                        avanza();
                        break;

                    case 2:
                        abbatti();
                        break;

                    case 3:
                        aggira();
                        break;

                    case 4:
                        esci();
                        break;
						
					case 5:
                        combatti();
                        break;

                

                    default:
                        printf("Opzione non valida.....\n");
                        break;
                }
            }
        }while(choose!=6);
    }
	
}


static void avanza(){
	struct scavatrice* posizione= struct caverna* posizione->next posizione;
 
    if(struct* caverna==accidentata){
		serbatoio_energie=serbatoio_energie-1;
	}
	 else if (struct* caverna==speciale) {
		 	serbatoio_energie=serbatoio_energie+1;
	}
	else if (tipo_imprevisto==crollo) {
		serbatoio_energie=serbatoio_energie-1;
	}
	
    else if (imprevisto==baco){
		serbatoio_energie=0;
		serbatoio_raccolta=0;
	}
	

else if (struct* caverna==melassa)
	{
    choose=2;
	printf(" Attenzione! è stata trovata la presenza di melassa, in quale serbatoio vuoi inserirla?");
	printf(">$ Scegli \n\n");
    printf(" 1. Energie\n 2. Raccolta. \n  ")
    printf(">$");
    scanf(,&choose);

            switch(choose){
                case 1:
                    serbatoio_energie=4;
                    break;

                case 2:
                    serbatoio_raccolta=10;
                    break;
	                    default:
                    printf("Opzione non valida...\n");
                    break;
            }
            
	while(choose!=2);}
while (avanza){
	if (avanza==(rand()%100)<25%){ // probabilità che avanza si verifichi soltanto per il 25%
		avanza=0;//avanza=falso
		aggira();//quindi aggirare
	}
}
}

	static void abbatti(){
		if(abbatti==1)
	{
	serbatoio_energie=serbatoio_energie-1;
	}
	 while(avanza) {
	 struct caverna* nuova_caverna = (struct caverna*) malloc(sizeof(struct caverna*));
	 scanf("%s",&(nuova_caverna-> caverna));                                            //creo una nuova caverna
     nuova_caverna->caverna_successiva= NULL;
	 }
	if (nuova_caverna==uscita){
		uscita=(rand()%100)<5%;
		uscita=(rand()%100)<5%*10;
	}
	else if(nuova_caverna==accidentata){
		accidentata=(rand()%100)<20%;
	}
	
	else if (nuova_caverna==speciale){
		speciale=(rand()%100)<37,5%;
		
	}
	else if(nuova_caverna==normale){
		normale=(rand()%100)<37,5%;
		
	}
	enum Quantita_melassa=(40-40-20);
	p=(rand()%100){
	if (p<40){
		printf("nessuna");
		scanf("%d", &nessuna);
	}
	 else if (p<40){
		 printf("poca");
		scanf("%d", &poca);
	}
	else if (p<20){
		printf("molta");
		scanf("%d", &molta);
	}
	}
	return result;
}
		
	    
		enum Tipo_imprevisto;
	p=(rand()%100){
	if (p<40){
		printf("nessun imprevisto");
		scanf("%d", &nessun_imprevisto);
	}
	 else if (p<45){
		 printf("crollo");
		scanf("%d", &crollo);
	}
	else if (p<20){
		printf("baco");
		scanf("%d", &baco);
	}
	}
	return result;
}

static void aggira(){
	if (avanza==crollo){
		struct caverna* nuova_caverna = (struct caverna*) malloc(sizeof(struct caverna*));
	 scanf("%s",&(nuova_caverna-> caverna));
     nuova_caverna->caverna_successiva= NULL;
	 
	 struct scavatrice* posizione= struct caverna* posizione->next posizione;
}
	}
	
	
	
	
static void esci(){
	if(struct caverna*==uscita){
		cunicolo=exit();
}


static void combatti(){
	{
	if(struct scavatrice* serbatoio_energie<0){
		printf("hai perso");
		scanf("%d", &scavatrice);
	}
	else  if(struct scavatrice* serbatoio_energie>0){
		printf("hai vinto");
		scanf("%d", &scavatrice);
	}
	}
	
	{
		if ( struct scavatrice arvais* &&struct scavatrice hartornen*== uscita){
			if (struct Scavatrice arvais* serbatoio_raccolta> struct Scavatrice hartornen* serbatoio_raccolta){
				printf("Hai vinto!");
				scanf("%d", &scavatrice);
			}
			else if (struct Scavatrice arvais* serbatoio_raccolta<struct Scavatrice hartornen* serbatoio_raccolta){
				printf("Hai vinto!");
				scanf("%d", &scavatrice);
			}
		}
	}
	

int prob_scontro=3;
prob_scontro+=3;
int random = rand()%101;
if(random<prob_scontro) { 
scontro(); }
	
}

	
static void scontro(){
	;
	if(posizione_scavatrice_hartornen=posizione_scavatrice_arvais){
		printf("siete nella stessa posizione, combattete!",&scavatrice);
		
		do{
			if (arvais_serbatoio_energie>hartornen_serbatoio_energie){
				printf("HAI VINTO ARVAIS!!");
				scanf("%d", &serbatoio_energie);
				termina_gioco();
			}
			else if (arvais_serbatoio_energie<hartornen_serbatoio_energie){
				printf("HAI VINTO HARTORNEN!!");
				scanf("%d", &serbatoio_energie);
				termina_gioco();
			}
			else if (arvais_serbatoio_energie=hartornen_serbatoio_energie){
				printf("AVETE VINTO ENTRAMBI!!");
				scanf("%d", &serbatoio_energie);
				termina_gioco();
			}
			
			}
			
			
			
	
		}
	
	}	
	
static void termina_gioco(){		
if(cunicolo == NULL) // nessun nodo in lista
{
cunicolo=uscita;
}
else
{

struct caverna* uscita= cunicolo-> caverna_successiva;
// Memoria deallocata 
free(cunicolo);
cunicolo=uscita;
printf("GAME OVER");

}
return;
}






