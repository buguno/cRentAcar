#include <stdlib.h>
#include <time.h>

#include "user.h"

struct {
	char nome[50];
	char sobrenome[50];
	char data_nascimento[20];
	char cpf[20];
	char nome_mae[80];
	char rg[20];
	char email[80];
	char CNH[20];
	char endereco[120];
	char fone[15];
} user[200];

void saveDataUser(char *array) {
	FILE *file = fopen("user.dat", "wb"); // Substitui todo o texto já existente
	fwrite(user, sizeof(char), sizeof(user), file);
	fclose(file);
}
