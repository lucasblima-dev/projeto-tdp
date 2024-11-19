#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int criarfilesF(char **tasksF, int ntasksF) {
    FILE *reportF = fopen("relatorioF.txt", "w");
    if (!reportF) {
        perror("Erro ao abrir o arquivo");
        return -1;
    }

    // Escrevendo as tarefas feitas no arquivo
    fprintf(reportF, "Tarefas feitas:\n");
    for (int i = 0; i < ntasksF; i++) {
        fprintf(reportF, "%s\n", tasksF[i]);
    }

    fclose(reportF);
    return 0;
}

/*
tasksF -> tarefas feitas
ntasksF -> num de tarefas feitas
tasksNF -> tarefas não feitas
ntasksNF -> num de tarefas não feitas
*/