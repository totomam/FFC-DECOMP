#include "ffc/types.h"

extern void *func_0203b688(void);
extern int func_0201bd84(void *, uint32_t);
extern void func_0201bcf4(void *, uint32_t, int);
extern void *func_ov003_02153470(void *);
extern void func_ov003_02152f7c(void *, void *);
extern void func_ov003_02152674(void *, void *);
extern void *func_ov003_021462d8(void *, uint32_t, uint32_t);
extern void *func_0203b708(int);
extern void *func_ov003_0214d454(void *);
extern void func_02056bc0(void *object, void *node);
extern void *data_020b93b8;
extern uint32_t data_ov003_0217983c[];

void *func_ov003_02146248(void *a)
{
    uint8_t *p = (uint8_t *)a;
    void *r4;
    void *t;
    void *r6;
    void *r7;
    void *node;
    uint32_t *q;
    uint32_t r1v;
    uint32_t r2v;

    r4 = func_0203b688();
    if (func_0201bd84(data_020b93b8, 0x50) == 0) {
        func_0201bcf4(data_020b93b8, 0x50, 1);
        t = func_ov003_02153470(*(void **)(p + 0x9c));
        func_ov003_02152f7c(*(void **)(p + 0x180), *(void **)t);
        t = func_ov003_02153470(*(void **)(p + 0x9c));
        func_ov003_02152674(*(void **)(p + 0x184), *(void **)t);
        q = data_ov003_0217983c;
        r1v = *q++;
        r2v = *q;
        r6 = func_ov003_021462d8(p, r1v, r2v);
        r7 = func_0203b708(2);
        node = func_ov003_0214d454(p);
        func_02056bc0(r4, node);
        func_02056bc0(r4, r7);
        func_02056bc0(r4, r6);
    }
    return r4;
}
