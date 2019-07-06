#include <iostream>

struct tAluno
{
    std::string nome;
    std::string matricula;
    int dia, mes, ano;
    float notas[3];
};

void ordenaAlunosMedia(struct tAluno *, int);
float mediaAluno(struct tAluno);

int main()
{
    struct tAluno *turma;
    int n, i, j;
    
    std::cin >> n;
    turma = new struct tAluno[n];
    
    for(i=0; i<n; i++)
    {
        std::cin >> turma[i].nome;
        std::cin >> turma[i].matricula;
        std::cin >> turma[i].dia >> turma[i].mes >> turma[i].ano;
        for(j=0; j<3; j++)
        {
            std::cin >> turma[i].notas[j];
        }
    }
    
    ordenaAlunosMedia(turma, n);
    
    for(i=0; i<n; i++)
    {
        std::cout << "(" << turma[i].matricula << ") " << turma[i].nome << std::endl;
    }
    
    return 0;
}

float mediaAluno(struct tAluno aluno)
{
    int i;
    float media = 0.0f;
    for(i=0; i<3; i++)
    {
        media += aluno.notas[i];
    }
    return media/3.0f;
}

void ordenaAlunosMedia(struct tAluno *vet, int n)
{
    int i, j;
    struct tAluno aux;
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(mediaAluno(vet[j]) > mediaAluno(vet[j+1]))
            {
                aux = vet[j];
                vet[j] = vet[j+1];
                vet[j+1] = aux;
            }
        }
    }
}