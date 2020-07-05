SARA HASNAOUI MATRICOLA:322294


struct scavatrice{
	struct caverna* posizione;//per la posizione
    int serbatoio_energie;// da 4 a 0, =0 non puoi abbattere, =-1 perdi
	int serbatoio_raccolta;// da 0 a 10 unità raccolte di melassa
    
};

struct caverna{
	struct caverna* avanti; // se diversi da NULL passaggi liberi, se = a NULL devi abattere la parete
	struct caverna* sinistra;
	struct caverna* destra;
	struct caverna* caverna_successiva;
	struct caverna* ultima_caverna;
    struct caverna* caverna;
	
	
};
    enum Tipo_imprevisto  {nessun_imprevisto, crollo, baco};
    enum Quantita_melassa {nessuna, poca, molta=3};
    enum Tipo_caverna {normale, speciale, accidentata, uscita};
	

void crea_cunicoli();

void gioca();

void termina_gioco();