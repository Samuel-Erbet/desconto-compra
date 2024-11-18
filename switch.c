int main()
{
    char opcao;
    float valor, total;
    printf("\n Digite o valor da compra \n");
    scanf("%f",&valor);
    printf("\n digite a letra do desconto a ser aplicado: \n");
    printf("\ta- 10%% de desconto\n");
    printf("\tb- 15%% de desconto\n");
    printf("\n digite a sua opcao:");
    scanf("%s",&opcao);
    switch(opcao){
        case 'a':
            total=valor-(valor*0.10);
            printf("\n Valor final da compra: R$ %.2f\n", total);
            break;
        case 'b':
            total = valor -(valor*0.20);
            printf("\n Valor final da compra: R$ %.2f\n", total);
            break;
        default:
            printf("opcao invalida\n");
    }
    return 0;
}
