#include "ffc/types.h"

extern char data_ov009_021b0294[];
extern void *data_0213df18;
extern void func_02056c4c(void *p);
extern void func_0203be8c(void);
extern void func_0203bea0(void);
extern void func_0203beb4(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern void func_0203bf04(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern void func_0203c380(void);
extern void func_0203c394(void);
extern void func_0203c29c(void);
extern void func_0206047c(void);
extern void func_0203c2ac(void);
extern void func_0204f550(void *p);
extern void func_02052d3c(void *a, void *b);
extern void func_02052c04(void *p);
extern void *func_02053290(void *object);
extern void *func_02035fd0(void *object);
extern void func_02056db0(void *p);

void *func_ov009_021a0604(void *param_1)
{
    uint8_t *self = (uint8_t *)param_1;
    uint8_t i;
    void **slots;

    *(void **)self = (void *)data_ov009_021b0294;
    slots = (void **)self;

    for (i = 0; i < 2; i++) {
        uint32_t off = (uint32_t)i << 2;
        void *s = *(void **)(self + off + 0x1C8);
        if (s) {
            if (s) {
                void (**vt)(void *) = *(void (***)(void *))s;
                vt[1](s);
            }
            *(void **)(self + off + 0x1C8) = 0;
        }
    }

    func_02056c4c(self + 0x48);
    func_0203be8c();
    func_0203bea0();
    func_0203beb4(5, 4, 0, 0);
    func_0203bf04(5, 4, 0, 0);
    func_0203c380();
    func_0203c394();
    func_0203c29c();
    func_0206047c();
    func_0203c2ac();
    func_0206047c();
    func_0204f550(data_0213df18);

    {
        uint8_t *q = self + 0x1FC;
        if (*(void **)(q + 4)) {
            if (q[0xc]) {
                func_02052d3c(*(void **)(q + 4), *(void **)(q + 8));
            }
            func_02052c04(*(void **)(q + 4));
        }
        func_02053290(q);
    }

    func_02035fd0(self + 0x148);
    func_02035fd0(self + 0xE8);
    func_02035fd0(self + 0x88);
    func_02056db0(self);
    return self;
}
