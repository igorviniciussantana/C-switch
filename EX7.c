
/*Criar um algoritmo para ler as letras iniciais de um estado civil e o sexo da pessoa e
mostrar a descri��o: casado(a), solteiro(a), vi�vo(a), divorciado(a), inv�lido.*/


int main()
{

    char inicial;

    printf("Insira a inicial do seu estado civil\n");
    scanf("%c", &inicial);

    switch(inicial)
    {
        case 'c':
        printf("Voc� � casado");
        break;
       case 's':
        printf("Voc� � solteiro");
        break;
        case 'v':
        printf("Voc� � vi�vo");
        break;
        case 'd':
        printf("Voc� � divorciado");
        break;


    }
        return 0;

}
