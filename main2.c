int main()
{
    const int varconst;
    float num1, num2, media;
    printf("escolha dois numeros para calcular media:");
    scanf("%f",&num1);
    scanf("%f",&num2);
    printf("aqui vai a media");
    media =(num1 + num2)/2;
    printf("a media e = %.2f",media);
    printf("escolha um valor para a constante: ");
    scanf("%d", &varconst);
    printf("constante = %d", varconst);
    return 0;
}
