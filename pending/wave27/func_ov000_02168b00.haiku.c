#include "ffc/types.h"

extern int func_ov000_0216888c(void *p, uint32_t b, void *c, int d, int e);
extern void func_ov000_02168848(void *p);

typedef struct Obj {
    void **tbl;
    void *f4;
    void *f8;
    uint32_t (*fnc)(uint32_t, void *);
    void *f10;
} Obj;

int func_ov000_02168b00(Obj *p, uint32_t b)
{
    uint32_t idx;
    int r;

    if (p == 0) {
        return 0;
    }
    idx = p->fnc(b, p->f4);
    r = func_ov000_0216888c(p->tbl[idx], b, p->f10, 0, 0);
    if (r == -1) {
        return 0;
    }
    func_ov000_02168848(p->tbl[idx]);
    return 1;
}
