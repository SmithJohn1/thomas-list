/*
	Changelog
	
	v1.0: initial program
	v1.1: grammar fixes, changed wording
	v1.2: made it case-insensitive
	v1.3: changed the wording about fifty percent
	v1.4: simplified code using extra functions, organized code
	
	
	Goals
	- add a GUI
	- errortrap properly using fgets() and parsing to catch all potential errors (typing multiple chars will cause bugs)
	- add more questions
*/

#include <stdio.h>

char choice = '0';
double version = 1.4;	//set version using this variable

void header(){
	printf("Version %.1f, created by Aidan, developed and edited by Vincent\n", version);
    printf("\nINSTRUCTIONS\n");
    printf(">>> Only if you have fifty percent certainty or more should you answer favourably.\n");
    printf(">>> Do not put more than one character as your answer.\n");
}

void footer(){
	printf("\nThis list is prone to patches.");
	printf("\nThis is a highly recommended reference to avoid the spreading of certain illnesses or diseases.");
    printf("\nIt is ultimately your choice to follow or disregard this checklist.\n");
    printf("\nIf you're here, that means you cleared the list! You could play!\n");
    printf("\nPress Enter to close this window.");
}

int input(char condition){
	scanf("%c", &choice);
    choice = toupper(choice);
    getchar();
    if (choice == condition){
    	printf("\nDon't play, then! Press Enter to close this window.");
    	getchar();
        return -1;
    }
}

int main(){
    header();
    while (choice != 'Y'){
        printf("\nIs your Internet okay? [Y/N] ");
        if (input('N') == -1)
        	return -1;
    }
    choice = '0';
    while (choice != 'N'){
        printf("\nIs there a chance that you might have to physically leave soon? [Y/N] ");
        if (input('Y') == -1)
        	return -1;
    }
    choice = '0';
    while (choice != 'N'){
        printf("\nIs there a chance that your parents or some other arbitrary character might stop you from playing? [Y/N] ");
        if (input('Y') == -1)
        	return -1;
    }
    footer();
    getchar();
    return 0;
}
