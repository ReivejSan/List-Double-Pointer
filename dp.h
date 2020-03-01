#ifndef DP_H_INCLUDED
#define DP_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define true 1
#define false 0
#define boolean unsigned char
#define Nil NULL

typedef int infotype;
typedef struct tElmtList *address;

typedef struct tElmtList{
    infotype Info;
    address Next;
    address Prev;
}ElmtList;

typedef struct{
    address first;
}List;

#define First(L) (L).first
#define Next(P) (P)->Next
#define Info(P) (P)->Info
#define Prev(P) (P)->Prev

List L;
bool ListEmpty (List L);
void CreateList (List *L);
address Alokasi (infotype x);
void Dealokasi (address *P);
address Search (List L, infotype x);
bool Fsearch (List L, address P);
address  SearchPrec (List L, infotype x);
void InsVFirst (List *L, infotype x);
void InsVLast (List *L, infotype x);
void DelVFirst (List *L, infotype *x);
void DelVLast (List *L, infotype *x);
void InsertFirst (List *L, address P);
void InsertAfter (List *L, address P, address Prec);
void InsertLast (List *L, address P);
void DelFirst (List *L, address *P);
void DelP (List *L, infotype x);
void DelLast (List *L, address *P);
void DelAfter (List *L, address *Pdel, address Prec);
void Printinfo (List L);
int NbElmt (List L);
infotype Max (List L);
address AdrMax (List L);
infotype Min (List L);
address AdrMin (List L);
float Average (List L);
void DelAll (List *L);
void InversList (List *L);
List FInversList (List L);
void CopyList (List *L1, List *L2);
List FCopyList (List L);
void CpAlokList (List Lin, List *Lout);
void Konkat (List L1, List L2, List *L3);
void Konkat1 (List *L1, List *L2, List *L3);
void PecahList (List *L1, List *L2, List L);

#endif // DP_H_INCLUDED
