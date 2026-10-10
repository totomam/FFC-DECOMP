#include "ffc/types.h"
extern uint32_t data_ov003_0217af14[];
typedef struct { uint32_t *vt; uint32_t f04,f08; uint32_t f0c; uint32_t f10,f14,f18,f1c,f20; } FuncObj;
void func_ov003_021695b4(FuncObj *p, uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4)
{ p->f0c &= 0xffffff00u; p->vt = data_ov003_0217af14; p->f14 = a1; p->f18 = a2; p->f1c = a3; p->f20 = a4; }
