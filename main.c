
#include "dp.h"

int main()
{
    List L, Linv, Lcopy, Lkonkat, L1, L2;
    infotype X;
    int i, N;
    CreateList(&L);

    printf("Penambahan Elemen List First\n\n");
    printf("Berapa banyak input elemen yang diinginkan? ");
    scanf("%d",&N);
    for(i=1;i<=N;i++) {
        printf("Elemen ke %d list\t: ", i);
        scanf("%d",&X);
        InsVFirst(&L,X);
    }
    printf("-----TEST LIST KOSONG-----\n");
    printf("Apakah List L kosong? %d\n", ListEmpty(L));

    printf("===== LIST L =====\n");
    Printinfo(L);

    printf("\n\n*** Prekondisi Untuk Max/Min/Rata-Rata ***\n\n");
    printf("Jumlah elemen : %d\n", NbElmt(L));
    printf("Rata-rata elemen : %0.2f\n", Average(L));
    printf("Elemen maksimum list : %d\n", Max(L));
    printf("Address elemen maksimum list : %p\n", AdrMax(L));
    printf("Elemen minimum list : %d\n", Min(L));
    printf("Address elemen minimum list : %p\n", AdrMin(L));

    printf("\n\n*** Proses Terhadap List ***\n\n");
    InversList(&L);
    printf("Invers List L : \n");
    Printinfo(L);

    CreateList(&Lcopy);
    Lcopy = FCopyList(L);
    printf("List Copy L : ");
    Printinfo(Lcopy);

    CreateList(&Linv);
    Linv = FInversList(L);
    printf("List Invers L : \n");
    Printinfo(Linv);

    CreateList(&Lkonkat);
    Konkat(L,Linv,&Lkonkat);
    printf("List Konkat List L dan Linv  : ");
    Printinfo(Lkonkat);

    printf("\nPecah List Konkat : \n");
    CreateList(&L1);
    CreateList(&L2);
    PecahList(&L1,&L2,Lkonkat);
    printf("List L1 : ");
    Printinfo(L1);
    printf("List L2 : ");
    Printinfo(L2);

    getchar();
    return 0;
}
