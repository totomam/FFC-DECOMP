#include "ffc/types.h"

extern int func_0201c220(uint32_t a, int b, int c);
extern void *func_0203b6fc(void);
extern void *func_0203bf7c(int x);
extern void func_02056bc0(void *object, void *node);
extern void *func_0203bf90(int x);
extern void *func_02056aec(void *object);
extern void *func_0203b708(int x);
extern uint32_t data_020b93b8;

typedef struct Obj {
    uint32_t w0;
    uint8_t b4;
} Obj;

void func_ov012_021cd684(uint8_t *p) {
    void *r4;
    void *r6;
    void *tmp;
    void *q;

    ((Obj *)*(void **)(p + 0x108))->w0 = 0;
    func_0201c220(data_020b93b8, 6, *(int16_t *)(p + 0x10e));
    r4 = func_0203b6fc();
    tmp = func_0203bf7c(30);
    func_02056bc0(r4, tmp);
    if (((Obj *)*(void **)(p + 0x108))->b4 != 0) {
        tmp = func_0203bf90(30);
        func_02056bc0(r4, tmp);
    }
    r6 = func_02056aec(p);
    tmp = func_0203b708(30);
    q = p + 0x14;
    func_02056bc0(q, tmp);
    func_02056bc0(q, r4);
    func_02056bc0(q, r6);
}
