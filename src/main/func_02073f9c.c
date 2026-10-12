#include "ffc/types.h"

typedef struct {
    uint32_t pad[9];
    uint32_t f24;
    uint32_t f28;
    uint32_t f2c;
    uint32_t f30;
    uint32_t f34;
    uint32_t f38;
    uint32_t f3c;
    uint32_t f40;
} FFCObj;

extern int func_ov007_021bf7d8(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f);
extern int func_ov007_021bf628(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
extern int func_ov007_021bf6b8(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f, uint32_t g);
extern int func_ov007_021bf88c(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f);
extern void func_0207401c(void);

int func_02073f9c(FFCObj *p)
{
    int ret = 0;
    switch (p->f24) {
    case 0:
        ret = func_ov007_021bf7d8(p->f28, p->f34, p->f38, p->f3c, (uint32_t)func_0207401c, (uint32_t)p);
        break;
    case 1:
        ret = func_ov007_021bf628(p->f28, p->f34, p->f38, (uint32_t)func_0207401c, (uint32_t)p);
        break;
    case 2:
        ret = func_ov007_021bf6b8(p->f28, p->f2c, p->f30, p->f34, p->f38, (uint32_t)func_0207401c, (uint32_t)p);
        break;
    case 3:
        ret = func_ov007_021bf88c(p->f28, p->f34, p->f38, p->f40, (uint32_t)func_0207401c, (uint32_t)p);
        break;
    }
    return ret;
}
