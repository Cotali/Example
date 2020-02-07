#include <stdio.h>


typedef struct{
	char name[256];
	char nameOfBank[256];
	long int account;
	char operation[256];
	float amount;
}CLIENT;

int main(){
	
	FILE *fp;
	CLIENT client;

	fp = fopen("inFile", "r");
	
	while(!feof(fp))
	{
		fscanf(fp, "%s %s %li %s %f", client.name, client.nameOfBank, &client.account, client.operation, &client.amount);
		fprintf(stdout, "%s %s %li %s %f\n", client.name, client.nameOfBank, client.account, client.operation, client.amount);
	
	}

	fclose(fp);

	return 0;

}
