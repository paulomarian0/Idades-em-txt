#include<stdio.h>
#include <math.h>

/*
 * ) Faça um programa que, para um número indeterminado de pessoas: leia a idade de cada
uma, sendo que a idade 0 (zero) indica o fim da leitura e não deve ser considerada. A seguir
calcule:
• o número de pessoas;
• a idade média do grupo;
• a menor idade e a maior idade.
 */


int main() {

    FILE *arquivo;

    int entradaIdade;
    int contadorPessoas;
    int menoridade = 1000; // Valor extremamente alto pra não ter erro
    int maioridade = 0;    // Valor extremamente baixo pra não ter erro
    int totalIdade = 0;

    arquivo = fopen("Idade.txt", "w");


    while (1) {

        scanf("%i", &entradaIdade);

        if (entradaIdade == 0) {
            break;
        } else {
            contadorPessoas++;
            totalIdade += entradaIdade;

            if (entradaIdade < menoridade) {
                menoridade = entradaIdade;

            }
            if (entradaIdade > maioridade) {
                maioridade = entradaIdade;
            }


        }


    }

    fprintf(arquivo, "Numero total de pessoas entrevistadas: %i\n", contadorPessoas);
    fprintf(arquivo, "Idade media do grupo: %i\n", totalIdade / contadorPessoas);
    fprintf(arquivo, "Maior idade :%i\n", maioridade);
    fprintf(arquivo, "Menor idade :%i\n", menoridade);

    printf("Dados armazenados em um arquivo txt!");
    printf(" Procure pelo arquivo Idade.txt\n");

    return 0;
}
