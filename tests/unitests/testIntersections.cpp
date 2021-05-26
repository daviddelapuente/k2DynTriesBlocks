#include "../../treeBlock/treeBlockApi.h"
#include "assert.h"


void testIntersectIntervals(){
    int a1,a2,b1,b2;

    a1=3,a2=9,b1=10,b2=10;
    assert(!intersectIntervals(a1,a2,b1,b2));

    a1=0,a2=10,b1=10,b2=10;
    assert(intersectIntervals(a1,a2,b1,b2));

    a1=3,a2=3,b1=3,b2=3;
    assert(intersectIntervals(a1,a2,b1,b2));

    a1=3,a2=3,b1=3,b2=4;
    assert(intersectIntervals(a1,a2,b1,b2));

    a1=2,a2=3,b1=3,b2=3;
    assert(intersectIntervals(a1,a2,b1,b2));

    a1=2,a2=3,b1=3,b2=4;
    assert(intersectIntervals(a1,a2,b1,b2));

    a1=2,a2=3,b1=4,b2=4;
    assert(!intersectIntervals(a1,a2,b1,b2));
}

void testintersectRectangles(){

    //A
    int ar1,ar2,ac1,ac2;
    //B
    int br1,br2,bc1,bc2;

    ar1=0,ar2=10,ac1=0,ac2=15,br1=9,br2=16,bc1=9,bc2=10;
    assert(intersectRectangles(ar1,ar2,ac1,ac2,br1,br2,bc1,bc2));

    ar1=0,ar2=10,ac1=0,ac2=15,br1=9,br2=16,bc1=15,bc2=117;
    assert(intersectRectangles(ar1,ar2,ac1,ac2,br1,br2,bc1,bc2));

    ar1=0,ar2=10,ac1=0,ac2=15,br1=9,br2=16,bc1=16,bc2=20;
    assert(!intersectRectangles(ar1,ar2,ac1,ac2,br1,br2,bc1,bc2));
}


int main(){
    testIntersectIntervals();
    testintersectRectangles();
    return 0;
}