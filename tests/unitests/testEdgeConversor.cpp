#include "../../treeBlock/treeBlockApi.h"
#include "assert.h"

//path of length 1 (graf with two nodes, matrix 2x2);
void test1path1(){
    static uint8_t  path[1];
    int * node;

    //0=[0,0]
    path[0]=0;
    node = ab(path,1);
    assert(node[0]==0);
    assert(node[1]==0);

    //1=[0,1]
    path[0]=1;
    node = ab(path,1);
    assert(node[0]==0);
    assert(node[1]==1);

    //2=[1,0]
    path[0]=2;
    node = ab(path,1);
    assert(node[0]==1);
    assert(node[1]==0);

    //3=[1,1]
    path[0]=3;
    node = ab(path,1);
    assert(node[0]==1);
    assert(node[1]==1);
}

//path of length 2 (graf with 4 nodes, matrix 4x4);

void test2path2(){
    static uint8_t  path[3];
    int * node;

    //00=[0,0]
    path[0]=0;path[1]=0;
    node = ab(path,2);
    assert(node[0]==0);
    assert(node[1]==0);

    //01=[0,1]
    path[0]=0;path[1]=1;
    node = ab(path,2);
    assert(node[0]==0);
    assert(node[1]==1);

    //02=[1,0]
    path[0]=0;path[1]=2;
    node = ab(path,2);
    assert(node[0]==1);
    assert(node[1]==0);

    //03=[1,1]
    path[0]=0;path[1]=3;
    node = ab(path,2);
    assert(node[0]==1);
    assert(node[1]==1);




    //10=[0,2]
    path[0]=1;path[1]=0;
    node = ab(path,2);
    assert(node[0]==0);
    assert(node[1]==2);

    //11=[0,3]
    path[0]=1;path[1]=1;
    node = ab(path,2);
    assert(node[0]==0);
    assert(node[1]==3);

    //12=[1,2]
    path[0]=1;path[1]=2;
    node = ab(path,2);
    assert(node[0]==1);
    assert(node[1]==2);

    //13=[1,3]
    path[0]=1;path[1]=3;
    node = ab(path,2);
    assert(node[0]==1);
    assert(node[1]==3);






    //20=[2,0]
    path[0]=2;path[1]=0;
    node = ab(path,2);
    assert(node[0]==2);
    assert(node[1]==0);

    //21=[2,1]
    path[0]=2;path[1]=1;
    node = ab(path,2);
    assert(node[0]==2);
    assert(node[1]==1);

    //22=[3,0]
    path[0]=2;path[1]=2;
    node = ab(path,2);
    assert(node[0]==3);
    assert(node[1]==0);

    //23=[3,1]
    path[0]=2;path[1]=3;
    node = ab(path,2);
    assert(node[0]==3);
    assert(node[1]==1);





    //30=[2,2]
    path[0]=3;path[1]=0;
    node = ab(path,2);
    assert(node[0]==2);
    assert(node[1]==2);

    //31=[2,3]
    path[0]=3;path[1]=1;
    node = ab(path,2);
    assert(node[0]==2);
    assert(node[1]==3);

    //32=[3,2]
    path[0]=3;path[1]=2;
    node = ab(path,2);
    assert(node[0]==3);
    assert(node[1]==2);

    //33=[3,3]
    path[0]=3;path[1]=3;
    node = ab(path,2);
    assert(node[0]==3);
    assert(node[1]==3);
}




//path of length 3 (graf with 8 nodes, matrix 8x8);
void test3path3(){

    static uint8_t  path[3];
    int * node;

    //000=[0,0]
    path[0]=0;path[1]=0;path[2]=0;
    node = ab(path,3);
    assert(node[0]==0);
    assert(node[1]==0);

    //001=[0,1]
    path[0]=0;path[1]=0;path[2]=1;
    node = ab(path,3);
    assert(node[0]==0);
    assert(node[1]==1);

    //002=[1,0]
    path[0]=0;path[1]=0;path[2]=2;
    node = ab(path,3);
    assert(node[0]==1);
    assert(node[1]==0);

    //003=[1,1]
    path[0]=0;path[1]=0;path[2]=3;
    node = ab(path,3);
    assert(node[0]==1);
    assert(node[1]==1);

    //010=[0,2]
    path[0]=0;path[1]=1;path[2]=0;
    node = ab(path,3);
    assert(node[0]==0);
    assert(node[1]==2);

    //011=[0,3]
    path[0]=0;path[1]=1;path[2]=1;
    node = ab(path,3);
    assert(node[0]==0);
    assert(node[1]==3);

    //012=[1,2]
    path[0]=0;path[1]=1;path[2]=2;
    node = ab(path,3);
    assert(node[0]==1);
    assert(node[1]==2);

    //013=[1,3]
    path[0]=0;path[1]=1;path[2]=3;
    node = ab(path,3);
    assert(node[0]==1);
    assert(node[1]==3);

    //020=[2,0]
    path[0]=0;path[1]=2;path[2]=0;
    node = ab(path,3);
    assert(node[0]==2);
    assert(node[1]==0);

    //021=[2,1]
    path[0]=0;path[1]=2;path[2]=1;
    node = ab(path,3);
    assert(node[0]==2);
    assert(node[1]==1);

    //022=[3,0]
    path[0]=0;path[1]=2;path[2]=2;
    node = ab(path,3);
    assert(node[0]==3);
    assert(node[1]==0);

    //023=[3,1]
    path[0]=0;path[1]=2;path[2]=3;
    node = ab(path,3);
    assert(node[0]==3);
    assert(node[1]==1);

    //030=[2,2]
    path[0]=0;path[1]=3;path[2]=0;
    node = ab(path,3);
    assert(node[0]==2);
    assert(node[1]==2);

    //031=[2,3]
    path[0]=0;path[1]=3;path[2]=1;
    node = ab(path,3);
    assert(node[0]==2);
    assert(node[1]==3);

    //032=[3,2]
    path[0]=0;path[1]=3;path[2]=2;
    node = ab(path,3);
    assert(node[0]==3);
    assert(node[1]==2);

    //033=[3,3]
    path[0]=0;path[1]=3;path[2]=3;
    node = ab(path,3);
    assert(node[0]==3);
    assert(node[1]==3);






    //100=[0,4]
    path[0]=1;path[1]=0;path[2]=0;
    node = ab(path,3);
    assert(node[0]==0);
    assert(node[1]==4);

    //101=[0,5]
    path[0]=1;path[1]=0;path[2]=1;
    node = ab(path,3);
    assert(node[0]==0);
    assert(node[1]==5);

    //102=[1,4]
    path[0]=1;path[1]=0;path[2]=2;
    node = ab(path,3);
    assert(node[0]==1);
    assert(node[1]==4);

    //103=[1,5]
    path[0]=1;path[1]=0;path[2]=3;
    node = ab(path,3);
    assert(node[0]==1);
    assert(node[1]==5);

    //110=[0,6]
    path[0]=1;path[1]=1;path[2]=0;
    node = ab(path,3);
    assert(node[0]==0);
    assert(node[1]==6);

    //111=[0,7]
    path[0]=1;path[1]=1;path[2]=1;
    node = ab(path,3);
    assert(node[0]==0);
    assert(node[1]==7);

    //112=[1,6]
    path[0]=1;path[1]=1;path[2]=2;
    node = ab(path,3);
    assert(node[0]==1);
    assert(node[1]==6);

    //113=[1,7]
    path[0]=1;path[1]=1;path[2]=3;
    node = ab(path,3);
    assert(node[0]==1);
    assert(node[1]==7);

    //120=[2,4]
    path[0]=1;path[1]=2;path[2]=0;
    node = ab(path,3);
    assert(node[0]==2);
    assert(node[1]==4);

    //121=[2,5]
    path[0]=1;path[1]=2;path[2]=1;
    node = ab(path,3);
    assert(node[0]==2);
    assert(node[1]==5);

    //122=[3,4]
    path[0]=1;path[1]=2;path[2]=2;
    node = ab(path,3);
    assert(node[0]==3);
    assert(node[1]==4);

    //123=[3,5]
    path[0]=1;path[1]=2;path[2]=3;
    node = ab(path,3);
    assert(node[0]==3);
    assert(node[1]==5);

    //130=[2,6]
    path[0]=1;path[1]=3;path[2]=0;
    node = ab(path,3);
    assert(node[0]==2);
    assert(node[1]==6);

    //131=[2,7]
    path[0]=1;path[1]=3;path[2]=1;
    node = ab(path,3);
    assert(node[0]==2);
    assert(node[1]==7);

    //132=[3,6]
    path[0]=1;path[1]=3;path[2]=2;
    node = ab(path,3);
    assert(node[0]==3);
    assert(node[1]==6);

    //133=[3,7]
    path[0]=1;path[1]=3;path[2]=3;
    node = ab(path,3);
    assert(node[0]==3);
    assert(node[1]==7);






    //200=[4,0]
    path[0]=2;path[1]=0;path[2]=0;
    node = ab(path,3);
    assert(node[0]==4);
    assert(node[1]==0);

    //201=[4,1]
    path[0]=2;path[1]=0;path[2]=1;
    node = ab(path,3);
    assert(node[0]==4);
    assert(node[1]==1);

    //202=[5,0]
    path[0]=2;path[1]=0;path[2]=2;
    node = ab(path,3);
    assert(node[0]==5);
    assert(node[1]==0);

    //203=[5,1]
    path[0]=2;path[1]=0;path[2]=3;
    node = ab(path,3);
    assert(node[0]==5);
    assert(node[1]==1);

    //210=[4,2]
    path[0]=2;path[1]=1;path[2]=0;
    node = ab(path,3);
    assert(node[0]==4);
    assert(node[1]==2);

    //211=[4,3]
    path[0]=2;path[1]=1;path[2]=1;
    node = ab(path,3);
    assert(node[0]==4);
    assert(node[1]==3);

    //212=[5,2]
    path[0]=2;path[1]=1;path[2]=2;
    node = ab(path,3);
    assert(node[0]==5);
    assert(node[1]==2);

    //213=[5,3]
    path[0]=2;path[1]=1;path[2]=3;
    node = ab(path,3);
    assert(node[0]==5);
    assert(node[1]==3);

    //220=[6,0]
    path[0]=2;path[1]=2;path[2]=0;
    node = ab(path,3);
    assert(node[0]==6);
    assert(node[1]==0);

    //221=[6,1]
    path[0]=2;path[1]=2;path[2]=1;
    node = ab(path,3);
    assert(node[0]==6);
    assert(node[1]==1);

    //222=[7,0]
    path[0]=2;path[1]=2;path[2]=2;
    node = ab(path,3);
    assert(node[0]==7);
    assert(node[1]==0);

    //223=[7,1]
    path[0]=2;path[1]=2;path[2]=3;
    node = ab(path,3);
    assert(node[0]==7);
    assert(node[1]==1);

    //230=[6,2]
    path[0]=2;path[1]=3;path[2]=0;
    node = ab(path,3);
    assert(node[0]==6);
    assert(node[1]==2);

    //231=[6,3]
    path[0]=2;path[1]=3;path[2]=1;
    node = ab(path,3);
    assert(node[0]==6);
    assert(node[1]==3);

    //232=[7,2]
    path[0]=2;path[1]=3;path[2]=2;
    node = ab(path,3);
    assert(node[0]==7);
    assert(node[1]==2);

    //233=[7,3]
    path[0]=2;path[1]=3;path[2]=3;
    node = ab(path,3);
    assert(node[0]==7);
    assert(node[1]==3);






    //300=[4,4]
    path[0]=3;path[1]=0;path[2]=0;
    node = ab(path,3);
    assert(node[0]==4);
    assert(node[1]==4);

    //301=[4,5]
    path[0]=3;path[1]=0;path[2]=1;
    node = ab(path,3);
    assert(node[0]==4);
    assert(node[1]==5);

    //302=[5,4]
    path[0]=3;path[1]=0;path[2]=2;
    node = ab(path,3);
    assert(node[0]==5);
    assert(node[1]==4);

    //303=[5,5]
    path[0]=3;path[1]=0;path[2]=3;
    node = ab(path,3);
    assert(node[0]==5);
    assert(node[1]==5);

    //310=[4,6]
    path[0]=3;path[1]=1;path[2]=0;
    node = ab(path,3);
    assert(node[0]==4);
    assert(node[1]==6);

    //311=[4,7]
    path[0]=3;path[1]=1;path[2]=1;
    node = ab(path,3);
    assert(node[0]==4);
    assert(node[1]==7);

    //312=[5,6]
    path[0]=3;path[1]=1;path[2]=2;
    node = ab(path,3);
    assert(node[0]==5);
    assert(node[1]==6);

    //313=[5,7]
    path[0]=3;path[1]=1;path[2]=3;
    node = ab(path,3);
    assert(node[0]==5);
    assert(node[1]==7);

    //320=[6,4]
    path[0]=3;path[1]=2;path[2]=0;
    node = ab(path,3);
    assert(node[0]==6);
    assert(node[1]==4);

    //321=[6,5]
    path[0]=3;path[1]=2;path[2]=1;
    node = ab(path,3);
    assert(node[0]==6);
    assert(node[1]==5);

    //322=[7,4]
    path[0]=3;path[1]=2;path[2]=2;
    node = ab(path,3);
    assert(node[0]==7);
    assert(node[1]==4);

    //323=[7,1]
    path[0]=3;path[1]=2;path[2]=3;
    node = ab(path,3);
    assert(node[0]==7);
    assert(node[1]==5);

    //330=[6,6]
    path[0]=3;path[1]=3;path[2]=0;
    node = ab(path,3);
    assert(node[0]==6);
    assert(node[1]==6);

    //331=[6,7]
    path[0]=3;path[1]=3;path[2]=1;
    node = ab(path,3);
    assert(node[0]==6);
    assert(node[1]==7);

    //332=[7,6]
    path[0]=3;path[1]=3;path[2]=2;
    node = ab(path,3);
    assert(node[0]==7);
    assert(node[1]==6);

    //333=[7,7]
    path[0]=3;path[1]=3;path[2]=3;
    node = ab(path,3);
    assert(node[0]==7);
    assert(node[1]==7);
}

void test4path4some(){
    static uint8_t  path[4];
    int * node;

    //1302=[5,12]
    path[0]=1;path[1]=3;path[2]=0;path[3]=2;
    node = ab(path,4);
    assert(node[0]==5);
    assert(node[1]==12);

    //1301=[4,13]
    path[0]=1;path[1]=3;path[2]=0;path[3]=1;
    node = ab(path,4);
    assert(node[0]==4);
    assert(node[1]==13);

    //0203=[5,1]
    path[0]=0;path[1]=2;path[2]=0;path[3]=3;
    node = ab(path,4);
    assert(node[0]==5);
    assert(node[1]==1);

    //3113=[9,15]
    path[0]=3;path[1]=1;path[2]=1;path[3]=3;
    node = ab(path,4);
    assert(node[0]==9);
    assert(node[1]==15);

    //1110=[0,14]
    path[0]=1;path[1]=1;path[2]=1;path[3]=0;
    node = ab(path,4);
    assert(node[0]==0);
    assert(node[1]==14);

    //1111=[0,15]
    path[0]=1;path[1]=1;path[2]=1;path[3]=1;
    node = ab(path,4);
    assert(node[0]==0);
    assert(node[1]==15);

    //0000=[0,0]
    path[0]=0;path[1]=0;path[2]=0;path[3]=0;
    node = ab(path,4);
    assert(node[0]==0);
    assert(node[1]==0);

    //2000=[8,0]
    path[0]=2;path[1]=0;path[2]=0;path[3]=0;
    node = ab(path,4);
    assert(node[0]==8);
    assert(node[1]==0);

    //2222=[15,0]
    path[0]=2;path[1]=2;path[2]=2;path[3]=2;
    node = ab(path,4);
    assert(node[0]==15);
    assert(node[1]==0);

    //2111=[8,7]
    path[0]=2;path[1]=1;path[2]=1;path[3]=1;
    node = ab(path,4);
    assert(node[0]==8);
    assert(node[1]==7);

    //3232=[15,10]
    path[0]=3;path[1]=2;path[2]=3;path[3]=2;
    node = ab(path,4);
    assert(node[0]==15);
    assert(node[1]==10);

    //0130=[2,6]
    path[0]=0;path[1]=1;path[2]=3;path[3]=0;
    node = ab(path,4);
    assert(node[0]==2);
    assert(node[1]==6);

    //1232=[7,10]
    path[0]=1;path[1]=2;path[2]=3;path[3]=2;
    node = ab(path,4);
    assert(node[0]==7);
    assert(node[1]==10);

    //2330=[14,6]
    path[0]=2;path[1]=3;path[2]=3;path[3]=0;
    node = ab(path,4);
    assert(node[0]==14);
    assert(node[1]==6);
}

void testToMorton(){
    uint8_t * path;
    int * node;

    int K=5000;
    for (int i=0;i<K;i++){
        for(int j=0;j<K;j++){
            path=morton(i,j,23);
            node=ab(path,23);
            assert(node[0]==i);
            assert(node[1]==j);
        }
    }

}


int main(){
    printf("begin tests\n");
    test1path1();
    test2path2();
    test3path3();
    test4path4some();
    testToMorton();
    printf("congrats all test passed\n");
    return 0;
}