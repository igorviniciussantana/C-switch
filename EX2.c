/* Ler um n�mero inteiro entre 1 e 12 e escrever o m�s correspondente. Caso o usu�rio
digite um n�mero fora desse intervalo, dever� aparecer uma mensagem informando
que n�o existe m�s com esse n�mero */

int main(){

    int num;
    printf("Insira o n�mero do m�s\n");
    scanf("%d", &num);

    switch(num){
    case 1:
    printf("Seu m�s � Janeiro");
    break;

    case 2:
    printf("Seu m�s � Fevereiro");
    break;

    case 3:
    printf("Seu m�s � Mar�o");
    break;

    case 4:
    printf("Seu m�s � Abril");
    break;

    case 5:
    printf("Seu m�s � Maio");
    break;

    case 6:
    printf("Seu m�s � Junho");
    break;

    case 7:
    printf("Seu m�s � Julho");
    break;

    case 8:
    printf("Seu m�s � Agosto");
    break;

    case 9:
    printf("Seu m�s � Setembro");
    break;

    case 10:
    printf("Seu m�s � Outubro");
    break;

    case 11:
    printf("Seu m�s � Novembro");
    break;

    case 12:
    printf("Seu m�s � Dezembro");
    break;

    default:
    printf("Sua entrada � inv�lida");
    break;
    }


return 0;
}
