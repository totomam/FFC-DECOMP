#include "ffc/types.h"
typedef struct { int32_t x, y; } P;
extern uint32_t data_ov004_02159da0;
extern int32_t data_ov004_021583ec[2];
extern int32_t data_ov004_021583f4[2];
extern int32_t data_ov004_021583fc[2];
extern int32_t data_ov004_02158404[2];
extern int32_t data_ov004_0215840c[2];
extern int32_t data_ov004_02158414[2];
extern int32_t data_ov004_0215841c[2];
extern int32_t data_ov004_02158424[2];
extern int32_t data_ov004_0215842c[2];
extern int32_t data_ov004_02158434[2];
extern int32_t data_ov004_0215843c[2];
extern int32_t data_ov004_02158444[2];
#define S(a,u,v) a[0]=u; a[1]=v;
void func_ov004_0214f290(P *out, P p, int idx) {
    if (!(data_ov004_02159da0 & 1)) {
        S(data_ov004_021583ec,1,0)
        S(data_ov004_021583f4,0,1)
        S(data_ov004_021583fc,-1,1)
        S(data_ov004_02158404,-1,0)
        S(data_ov004_0215840c,-1,-1)
        S(data_ov004_02158414,0,-1)
        S(data_ov004_0215841c,1,0)
        S(data_ov004_02158424,1,1)
        S(data_ov004_0215842c,0,1)
        S(data_ov004_02158434,-1,0)
        S(data_ov004_0215843c,0,-1)
        data_ov004_02158444[1]=-1; data_ov004_02158444[0]=1;
        data_ov004_02159da0 |= 1;
    }
    {
        P *row = (P *)((uint8_t *)data_ov004_021583ec + (p.y & 1) * 0x30);
        P *t = row + idx;
        out->y = p.y + t->y;
        out->x = p.x + t->x;
    }
}
