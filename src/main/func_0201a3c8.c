#include "ffc/types.h"

extern int func_02087460(void);
extern void func_021da974(void *p);
extern int func_021da9dc(void);
extern void func_021da9d0(uint32_t x);
extern void func_0201a3c0(void);

typedef struct {
    uint8_t flag0;
    uint8_t flag1;
    uint8_t pad[2];
    void (*vt)(void);
    void *self;
} S;

void func_0201a3c8(S *p)
{
    if (func_02087460() != 0) {
        uint8_t r = 0;
        p->vt = func_0201a3c0;
        p->flag1 = 0;
        p->self = p;
        func_021da974(&p->vt);
        if (func_021da9dc() != 0) {
            r = 1;
        }
        p->flag0 = r;
        func_021da9d0(0);
    }
}
