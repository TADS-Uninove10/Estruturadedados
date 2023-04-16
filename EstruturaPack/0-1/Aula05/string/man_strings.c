
int tam_vetor(char vetor_tam[])
{
    int contador = 0;
    for (contador =0;;contador ++)//o contador começa com zero conta mais ate /0 
    
    {
        if(vetor_tam[contador]=='\0')
        break;
    }
    return contador;  
}
        
int str_comp (char v1 [],char v2[])// variavel str_comp
{
    int cont = 0;
    if(tam_vetor(v1) != tam_vetor(v2))// o tamanho do vetor retorna o numero 0
    {
        return 0;
    }
    for (cont =0; v1[cont]!= '\0';cont ++)// retorna o vetor para o contador 
    {
        if(v1[cont] != v2[cont]) //o contador tem que ser diferente 
        {
           return 0;
        }
    }
    return 1;// retorna e finaliza o programa
}

