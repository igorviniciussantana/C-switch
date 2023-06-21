
/*Criar um algoritmo para ler as letras iniciais de um estado civil e o sexo da pessoa e
mostrar a descrição: casado(a), solteiro(a), viúvo(a), divorciado(a), inválido.*/


int main()
{

    char inicial;

    printf("Insira a inicial do seu estado civil\n");
    scanf("%c", &inicial);

    switch(inicial)
    {
        case 'c':
        printf("Você é casado");
        break;
       case 's':
        printf("Você é solteiro");
        break;
        case 'v':
        printf("Você é viúvo");
        break;
        case 'd':
        printf("Você é divorciado");
        break;


    }
        return 0;

}
