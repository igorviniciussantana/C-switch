/*Fa�a um algoritmo/programa em C que simule uma calculadora com as quatro
opera��es b�sicas (adi��o, subtra��o, multiplica��o e divis�o). Deve ser solicitado ao
usu�rio a entrada dos dois operandos e da opera��o a ser executada, na forma de um
menu. Dependendo da opera��o escolhida, deve ser executada a opera��o solicitada e
ser esccrito o seu resultado.*/




int main()
{
    int num1, num2, opcao;

    printf("Insira o Primeiro N�mero\n");
    scanf("%d", &num1);

    printf("Insira o Segundo N�mero\n");
    scanf("%d", &num2);


    printf("\n1- Soma\n");
    printf("\n2- Subtra��o\n");
    printf("\n3- Multiplica��o\n");
    printf("\n4- Divis�o\n");
    printf("\nEscolha a op��o (1 a 4):");
    scanf("%d", &opcao);
    switch(opcao)
{
case 1:
printf("Soma: %d", num1 + num2);
break;
case 2:
printf("Subtra��o: %d", num1 - num2);
break;
case 3:
printf("Multiplica��o: %d", num1 * num2);
break;
case 4:
printf("Divis�o: %d", num1 / num2);


}

return 0;

}
