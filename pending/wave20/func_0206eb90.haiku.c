#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

typedef struct {
    uint8_t pad[0x80];
    Pair pr;
    uint8_t f88;
} FFCObj;

extern uint32_t data_0213df18;
extern void func_0206ebc8(void);
extern int func_0204f854(uint32_t);
extern void func_0204e1dc(int, void *, void *);
extern Pair data_020b2048;

void func_0206eb90(FFCObj *p)
{
    Pair v;
    p->f88 = 0;
    int r = func_0204f854(data_0213df18);
    func_0204e1dc(r, (void *)func_0206ebc8, p);
    v = data_020b2048;
    p->pr = v;
}
