#include <stdio.h>

void menu ();
void moltiplica ();
void dividi ();
void ins_string();


int main ()

{
	char scelta = '\0'; //l'errore qui è che erano presenti delle parentesi graffe
	menu ();
	scanf ("%c", &scelta); //qui era presente un errore, ovvero %d invece di %c

	switch (scelta)
	{
		/* ho aggiunto altri tre casi con lettere minuscole che svolgono le medesime funzioni delle loro controparti*/
		case 'A':
		moltiplica();
		break;
		case 'a':
		moltiplica();
		break;
		case 'B':
                dividi();
                break;
		case 'b':
		dividi();
		break;
		case 'C':
                ins_string();
                break;
		case 'c':
		ins_string();
		break;
		default: printf("\nErrore, valore non consentito\n");
	}

return 0;

}


void menu ()
{
	printf ("Benvenuto, sono un assitente digitale, posso aiutarti a sbrigare alcuni compiti\n");
	printf ("Come posso aiutarti?\n");
	printf ("A >> Moltiplicare due numeri\nB >> Dividere due numeri\nC >> Inserire una stringa\n");

}


void moltiplica ()
{
	short int a,b = 0;
	printf ("Inserisci i due numeri da moltiplicare:");
	scanf ("%hd", &a); // qui era presente %d invece di %hd
	scanf ("%hd", &b);
	short int  prodotto = (short int) a * b; // qui ho fatto il casting per short int

	printf ("Il prodotto tra %d e %d e': %d", a,b,prodotto);
}


void dividi ()
{
        int a,b = 0;
        printf ("Inserisci il numeratore:");
        scanf ("%d", &a);
	printf ("Inserisci il denumeratore:");
        scanf ("%d", &b);

	/*qui ho fatto il cating per float */
        float divisione = (float) a / b; // qui era presente la funzione modulo (%), il che è sbagliato perché il nostro obiettivo è dividere

        printf ("La divisione tra %d e %d e': %f", a,b,divisione);
}





void ins_string ()
{
	char stringa[10];
        printf ("Inserisci la stringa:");
        fgets(stringa, 10, stdin); // fgets si occupa di imporre un limite, inserendo i primi 10 caratteri all'interno della variabile stringa
	scanf ("%c", &stringa); // per far sì che fgets funzioni correttamente, è necessario inserire %c al posto %s
}
