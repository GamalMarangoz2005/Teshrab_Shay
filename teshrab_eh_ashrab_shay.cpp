#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

void e3melShayBelna3na3();
void e3melShayBelaban();
void e3melShaySada();
int kobaya();
void ademElShay(int kobaya, float ma3la2etShay, float ma3la2etSokar, char shayType);

/*
prompt: teshrab shay ?
user: ah  or la2 ?

if user == ah:
   prompt: 3ayez shay eh ?
   prompt: sada , na3na3, belaban ?

   user: na3na3 or sada or belaban ?
   if shay_type == "na3na3":
	e3melShayBelna3na3();
   else if shay_type == belaban:
	e3melShayBelaban();
   else:
	e3mel_shay_sada();

else:
      //mate3melsh 7aga ! 

void e3melShayBelna3na3() {

	prompt: 3andak na3na3 ?
	user: ah or la2 ?
	if feh_na3a3 == la2:
		prompt: mesh 7a3raf a3melak el shay beta3ak, 3ashan masfesh na3na3 !
		return -1;
	else if feh_na3na3 == ah:

		prompt: kam ma3la2et shay ?
		user: n

		if user_ma3la2et_shay > 1:
			prompt: okay, bas keda el shay 7ayeba  yama !
		else if user_ma3la2et_shay < 1:
			prompt: okay, bas keda el shay 7ayeba malhoosh ta3m !
		else:
			prompt: Tamam !

		prompt: kam ma3la2et sokar ?
		user: n

		if user_ma3la2et_sokar > 2.5:
			prompt: 5aly balak ! keda el sokar keter awy !
		else if user_ma3la2et_sokar < 1:
			prompt: 5aly balak ! keda el sokar olayel wel shay 7ayeba basel !
		else:
			prompt: Tamam !


		prompt: bet7eb any kobaya ?
		prompt:


	\       /	|   |   	\   /   	|     |
	 \  1  /	| 2 |    	| 3 |   	|     |==\
 	  \___/		|___|   	\___/   	|  4  |   |
		   			     	            |     |==/
		              				    |_____|

	       user:   n
	       if kobaya == 1:
			prompt: kobaya_1
	       else if kobaya == 2
			prompt: kobaya_2
	       else if kobaya ==  3
			prompt: kobaya_3

	       prompt: etfadal el shay beta3ak !
	       prompt:
			\   2   /	| shay belna3na3
			 \  1  /	| 2 ma3la2et_sokar
			  \_m_/		| 1 ma3la2et_shay

	       prompt: return 0;

	else:
		prompt: ekteb 3edel !!!
		main();
}

*/




int main() {

	bool ayezShay = false;
	int shayType = 0;

	//prompting the user to drink tea or not.
	cout << "teshrab shay ?\n1:ah\t0:la2\n";
	cin >> ayezShay;

	//identifying the user's favorite tea type if they want to drink tea.
	if(ayezShay){
		cout << "\n\n1:na3na3\n2:belaban\n3:sada ?" << endl;
		cin >> shayType;
	
		if(shayType == 1)
			e3melShayBelna3na3();
		else if(shayType == 2)
			e3melShayBelaban();
		else
			e3melShaySada();
	} 
	
	//terminate the program if the user don't want to drink tea.
	else {
		return 0;
	}
}




//function that prepares tea with mint.
void e3melShayBelna3na3()
{
	bool fehNa3na3 = false;
	float ma3la2etShay = 0;
	float ma3la2etSokar = 0;
	
	//prompting the user if he/she has mint for the tea.
	cout << "\n\n3andak na3na3 ?\n1:ah\t0:la2\n" << endl;
	cin >> fehNa3na3;

	//if there is mint then, take the tea parameters like the number of tsps of both tea and sugar.
	if(fehNa3na3) {

		//prompting the user for the number of tsps of tea.
		cout << "\n\nkam ma3la2et shay ?" << endl;
		cin >> ma3la2etShay;

		if(ma3la2etShay > 1) 
			cout << "\nokay, bas keda el shay 7ayeba  yama !" << endl;
		else if(ma3la2etShay < 1)
			cout << "\nokay, bas keda el shay 7ayeba malhoosh ta3m !" << endl;
		else 
			cout << "\nTamam !" << endl;

		//prompting the user for the number of tsps of sugar.
		cout << "kam ma3la2et sokar ?" << endl;
		cin >> ma3la2etSokar;

		if(ma3la2etSokar > 2.5) 
			cout << "\n5aly balak ! keda el sokar keter awy !" << endl;
		else if(ma3la2etSokar < 1)
			cout << "\n5aly balak ! keda el sokar olayel wel shay 7ayeba basel !" << endl;
		else 
			cout << "\nTamam !" << endl;

		//prompting the user to choose their favorite cup or mug.	
		kobaya();

		//serving the tea.
		ademElShay(kobaya(),ma3la2etShay,ma3la2etSokar,'m');
	} 
	
	//if there is no mint, apologize to the user and return to the main() method to restart the program.
	else if(!fehNa3na3) {
		cout << "\n\nmesh 7a3raf a3melak el shay beta3ak, 3ashan masfesh na3na3 !\n" << endl;
		main();
	}

	//if there is wrong input return to the main program.
	else {
		main();
	}
}


void e3melShayBelaban()
{
	bool fehLaban = false;
	float ma3la2etShay = 0;
	float ma3la2etSokar = 0;
	
	//prompting the user if he/she has milk for the tea.
	cout << "\n\n3andak Laban ?\n1:ah\t0:la2\n" << endl;
	cin >> fehLaban;

	//if there is milk then, take the tea parameters like the number of tsps of both tea and sugar.
	if(fehLaban) {

		//prompting the user for the number of tsps of tea.
		cout << "\n\nkam ma3la2et shay ?" << endl;
		cin >> ma3la2etShay;

		if(ma3la2etShay > 1) 
			cout << "\nokay, bas keda el shay 7ayeba  yama !" << endl;
		else if(ma3la2etShay < 1)
			cout << "\nokay, bas keda el shay 7ayeba malhoosh ta3m !" << endl;
		else 
			cout << "\nTamam !" << endl;

		//prompting the user for the number of tsps of sugar.
		cout << "kam ma3la2et sokar ?" << endl;
		cin >> ma3la2etSokar;

		if(ma3la2etSokar > 2.5) 
			cout << "\n5aly balak ! keda el sokar keter awy !" << endl;
		else if(ma3la2etSokar < 1)
			cout << "\n5aly balak ! keda el sokar olayel wel shay 7ayeba basel !" << endl;
		else 
			cout << "\nTamam !" << endl;

		//prompting the user to choose their favorite cup or mug.	
		kobaya();

		//serving the tea.
		ademElShay(kobaya(),ma3la2etShay,ma3la2etSokar,'l');
	} 
	
	//if there is no milk, apologize to the user and return to the main() method to restart the program.
	else if(!fehLaban) {
		cout << "\n\nmesh 7a3raf a3melak el shay beta3ak, 3ashan masfesh laban !\n" << endl;
		main();
	}

	//if there is wrong input return to the main program.
	else {
		main();
	}
}

void e3melShaySada()
{
	float ma3la2etShay = 0;
	float ma3la2etSokar = 0;

	//prompting the user for the number of tsps of tea.
	cout << "\n\nkam ma3la2et shay ?" << endl;
	cin >> ma3la2etShay;

	if(ma3la2etShay > 1) 
		cout << "\nokay, bas keda el shay 7ayeba  yama !" << endl;
	else if(ma3la2etShay < 1)
		cout << "\nokay, bas keda el shay 7ayeba malhoosh ta3m !" << endl;
	else 
		cout << "\nTamam !" << endl;

	//prompting the user for the number of tsps of sugar.
	cout << "kam ma3la2et sokar ?" << endl;
	cin >> ma3la2etSokar;

	if(ma3la2etSokar > 2.5) 
		cout << "\n5aly balak ! keda el sokar keter awy !" << endl;
	else if(ma3la2etSokar < 1)
		cout << "\n5aly balak ! keda el sokar olayel wel shay 7ayeba basel !" << endl;
	else 
		cout << "\nTamam !" << endl;

	//prompting the user to choose their favorite cup or mug.	
	int chosenKobaya = kobaya();
	

	//serving the tea.
	ademElShay(chosenKobaya,ma3la2etShay,ma3la2etSokar,'s');
}


//function that prompts the user to choose their favorite mug or cup to drink their tea.
int kobaya() {
	int kobayaType = 0;


/*
	\       /	|   |   	\   /   	|     |
	 \  1  /	| 2 |    	| 3 |   	|     |==\
 	  \___/		|___|   	\___/   	|  4  |   |
		   			     	            |     |==/
		              				    |_____|
*/


	//prompting the user to choose cup or mug shape he/she wants.
	cout << "\n\n\nbet7eb any kobaya ?" << endl;
	
	//drawing the mugs or cups shapes to the user !
	cout << "\t\\       /\t|   |\t   	\\   /\t   	|     |    " << endl;
	cout << "\t \\  1  / \t| 2 |\t    	| 3 | \t   	|     |==\\" << endl;
	cout << "\t  \\___/  \t|___|\t   	\\___/\t   	|  4  |   |" << endl;
	cout << "		   			     	        |     |==/ " << endl;
	cout << "		              			        |_____|  \n" << endl;

	//cursor to type the cup or mug number.
	cout << "kobaya: ";
	cin >> kobayaType;
	cout << endl;

	if(kobayaType == 1) {
		cout << "\\       /" << endl;
		cout << " \\  1  / " << endl; 
		cout << "  \\___/  " << endl; 
		cout << "Selected !\n" << endl;
	}

	else if(kobayaType == 2) {
		cout << "  |   |   " << endl;
		cout << "  | 2 |   " << endl;
		cout << "  |___|   " << endl;
		cout << "Selected !\n" << endl;
	}

	else if(kobayaType == 3) {
		cout << " \\   /   " << endl;
		cout << " | 3 |    " << endl;
		cout << " \\___/   " << endl;
		cout << "Selected !\n" << endl;
	}

	else if(kobayaType == 4) {
		cout << "  |     |" << endl;
		cout << "  |     |==\\" << endl;
		cout << "  |  4  |   |" << endl;
		cout << "  |     |==/" << endl;
		cout << "  |_____| " << endl;
		cout << "Selected !\n" << endl;
	}

	return kobayaType;
}

void ademElShay(int kobaya, float ma3la2etShay, float ma3la2etSokar, char shayType) {
	cout << "\n\n\n";



	//identifying the tea type
	if(shayType == 'm') {
		if(kobaya == 1) {
			cout << "\tetfadal el shay beta3ak !\n" << endl;
			printf("\\   %.1f  /", ma3la2etSokar);    printf("\t|  shay_belna3na3\n");
			printf(" \\  %.1f / ", ma3la2etShay);	  printf("\t|%.1f ma3la2et_sokar\n", ma3la2etSokar);
			printf("  \\_%c__/  ", shayType);		  printf("\t|%.1f ma3la2et_shay\n", ma3la2etShay);
		}

		else if(kobaya == 2) {
			cout << "\tetfadal el shay beta3ak !\n" << endl;
			printf("  | %.1f|   ", ma3la2etSokar);   printf("\t|  shay_belna3na3\n");
			printf("  | %.1f|   ", ma3la2etShay);    printf("\t|%.1f ma3la2et_sokar\n", ma3la2etSokar);
			printf("  |_%c__|   ", shayType);		 printf("\t|%.1f ma3la2et_shay\n", ma3la2etShay);

		}

		else if(kobaya == 3) {
			cout << "\tetfadal el shay beta3ak !\n" << endl;
			printf(" \\ %.1f/ ", ma3la2etSokar);    printf("\t|  shay_belna3na3\n");
			printf(" | %.1f|    ", ma3la2etShay);    printf("\t|%.1f ma3la2et_sokar\n", ma3la2etSokar);
			printf(" \\__%c_/   ", shayType);		 printf("\t|%.1f ma3la2et_shay\n", ma3la2etShay);
		}

		else if(kobaya = 4) {
			cout << "\tetfadal el shay beta3ak !\n" << endl;
			printf("  |  %.1f |", ma3la2etSokar);    printf("\t|  shay_belna3na3\n");
			printf("  |      |==\\");			     printf("\t|           \n");	
			printf("  |  %.1f |   |", ma3la2etShay); printf("\t|%.1f ma3la2et_sokar\n", ma3la2etSokar);
			printf("  |      |==/");			     printf("\t|           \n");
			printf("  |___%c__| ", shayType);        printf("\t|%.1f ma3la2et_shay\n", ma3la2etShay);
		}

	}

	else if(shayType == 'l') {
		if(kobaya == 1) {
			cout << "\tetfadal el shay beta3ak !\n" << endl;
			printf("\\   %.1f  /", ma3la2etSokar);    printf("\t|  shay_belaban\n");
			printf(" \\  %.1f / ", ma3la2etShay);	  printf("\t|%.1f ma3la2et_sokar\n", ma3la2etSokar);
			printf("  \\_%c__/  ", shayType);		  printf("\t|%.1f ma3la2et_shay\n", ma3la2etShay);
		}

		else if(kobaya == 2) {
			cout << "\tetfadal el shay beta3ak !\n" << endl;
			printf("  | %.1f|   ", ma3la2etSokar);   printf("\t|  shay_belaban\n");
			printf("  | %.1f|   ", ma3la2etShay);    printf("\t|%.1f ma3la2et_sokar\n", ma3la2etSokar);
			printf("  |_%c__|   ", shayType);		 printf("\t|%.1f ma3la2et_shay\n", ma3la2etShay);

		}

		else if(kobaya == 3) {
			cout << "\tetfadal el shay beta3ak !\n" << endl;
			printf(" \\ %.1f/ ", ma3la2etSokar);    printf("\t|  shay_belaban\n");
			printf(" | %.1f|    ", ma3la2etShay);    printf("\t|%.1f ma3la2et_sokar\n", ma3la2etSokar);
			printf(" \\__%c_/   ", shayType);		 printf("\t|%.1f ma3la2et_shay\n", ma3la2etShay);
		}

		else if(kobaya = 4) {
			cout << "\tetfadal el shay beta3ak !\n" << endl;
			printf("  |  %.1f |", ma3la2etSokar);    printf("\t|  shay_belaban\n");
			printf("  |      |==\\");			     printf("\t|           \n");	
			printf("  |  %.1f |   |", ma3la2etShay); printf("\t|%.1f ma3la2et_sokar\n", ma3la2etSokar);
			printf("  |      |==/");			     printf("\t|           \n");
			printf("  |___%c__| ", shayType);        printf("\t|%.1f ma3la2et_shay\n", ma3la2etShay);
		}

	}

	else {
		if(kobaya == 1) {
			cout << "\tetfadal el shay beta3ak !\n" << endl;
			printf("\\   %.1f  /", ma3la2etSokar);    printf("\t|  shay_sada\n");
			printf(" \\  %.1f / ", ma3la2etShay);	  printf("\t|%.1f ma3la2et_sokar\n", ma3la2etSokar);
			printf("  \\_%c__/  ", shayType);		  printf("\t|%.1f ma3la2et_shay\n", ma3la2etShay);
		}

		else if(kobaya == 2) {
			cout << "\tetfadal el shay beta3ak !\n" << endl;
			printf("  | %.1f|   ", ma3la2etSokar);   printf("\t|  shay_sada\n");
			printf("  | %.1f|   ", ma3la2etShay);    printf("\t|%.1f ma3la2et_sokar\n", ma3la2etSokar);
			printf("  |_%c__|   ", shayType);		 printf("\t|%.1f ma3la2et_shay\n", ma3la2etShay);

		}

		else if(kobaya == 3) {
			cout << "\tetfadal el shay beta3ak !\n" << endl;
			printf(" \\ %.1f/ ", ma3la2etSokar);    printf("\t|  shay_sada\n");
			printf(" | %.1f|    ", ma3la2etShay);    printf("\t|%.1f ma3la2et_sokar\n", ma3la2etSokar);
			printf(" \\__%c_/   ", shayType);		 printf("\t|%.1f ma3la2et_shay\n", ma3la2etShay);
		}

		else if(kobaya = 4) {
			cout << "\tetfadal el shay beta3ak !\n" << endl;
			printf("  |  %.1f |", ma3la2etSokar);    printf("\t|  shay_sada\n");
			printf("  |      |==\\");			     printf("\t|           \n");	
			printf("  |  %.1f |   |", ma3la2etShay); printf("\t|%.1f ma3la2et_sokar\n", ma3la2etSokar);
			printf("  |      |==/");			     printf("\t|           \n");
			printf("  |___%c__| ", shayType);        printf("\t|%.1f ma3la2et_shay\n", ma3la2etShay);
		}

	}





}