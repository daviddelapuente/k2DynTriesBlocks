#include "../../treeBlock/treeBlockApi.h"
#include "assert.h"

/* En este test, primero insertamos 194M de aristas. luego borramos el arbol completo, pero medimos cada 5M de aristas
 * Es decir, calculamos cuanto se demora en borrar los primeros 5M, los primeros 10M,... el arbol completo*/
int main()
{


    blockGlobalVars *bgv=(blockGlobalVars*) malloc(sizeof(blockGlobalVars));
    bgv->init(4,S3,0.99);

    //we init the trieNode that will contain all the edges
    trieNode *t = (trieNode *) malloc(sizeof(trieNode));
    t->init(bgv);


    FILE *fpnEdges;
    FILE *fpinsert;
    FILE *fpsize;

    fpnEdges=fopen("./results/nEdges.txt", "w");
    fpinsert=fopen("./results/insert.txt", "w");
    fpsize=fopen("./results/size.txt", "w");

    if (fpnEdges == NULL ||fpinsert==NULL || fpsize==NULL){
        printf("Error opening file!\n");
        exit(1);
    }
    /*int this part we insert the nodes in the trie
    n=rows, n1=cols, nEdges=number of edges*/
    uint64_t n, n1, nEdges;
    //this variable will contain the string in the morton code of a edge (max of the string is 50, that means 2^50 nodes)
    uint8_t str[50];
    //init a clock
    clock_t start, diff=0;
    //we read the first line of the input (wich contains the number of: rows,cols,edges)

    //scan int code
    int scanCode;
    scanCode=scanf("%lu %lu %lu\n", &n, &n1, &nEdges);
    for (uint64_t i = 0; i < nEdges; ++i) {
        //we read the line containing the edge
        scanCode=scanf("%s\n", str);
        //todo: podemos cambiar el 23 por length thel string en el futuro.
        //for each char of the string, we need to convert it to int.
        //todo: podemos usar atoi y ahorrarnos el switch
        for (uint8_t j = 0; j < 23; ++j)
            switch(str[j]) {
                case '0': str[j] = 0;
                    break;
                case '1': str[j] = 1;
                    break;
                case '2': str[j] = 2;
                    break;
                case '3': str[j] = 3;
                    break;
            }

        //for each edge, we sum the time it cost to insert
        start = clock();
        insertTrie(t, str, 23, 22);
        diff += clock() - start;


        //we print each 1000000 edges
        if (i%5000000 == 0 && i!=0) {
            uint64_t msec = diff * 1000 / CLOCKS_PER_SEC;

            printf(" nEdges=%lu\n",i);
            fprintf(fpnEdges,"%lu,\n",i);

            printf("     insertTime=%f\n",(float)msec/i);
            fprintf(fpinsert,"%f,\n",(float)msec/i);

            uint64_t treeSize = sizeTrie(t);
            printf("     Total size= %lu bytes\n", treeSize);
            fprintf(fpsize,"%lu,\n",treeSize);
        }
    }

    uint64_t msec = diff * 1000 / CLOCKS_PER_SEC;
    printf(" nEdges=%lu\n",nEdges);
    fprintf(fpnEdges,"%lu\n",nEdges);

    printf("     insertTime=%f\n",(float)msec/nEdges);
    fprintf(fpinsert,"%f\n",(float)msec/nEdges);

    uint64_t treeSize = sizeTrie(t);
    printf("     Total size= %lu bytes\n", treeSize);
    fprintf(fpsize,"%lu\n",treeSize);



    fclose(fpnEdges);
    fclose(fpinsert);
    fclose(fpsize);

    printf("congratulation all test passed\n");
    return 0;
}
