#include "ffc/types.h"

extern uint8_t data_ov004_02159bec[];
extern uint8_t data_ov004_02159c10[];
extern uint8_t data_ov004_02159c24[];
extern void *data_0213df18;
extern void *data_0213e098;

extern void func_02054558(void *p);
extern void func_02056c4c(void *p);
extern void *func_0206c030(void *object);
extern void func_02056844(void *p);
extern void func_0203be8c(void);
extern void func_0203bea0(void);
extern void func_0203c33c(void);
extern void func_0203beb4(int a, int b, int c, int d);
extern void func_0203bf04(int a, int b, int c, int d);
extern void func_0204f550(void *p);
extern void func_0203c380(void);
extern void func_0203c394(void);
extern void func_02055050(void *a, void *b);
extern void func_020544e4(void *p);
extern void func_02054a88(void *p);
extern void func_02056db0(void *p);

void *func_ov004_02152f18(void *p)
{
    uint8_t *self = (uint8_t *)p;
    void *obj;
    void *tmp;

    *(void **)(self + 0) = (void *)data_ov004_02159bec;
    *(void **)(self + 0x80) = (void *)data_ov004_02159c10;
    *(void **)(self + 0x8c) = (void *)data_ov004_02159c24;
    func_02054558(self + 0x8c);

    if (*(void **)(self + 0x210) != 0) {
        func_02056c4c(*(void **)(self + 0x210));
    }
    func_02056c4c(self + 0x48);

    obj = *(void **)(self + 0xf0);
    if (obj != 0 && obj != 0) {
        func_0206c030(obj);
        func_02056844(obj);
    }

    func_0203be8c();
    func_0203bea0();
    func_0203c33c();
    func_0203beb4(5, 4, 0, 0);
    func_0203bf04(5, 4, 0, 0);
    func_0204f550(data_0213df18);
    func_0203c380();
    func_0203c394();

    func_02055050(data_0213e098, *(void **)(self + 0x2a4));

    tmp = *(void **)(self + 0x2a0);
    if (tmp != 0 && tmp != 0) {
        ((void (**)(void *))(*(void **)tmp))[1](tmp);
    }

    func_020544e4(self + 0x8c);
    func_02054a88(self + 0x80);
    func_02056db0(self);
    return p;
}
