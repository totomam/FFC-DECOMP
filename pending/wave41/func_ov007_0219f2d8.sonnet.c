#include "ffc/types.h"

typedef struct { uint32_t a, b; } V2;
typedef struct {
    uint8_t pad0[0xc];
    uint32_t f0c;
    uint8_t pad1[0x14 - 0x10];
    uint8_t list[0x80 - 0x14];
    V2 v;
    uint32_t *ptr;
    uint32_t mode;
    uint8_t flag;
} Obj;

extern void func_0201bcf4(uint32_t a, uint32_t b, uint8_t c);
extern void *func_02056aec(void);
extern void *func_0203c0a8(uint32_t a);
extern void *func_0203c094(uint32_t a);
extern void *func_0203b6fc(void);
extern void func_02056bc0(void *object, void *node);
extern uint32_t data_020b93b8;
extern V2 data_ov007_021c3288;

void func_ov007_0219f2d8(Obj *p)
{
    if (p->mode == 1) {
        func_0201bcf4(data_020b93b8, 0x4f, p->flag);
        p->v = data_ov007_021c3288;
        return;
    }
    *p->ptr = 0;
    if (p->flag != 0) {
        void *r7 = func_02056aec();
        void *sp0 = func_0203c0a8(0x1e);
        void *r4 = func_0203c094(0x1e);
        void *r6 = func_0203b6fc();
        func_02056bc0(r6, r4);
        func_02056bc0(r6, sp0);
        func_02056bc0(p->list, r6);
        func_02056bc0(p->list, r7);
    } else {
        p->f0c = (p->f0c & ~0xffu) | 2;
    }
}
