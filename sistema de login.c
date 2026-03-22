#include <stdio.h>
#include <string.h>

int main() {

    char usuario[100];

    printf("Crie seu usuário: ");
    scanf("%s", &usuario);

    int senha;

    printf("Crie sua senha: ");
    scanf("%d", &senha);

    printf("Login criado com sucesso!");
    printf("\n");
    
       
    int tentativa = 0;

    while ( tentativa < 3)
    { 
        char user[100];
        
        printf("Digite seu usuário: ");
        scanf("%s", &user);

        int password;

        printf("Digite sua senha: ");
        scanf("%d", &password);
        {
            if(strcmp(user, usuario) == 0  && password == senha)
            {
                printf("Logado com sucesso!\n");
                break;
            }  
            else if(strcmp(user, usuario) != 0  || password != senha && tentativa < 2)
            {
                printf("Senha ou Usuário incorreto, tente novamente. \n");
                tentativa ++;
            }  
            else if(strcmp(user, usuario) != 0  || password != senha && tentativa == 2)
            {
                printf("Login bloqueado, tente novamente mais tarde.");
                break;
            }      
              
        }   
            
    }   
}   
