#include "ffc/types.h"

extern int32_t func_ov000_02168768(void *);
extern void *func_ov000_0216876c(void *, int32_t);
extern void func_ov000_02168848(void *, int32_t);
extern void func_ov000_02168b00(void *, void *);

typedef struct Sub {
    uint8_t pad[0xc];
    void *fc;
    void *f10;
} Sub;

typedef struct Obj {
    void *f0;
    void *f4;
    Sub *f8;
    uint32_t fc;
    void *f10;
    uint32_t f14;
    uint8_t pad[0x24 - 0x18];
    uint32_t f24;
} Obj;

void func_ov001_02181f60(Obj *p)
{
    if (p->f14 == 0 && p->f24 == 0) {
        if (p->fc == 7) {
            int32_t n = func_ov000_02168768(p->f8->f10);
            int32_t i;
            for (i = 0; i < n; i++) {
                if (p == *(Obj **)func_ov000_0216876c(p->f8->f10, i)) {
                    func_ov000_02168848(p->f8->f10, i);
                    return;
                }
            }
        } else {
            func_ov000_02168b00(p->f8->fc, &p);
        }
    }
}
