#include "ffc/types.h"

extern void func_020559d4(void *p);
extern void *func_02056aec(void *p);
extern void *func_02056dd4(void *p);
extern void *func_02060634(void *obj, int a, int b, int c, int d, int e);
extern void *func_0206cd68(void *p);
extern void *func_0203b688(void);
extern void func_02056bc0(void *object, void *node);
extern void *func_0203b6fc(void);
extern void *func_02056b34(void *p);
extern void *func_ov007_021a2664(void *p);

void func_ov007_021a4440(void *a) {
    uint8_t *self = (uint8_t *)a;
    uint8_t *p;
    void *s8;
    void *r7;
    void *r6;
    void *s0c;
    void *r;

    func_020559d4(self + 0x80);
    if (self[0xec]) {
        *(uint32_t *)(*(uint8_t **)(self + 0xc4)) = 0;
        s8 = func_02056aec(self);
        r7 = func_02060634(*(void **)((uint8_t *)func_02056dd4(self) + 0x20), 8, 0, 10, 0, 0);
        r6 = func_0206cd68(*(void **)(self + 0xc0));
        s0c = func_0203b688();
        func_02056bc0(s0c, r6);
        r6 = func_0203b6fc();
        func_02056bc0(r6, s0c);
        func_02056bc0(r6, r7);
        r7 = func_02056b34(*(void **)(self + 0xc8));
        r = func_ov007_021a2664(*(void **)(self + 0x108));
        p = self + 0x14;
        func_02056bc0(p, r);
        func_02056bc0(p, r7);
        func_02056bc0(p, r6);
        func_02056bc0(p, s8);
    }
}
