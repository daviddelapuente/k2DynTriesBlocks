#include "../../treeBlock/treeBlockApi.h"
#include "assert.h"

void printVector(std::vector<int> V ){
    for(int i=0;i<V.size();i++){
        printf("%i ",V[i]);
    }
    printf("\n");
}

void testNeig() {


    blockGlobalVars *bgv = (blockGlobalVars *) malloc(sizeof(blockGlobalVars));
    bgv->init(4, S3, 0.99);

    trieNode *t = (trieNode *) malloc(sizeof(trieNode));
    t->init(bgv);
    int * node;
    int neigNode;
    long long c = 0;
    while (c <= 100) {

        uint8_t path[30] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, (uint8_t)((c / 16384) % 4),
                            (uint8_t)((c / 4096) % 4), (uint8_t)((c / 1024) % 4), (uint8_t)((c / 256) % 4),
                            (uint8_t)((c / 64) % 4), (uint8_t)((c / 16) % 4), (uint8_t)((c / 4) % 4), (uint8_t)(c % 4)};
        if(c==0){
            node=ab(path,23);
            neigNode=node[0];
        }
        insertTrie(t, path, 23, 22);
        c++;
    }

    int pathLength=23;
    int left=0;
    int right=pow(2,pathLength)-1;

    std::vector<int> neigs;
    getNeighboursTrie(t,neigNode,23,0,22,left,right,left,right,neigs);

    assert(neigs.size()==16);
    for (int i=0;i<16;i++){
        assert(neigs[i]==i);
    }


}

int main(){
    testNeig();
    return 0;
}