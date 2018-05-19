/* 
 * File:   cliente.h
 * Author: Joao
 *
 * Created on 23 de Abril de 2017, 04:53
 */
#ifndef STRUCTS_H
#define STRUCTS_H

typedef struct {
    int id, valor, estado;
    char nome[100];
    float preco;
} Guitarra;

typedef struct {
    int dia, mes, ano;
} Data;

typedef struct aluguer {
    int id, estado;
    Data inicio, fim;
    struct aluguer *prox; //ponteiro para o próximo nó da lista de alugures
} Aluguer;

typedef struct cliente {
    char nome[100];
    int nif,cont_estado,n_alugueres;
    struct cliente *prox; //ponteiro para o proximo nó da lista
    Aluguer *lista; //ponteiro para a lista dos alugueres
    //cont_estado -> contador para nº de guitarras danificadas
    //n_alugures -> contador para o nº de alugueres
}Cliente;

#endif /* STRUCTS_H */