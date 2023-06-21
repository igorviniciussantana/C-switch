/* Ler um número inteiro entre 1 e 12 e escrever o mês correspondente. Caso o usuário
digite um número fora desse intervalo, deverá aparecer uma mensagem informando
que não existe mês com esse número */

int main(){

    int num;
    printf("Insira o número do mês\n");
    scanf("%d", &num);

    switch(num){
    case 1:
    printf("Seu mês é Janeiro");
    break;

    case 2:
    printf("Seu mês é Fevereiro");
    break;

    case 3:
    printf("Seu mês é Março");
    break;

    case 4:
    printf("Seu mês é Abril");
    break;

    case 5:
    printf("Seu mês é Maio");
    break;

    case 6:
    printf("Seu mês é Junho");
    break;

    case 7:
    printf("Seu mês é Julho");
    break;

    case 8:
    printf("Seu mês é Agosto");
    break;

    case 9:
    printf("Seu mês é Setembro");
    break;

    case 10:
    printf("Seu mês é Outubro");
    break;

    case 11:
    printf("Seu mês é Novembro");
    break;

    case 12:
    printf("Seu mês é Dezembro");
    break;

    default:
    printf("Sua entrada é inválida");
    break;
    }


return 0;
}
