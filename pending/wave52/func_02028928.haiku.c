#include "ffc/types.h"

extern void func_0208763c(void);
extern void func_02027e9c(void *out, void *a, void *b);
extern void func_02056858(void);
extern void func_02022e40(void *a, uint32_t b);
extern void func_02022e4c(void *a, uint32_t b);
extern void func_02058048(uint32_t a, uint32_t b, uint32_t c);
extern void func_0202a6f4(void *out, void *a, void *b);
extern void func_02087678(void *p);

extern uint32_t data_021394c4[];
extern uint32_t data_021394a4[];
extern uint32_t data_02139450[];

typedef struct {
    uint8_t pad0[0x20];
    uint32_t f20;
    uint32_t f24;
    uint32_t f28;
    uint8_t pad2c[4];
    void *f30;
    void *f34;
} Obj;

typedef struct {
    uint32_t a;
    uint32_t out1;
    uint32_t out2;
    uint32_t tmp;
    uint8_t flag;
} Frame;

void func_02028928(void *param)
{
    Frame f;
    uint8_t *base;
    int32_t n;

    f.tmp = (uint32_t)data_021394c4;
    f.flag = 1;
    if (f.flag) {
        func_0208763c();
    }
    func_02027e9c(&f.out2, data_021394a4, param);
    base = (uint8_t *)f.out2 + 0xc;
    n = *(int32_t *)(base + 0x10) - 1;
    *(int32_t *)(base + 0x10) = n;
    if (n <= 0) {
        if (((Obj *)f.out2)->f24 != 0xffffffff) {
            if (((Obj *)f.out2)->f30 != 0) {
                func_02056858();
            }
            func_02022e40(((Obj *)f.out2)->f34, ((Obj *)f.out2)->f24);
            func_02022e4c(((Obj *)f.out2)->f34, ((Obj *)f.out2)->f28);
        }
        func_02058048(data_02139450[0], ((Obj *)f.out2)->f20, 0);
        func_0202a6f4(&f.out1, data_021394a4, (void *)f.out2);
    }
    if (f.flag) {
        func_02087678((void *)f.tmp);
    }
}
