#include "ffc/types.h"

extern void *func_0203b688(void);
extern int func_0201bd84(void *obj, int a);
extern void func_0201bcf4(void *obj, int a, int b);
extern void func_0204ec1c(void *o);
extern void func_0203bea0(void);
extern void func_0204eda4(void *o, int a, int b);
extern void func_0203bf28(int a, int b, int c, int d, int e, int f);
extern void func_0204ebb4(void *o);
extern void func_0204f550(void *o);
extern int func_0203c2e4(void);
extern void func_0205947c(int a, int b);
extern void func_0203c33c(void);
extern void func_0203c264(void);
extern void func_0203c354(void);
extern void func_0203c270(void);
extern void *func_ov003_02153470(void *p);
extern void func_ov003_02152f10(void *a, uint32_t b);
extern void func_ov003_021525dc(void *a, uint32_t b);
extern void *func_ov003_0214d454(void *p);
extern void func_02056bc0(void *object, void *node);
extern void *data_020b93b8;
extern void *data_0213df18;

void *func_ov003_02146318(uint8_t *a)
{
    void *r6;
    void *p;
    int r7;
    void **r4;

    r6 = func_0203b688();
    r4 = (void **)&data_020b93b8;
    r7 = 0x50;
    if (func_0201bd84(*r4, 0x50) != 0) {
        func_0201bcf4(*r4, r7, 0);
        r7 = 0;
        r4 = (void **)&data_0213df18;
        func_0204ec1c(*(void **)((uint8_t *)*r4 + 0x20));
        func_0204ec1c(*(void **)((uint8_t *)*r4 + 0x24));
        func_0203bea0();
        func_0204eda4(*(void **)((uint8_t *)*r4 + 0x20), 1, 0);
        func_0203bf28(5, 2, 1, 0, r7, r7);
        func_0204eda4(*(void **)((uint8_t *)*r4 + 0x20), 5, 1);
        func_0204ebb4(*(void **)((uint8_t *)*r4 + 0x20));
        func_0204ebb4(*(void **)((uint8_t *)*r4 + 0x24));
        func_0204f550(*r4);
        int r0v = func_0203c2e4();
        func_0205947c(r0v, 1);
        func_0203c33c();
        func_0203c264();
        func_0203c354();
        func_0203c270();
        p = func_ov003_02153470(*(void **)(a + 0x9c));
        func_ov003_02152f10(*(void **)(a + 0x180), *(uint32_t *)p);
        p = func_ov003_02153470(*(void **)(a + 0x9c));
        func_ov003_021525dc(*(void **)(a + 0x184), *(uint32_t *)p);
        p = func_ov003_0214d454(a);
        func_02056bc0(r6, p);
    }
    return r6;
}
