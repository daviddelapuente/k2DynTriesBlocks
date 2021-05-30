#include "../../treeBlock/treeBlockApi.h"
#include "assert.h"

void printVector(std::vector<int> v){
    for (int i=0;i<v.size();i++){
        printf("%i ",v[i]);
    }
    printf("\n");
}

void printMatrix(std::vector< std::vector<int> > m){
    for (int i=0;i<m.size();i++){
        for (int j=0;j<m[0].size();j++){
            printf("%i ",m[i][j]);
        }
        printf("\n");
    }
}


bool isIn(std::vector< std::vector<int> > m,int a,int b){
    for (int i=0;i<m.size();i++){
        if(m[i][0]==a && m[i][1]==b){
            return true;
        }
    }
    return false;
}

int main(){



    blockGlobalVars *bgv=(blockGlobalVars*) malloc(sizeof(blockGlobalVars));
    bgv->init(4,S3,0.99);

    //we init the trieNode that will contain all the edges
    trieNode *t = (trieNode *) malloc(sizeof(trieNode));
    t->init(bgv);


    /*int this part we insert the nodes in the trie
    n=rows, n1=cols, nEdges=number of edges*/
    uint64_t n, n1, nEdges;
    //this variable will contain the string in the morton code of a edge (max of the string is 50, that means 2^50 nodes)
    uint8_t str[50];
    //init a clock
    clock_t start, diff=0;


    //scan int code
    int scanCode;

    //we read the first line of the input (wich contains the number of: rows,cols,edges)
    scanCode=scanf("%lu %lu %lu\n", &n, &n1, &nEdges);

    int * node;
    int neigNode;
    bool neigNodeDesigned=false;

    for (uint64_t i = 0; i < 190000001; ++i) {
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

        insertTrie(t, str, 23, 22);


        if (i%5000000 == 0 && i!=0) {

            diff=0;
            printf(" nEdges=%lu\n",i);

            if(!neigNodeDesigned){
                node=ab(str,23);
                neigNodeDesigned=true;
                neigNode=node[0];
            }


            for(int i2=0;i2<1;i2++){
                printf("testing\n");
                int pathLength=23;
                int left=0;
                int right=pow(2,pathLength)-1;
                std::vector<int> neigs;
                std::vector< std::vector<int> > rangeNodes;
                int limit1=0,limit2=right;
                rangeQuery(t,neigNode,neigNode+49,limit1,limit2,23,0,22,left,right,left,right,rangeNodes);

                //printMatrix(rangeNodes);

                for (int k=0;k<50;k++){
                    getNeighboursTrie(t,neigNode+k,23,0,22,left,right,left,right,neigs);

                    int s1=0;
                    while(s1<neigs.size()){
                        if (limit1<=neigs[s1] && neigs[s1]<=limit2){
                            assert(isIn(rangeNodes,neigNode+k,neigs[s1]));
                        }
                        s1++;
                    }


                    neigs.clear();
                }


                rangeNodes.clear();


            }
        }
    }

    printf("congratulation all test passed\n");
    return 0;
}
