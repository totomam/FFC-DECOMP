#include "ffc/types.h"

extern void *data_ov009_021b0294;
extern void *data_0213df18;
extern void func_02056c4c(void *p);
extern void func_0203be8c(void);
extern void func_0203bea0(void);
extern void func_0203beb4(int a, int b, int c, int d);
extern void func_0203bf04(int a, int b, int c, int d);
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
extern void func_02056844(void *p);

void *func_ov009_021a06cc(void *p) {
    void **self = (void **)p;
    uint8_t i;
    uint8_t *r4;

    *self = &data_ov009_021b0294;
    for (i = 0; i < 2; i++) {
        void *obj = self[0x72 + i];
        if (obj) {
            if (obj) {
                void **vt = *(void ***)obj;
                ((void (*)(void *))vt[1])(obj);
            }
            ((uint32_t *)self)[0x72 + i] = 0;
        }
    }
    func_02056c4c((uint8_t *)self + 0x48);
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

    r4 = (uint8_t *)self + 0x1fc;
    if (*(void **)(r4 + 4) != 0) {
        if (r4[0xc] != 0) {
            func_02052d3c(*(void **)(r4 + 4), *(void **)(r4 + 8));
        }
        func_02052c04(*(void **)(r4 + 4));
    }
    func_02053290(r4);
    func_02035fd0((uint8_t *)self + 0x148);
    func_02035fd0((uint8_t *)self + 0xe8);
    func_02035fd0((uint8_t *)self + 0x88);
    func_02056db0(self);
    func_02056844(self);
    return self;
}
