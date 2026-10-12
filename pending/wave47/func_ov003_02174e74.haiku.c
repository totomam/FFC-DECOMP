#include "ffc/types.h"

typedef struct {
    uint32_t x;
    uint32_t y;
} Pair;

extern Pair data_ov003_0217ba40;
extern Pair data_ov003_0217ba48;
extern Pair data_ov003_0217ba50;
extern Pair data_ov003_0217ba58;
extern Pair data_ov003_0217ba60;
extern Pair data_ov003_0217ba68;
extern Pair data_ov003_0217ba70;
extern Pair data_ov003_0217ba78;

typedef struct {
    uint8_t pad[0x9c];
    Pair v;
} Obj;

void func_ov003_02174e74(Obj *p, int r1)
{
    switch (r1) {
    case 0: p->v = data_ov003_0217ba40; return;
    case 1: p->v = data_ov003_0217ba48; return;
    case 2: p->v = data_ov003_0217ba50; return;
    case 3: p->v = data_ov003_0217ba58; return;
    case 4: p->v = data_ov003_0217ba60; return;
    case 5: p->v = data_ov003_0217ba68; return;
    case 6: p->v = data_ov003_0217ba70; return;
    case 7: p->v = data_ov003_0217ba78; return;
    default: return;
    }
}
