#include <stdio.h> //biblioteca de comunicação com o usuário
#include <stdlib.h> //biblioteca de alocação de espaço em memória
#include <locale.h> //biblioteca de alocação de texto por região
#include <string.h> //Biblioteca responsável por cuidar das strings

int registro() //Função responsável por cadastrar os usuários no sistema
{
	//Início criação de variáveis/strings
	char arquivo[40];
		char cpf[40];
			char nome[40];
				char sobrenome[40];
					char cargo[40];
	//Final criação de variáveis/strings
	
		printf("Digite o CPF a ser cadastrado: "); //Coletando informação de usuário
		scanf("%s", cpf); //%s refere-se a string
	
		strcpy(arquivo, cpf); // Responsável por copiar os valores das strings
	
		FILE *file; // Cria o arquivo
		file = fopen(arquivo, "w"); // Cria o arquivo e o "w" significa escrever
		fprintf(file, cpf); // Salvo o valor da variável
		fclose(file); //Fecho o arquivo
	 
		file = fopen(arquivo, "a"); //Usa arquivo já criado com o comando(arquivo, "w");
		fprintf(file, ","); //Colocar virgula 
		fclose(file); // fechar arquivo
	
			printf("Digite o nome a ser cadstrado: "); //coletando informação do usuário
			scanf("%s", nome); //Usado para salva dentro de uma string ("%s",     );
	
			file = fopen(arquivo, "a"); //usa arquivo já criado com o comando "w"/write/escrever
			fprintf(file, nome); //salva o valor da variável
			fclose(file); //fecha arquivo
	
			file = fopen(arquivo, "a"); //usa arquivo já criado com o comando "w"/write/escrever
			fprintf(file, ","); //salva o valor da variável
			fclose(file); // fecha arquivo
	
				printf("Digite o sobrenome a ser cadastrado: "); //coletando informação do usuário
				scanf("%s", sobrenome); //%s refere-se a string
	
				file = fopen(arquivo, "a"); //usa arquivo já criado com o comando "w"/write/escrever
				fprintf(file, sobrenome); //salva o valor da variável
				fclose(file); //fecha arquivo
	
				file = fopen(arquivo, "a"); //usa arquivo já criado com o comando "w"
				fprintf(file, ","); //salva o valor da variável
				fclose(file); //fecha arquivo
	
					printf("Digite o cargo a ser cadastrado: "); //coletando informação do usuário
					scanf("%s", cargo); //%s refere-se a string
	
					file = fopen(arquivo, "a"); //usa arquivo já criado com o comando "w"
					fprintf(file, cargo); //salva o valor da variável
					fclose(file); //fecha o arquivo
	
					system("pause"); //pausa
	
	
}

int consulta() //Função de Consulta
{
	setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem
	
	//início criação de variáveis/string
	char cpf[40];
	char conteudo[200];
	//final criação de variáveis
	
	printf("Digite o cpf a ser consultado: "); //coleta de informação de usuário
	scanf("%s", cpf); //%s refere-se a string
	
	FILE *file; //cria arquivo
	file = fopen(cpf,"r"); // usa o "r"/read/ler para executar um arquivo já criado "w"
	
	if(file == NULL) //Se (if) o arquivo(file) não existir(NULL) exibir comentário/ == comparável
	{
	printf("Arquivo não localizado, não é possível abrir arquivo!\n\n");
	system("pause"); //pausa
	}
	
	while(fgets(conteudo, 200, file) != NULL) //busca por aquivos dentro das variáveis
	{
		printf("\nEssas são as informações do usuário: "); //Comentário
		printf("%s", conteudo); //%s refere-se a string
		printf("\n\n"); //pular linha
	}
	
	system("pause"); //pausa
}

int deletar() //Função de Deletar
{
	//início da criação de variáveis/strings 
		char cpf[40];
	//final da criação de variáveis
	
		printf("Digite o CPF do usuário que será deletado: "); //coleta de informação de usuário
		scanf("%s", cpf); //%s refere-se a string
	
		remove(cpf); 
	
		FILE *file; // cria arquivo
		file = fopen(cpf, "r"); // usa o "r"/read/ler para executar um arquivo já criado
		
		if(file == NULL) //Se (if) o arquivo(file) não existir(NULL)
		{
		printf("Usuário não encontrado !\n\n"); 
		system("pause");
		}
	
	
}




int main()
	{	
	setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem	
	int opcao=0; //Definindo as variáveis
	int laco=1;
	//início da criação de variáveis/strings
	 char senhadigitada[10]="a"; 
	//final da criação de variáveis/strings
	int comparacao;
	
	printf("### Cartório da EBAC ###\n\n"); 
	printf("Login de Administrador!\n\nDigite a senha de acesso: "); //coleta de informação de usuário
	scanf("%s", senhadigitada); //%s refere-se a string
	comparacao = strcmp(senhadigitada, "admin");
	
	if(comparacao == 0)
	{
		system("cls");	//responsável por limpar a tela
		for(laco=1;laco=1;)
		{
		
			system("cls"); //responsável por limpar a tela
		
	        setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem
		    
	        printf("### Cartório da EBAC ###\n\n"); //Início do menu
	        printf("Escolha a opção desejada do menu: \n\n");
	        printf("\t1 - Resgistrar nomes\n");
	        printf("\t2 - Consultar nomes\n");
	        printf("\t3 - Deletar nomes\n\n"); 
	        printf("\t4 - Sair do Sistema\n\n");
	        printf("Opção:  "); //Final do menu
	    
	        scanf("%d", &opcao); //(scanf)Escaneia a opção do usuário.(%d) para armazenar uma variável do tipo inteiro.(&) definir o nome da variável que irá receber o armazenamento.
	    
	        system("cls"); //responsável por limpar a tela
	    
        
	        switch(opcao) //Seleção de variáveis
	        { //início Switch,seleção.
	        	case 1:
	        	registro(); //chamada de funções
	    		break;
				
				case 2:
				consulta();
				break;
				
				case 3:
				deletar();
				break;
				
				case 4:
				printf("Obrigado por usar o sistema!\n");
				return 0;
				break;
				
				default:
				printf("Escolha uma opção válida !\n\n");
				system("pause");
				break; 
			} //fim do Switch,seleção.
	    }
	}
	
	else
		printf("Senha Incorreta!");
		
} //fim/reinício do laço


	
	
	
	
	
	
	
	
	
	
	

