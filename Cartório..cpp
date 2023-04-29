#include <stdio.h> //biblioteca de comunica��o com o usu�rio
#include <stdlib.h> //biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h> //biblioteca de aloca��o de texto por regi�o
#include <string.h> //Biblioteca respons�vel por cuidar das strings

int registro() //Fun��o respons�vel por cadastrar os usu�rios no sistema
{
	//In�cio cria��o de vari�veis/strings
	char arquivo[40];
		char cpf[40];
			char nome[40];
				char sobrenome[40];
					char cargo[40];
	//Final cria��o de vari�veis/strings
	
		printf("Digite o CPF a ser cadastrado: "); //Coletando informa��o de usu�rio
		scanf("%s", cpf); //%s refere-se a string
	
		strcpy(arquivo, cpf); // Respons�vel por copiar os valores das strings
	
		FILE *file; // Cria o arquivo
		file = fopen(arquivo, "w"); // Cria o arquivo e o "w" significa escrever
		fprintf(file, cpf); // Salvo o valor da vari�vel
		fclose(file); //Fecho o arquivo
	 
		file = fopen(arquivo, "a"); //Usa arquivo j� criado com o comando(arquivo, "w");
		fprintf(file, ","); //Colocar virgula 
		fclose(file); // fechar arquivo
	
			printf("Digite o nome a ser cadstrado: "); //coletando informa��o do usu�rio
			scanf("%s", nome); //Usado para salva dentro de uma string ("%s",     );
	
			file = fopen(arquivo, "a"); //usa arquivo j� criado com o comando "w"/write/escrever
			fprintf(file, nome); //salva o valor da vari�vel
			fclose(file); //fecha arquivo
	
			file = fopen(arquivo, "a"); //usa arquivo j� criado com o comando "w"/write/escrever
			fprintf(file, ","); //salva o valor da vari�vel
			fclose(file); // fecha arquivo
	
				printf("Digite o sobrenome a ser cadastrado: "); //coletando informa��o do usu�rio
				scanf("%s", sobrenome); //%s refere-se a string
	
				file = fopen(arquivo, "a"); //usa arquivo j� criado com o comando "w"/write/escrever
				fprintf(file, sobrenome); //salva o valor da vari�vel
				fclose(file); //fecha arquivo
	
				file = fopen(arquivo, "a"); //usa arquivo j� criado com o comando "w"
				fprintf(file, ","); //salva o valor da vari�vel
				fclose(file); //fecha arquivo
	
					printf("Digite o cargo a ser cadastrado: "); //coletando informa��o do usu�rio
					scanf("%s", cargo); //%s refere-se a string
	
					file = fopen(arquivo, "a"); //usa arquivo j� criado com o comando "w"
					fprintf(file, cargo); //salva o valor da vari�vel
					fclose(file); //fecha o arquivo
	
					system("pause"); //pausa
	
	
}

int consulta() //Fun��o de Consulta
{
	setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem
	
	//in�cio cria��o de vari�veis/string
	char cpf[40];
	char conteudo[200];
	//final cria��o de vari�veis
	
	printf("Digite o cpf a ser consultado: "); //coleta de informa��o de usu�rio
	scanf("%s", cpf); //%s refere-se a string
	
	FILE *file; //cria arquivo
	file = fopen(cpf,"r"); // usa o "r"/read/ler para executar um arquivo j� criado "w"
	
	if(file == NULL) //Se (if) o arquivo(file) n�o existir(NULL) exibir coment�rio/ == compar�vel
	{
	printf("Arquivo n�o localizado, n�o � poss�vel abrir arquivo!\n\n");
	system("pause"); //pausa
	}
	
	while(fgets(conteudo, 200, file) != NULL) //busca por aquivos dentro das vari�veis
	{
		printf("\nEssas s�o as informa��es do usu�rio: "); //Coment�rio
		printf("%s", conteudo); //%s refere-se a string
		printf("\n\n"); //pular linha
	}
	
	system("pause");
}

int deletar() //Fun��o de Deletar
{
	//in�cio da cria��o de vari�veis/strings 
		char cpf[40];
	//final da cria��o de vari�veis
	
		printf("Digite o CPF do usu�rio que ser� deletado: "); //coleta de informa��o de usu�rio
		scanf("%s", cpf); //%s refere-se a string
	
		remove(cpf);
	
		FILE *file; // cria arquivo
		file = fopen(cpf, "r"); // usa o "r"/read/ler para executar um arquivo j� criado
		
		if(file == NULL) //Se (if) o arquivo(file) n�o existir(NULL)
		{
		printf("Usu�rio n�o encontrado !\n\n");
		system("pause");
		}
	
	
}




int main()
	{
	int opcao=0; //Definindo as vari�veis
	int laco=1;
	
	for(laco=1;laco=1;)
	{
	
		system("cls"); //respons�vel por limpar a tela
	
        setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem
    
        printf("### Cart�rio da EBAC ###\n\n"); //In�cio do menu
        printf("Escolha a op��o desejada do menu: \n\n");
        printf("\t1 - Resgistrar nomes\n");
        printf("\t2 - Consultar nomes\n");
        printf("\t3 - Deletar nomes\n\n"); 
        printf("Op��o:  "); //Final do menu
    
        scanf("%d", &opcao); //Armazenando a escolha do usu�rio
    
        system("cls"); //respons�vel por limpar a tela
    
        
        switch(opcao) //Sele��o de vari�veis
        {
        	case 1:
        	registro();
    		break;
			
			case 2:
			consulta();
			break;
			
			case 3:
			deletar();
			break;
			
			
			default:
			printf("Escolha uma op��o v�lida !\n\n");
			system("pause");
			break; 
		}
        
		
	}	


	
	
	
	
	
	
	
	
	
	
	
}
