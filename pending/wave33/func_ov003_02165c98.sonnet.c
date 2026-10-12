#include "ffc/types.h"

typedef struct { uint32_t w[10]; } Blob;
typedef struct { uint32_t a, b, c; } Small;

typedef struct {
    uint8_t pad[0x14];
    uint32_t f14;
    uint32_t f18;
} Obj;

extern uint32_t func_ov003_021481c0(uint32_t v);
extern void func_0201d14c(void *d, uint32_t v, Blob *buf);
extern void func_0201d0ac(void *d, uint32_t v, Blob *buf);
extern uint32_t func_020424e0(uint32_t v);
extern void *func_ov003_021464f4(uint32_t a, uint32_t b);
extern void func_ov003_02158528(void *p, Blob s);
extern void *data_020b93b8;

void func_ov003_02165c98(Obj *p)
{
    Blob buf;
    void *r;

    p->f18 = func_ov003_021481c0(p->f18);
    if (p->f18 == 0) {
        return;
    }
    func_0201d14c(data_020b93b8, p->f18, &buf);
    ((uint8_t *)&buf)[2] = 0;
    func_0201d0ac(data_020b93b8, p->f18, &buf);
    r = func_ov003_021464f4(func_020424e0(p->f14), p->f18);
    if (r == 0) {
        return;
    }
    func_ov003_02158528(r, buf);
}
