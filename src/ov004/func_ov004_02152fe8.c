#include "ffc/types.h"

extern uint8_t data_ov004_02159bec[];
extern uint8_t data_ov004_02159c10[];
extern uint8_t data_ov004_02159c24[];
extern uint32_t data_0213df18;
extern uint32_t data_0213e098;

extern void func_02054558(void *obj);
extern void func_02056c4c(void *obj);
extern void *func_0206c030(void *object);
extern void func_02056844(void *obj);
extern void func_0203be8c(void);
extern void func_0203bea0(void);
extern void func_0203c33c(void);
extern void func_0203beb4(int a, int b, int c, int d);
extern void func_0203bf04(int a, int b, int c, int d);
extern void func_0204f550(uint32_t v);
extern void func_0203c380(void);
extern void func_0203c394(void);
extern void func_02055050(uint32_t a, uint32_t b);
extern void func_020544e4(void *obj);
extern void func_02054a88(void *obj);
extern void func_02056db0(void *obj);

void *func_ov004_02152fe8(void *p0)
{
    uint8_t *p = (uint8_t *)p0;
    void *r5;

    *(void **)(p + 0x00) = data_ov004_02159bec;
    *(void **)(p + 0x80) = data_ov004_02159c10;
    *(void **)(p + 0x8c) = data_ov004_02159c24;
    func_02054558(p + 0x8c);
    if (*(void **)(p + 0x210) != 0) {
        func_02056c4c(*(void **)(p + 0x210));
    }
    func_02056c4c(p + 0x48);
    r5 = *(void **)(p + 0xf0);
    if (r5 != 0 && r5 != 0) {
        func_0206c030(r5);
        func_02056844(r5);
    }
    func_0203be8c();
    func_0203bea0();
    func_0203c33c();
    func_0203beb4(5, 4, 0, 0);
    func_0203bf04(5, 4, 0, 0);
    func_0204f550(data_0213df18);
    func_0203c380();
    func_0203c394();
    func_02055050(data_0213e098, *(uint32_t *)(p + 0x2a4));
    {
        void *obj = *(void **)(p + 0x2a0);
        if (obj != 0 && obj != 0) {
            void **vt = *(void ***)obj;
            ((void (*)(void *))vt[1])(obj);
        }
    }
    func_020544e4(p + 0x8c);
    func_02054a88(p + 0x80);
    func_02056db0(p);
    func_02056844(p);
    return p0;
}
