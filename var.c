int main(int argc, char const *argv[])
{
    float precoVenda, valorImposto, valorDesconto, precoFinal;
    
    const float taxaImposto = 0.1;
    const float descontoPadrao = 0.05;

    printf("informe o preço de venda do produto: ");
    scanf("%f", &precoVenda);
    
    valorImposto = precoVenda * taxaImposto;
    valorDesconto = precoVenda * descontoPadrao;
    precoFinal = precoVenda + valorImposto - valorDesconto;
    printf("o preço final do televisor é %.2f",precoFinal);
    
    return 0;
}
