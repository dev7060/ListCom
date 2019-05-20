#include <stdio.h>
#include <conio.h>

int main(){
	int n, i;
	FILE *fp1, *fp2;
	char op[100], fname[100];
	char word[100];
	char ch;
	system("COLOR 02");
	system("title Koza v1.0(beta)");
	start_ag:
	system("cls");
	printf("Number of Files:\n\n> ");
	scanf("%d", &n);
	system("cls");
	printf("Output File Name:\n\n> ");
	fflush(stdin);
	gets(op);
	fflush(stdin);
	fp2=fopen(op, "a");
	for(i=1; i<=n; i++){
		system("cls");
		printf("File %d Name:\n\n> ", i);
		gets(fname);
		fflush(stdin);
		fp1=fopen(fname, "r");
		while(fscanf(fp1, "%s\n", word)!=EOF){
			fprintf(fp2, "%s\n", word);			
		}
		system("cls");
		printf("\n'%s' data copy success.\n\nReturning in 2 seconds...", fname);
		system("Ping 127.0.0.1 -n 3 > nul");
	}
	system("cls");
	printf("All done!\n\nPress y/Y to continue again\n\n> ");
	scanf("%c", &ch);
	if(ch=='y'||ch=='Y')
		goto start_ag;
	return 0;
}
