#include "ffc/types.h"

extern void *func_ov001_0218dde0(void *obj, int v);
extern void func_02056c4c(void);
extern void *func_0205681c(uint32_t size);
extern void func_02005988(void *dst, void *src);
typedef struct { uint32_t w, h; } SZ;
extern void *func_02032d24(void *obj, SZ sz, void *c, uint32_t d, uint32_t e);
extern void func_02056bc0(void *object, void *node);
extern void *func_020059cc(void *object);
extern uint32_t data_ov007_021c69bc[2];
extern uint32_t data_ov007_021c69c4[2];

void func_ov007_021b5604(uint8_t *p)
{
    struct {

        uint32_t local[3];
    } s;
    SZ t;
    void *obj;
    int flag;
    uint32_t zero;

    func_ov001_0218dde0(p, 3);
    func_02056c4c();
    if (p[0x564] == 0) {
        zero = 0;
        flag = 0;
        obj = func_0205681c(0xb0);
        if (obj != 0) {
            func_02005988(s.local, p + 0x566);
            t.w = 0x80;
            t.h = 0x60;
            flag = 1;
            obj = func_02032d24(obj, t, s.local, 4, zero);
        }
        void *q = func_ov001_0218dde0(p, 2);
        func_02056bc0(q, obj);
        if (flag) {
            func_020059cc(s.local);
        }
        *(SZ *)(p + 0xb0) = *(SZ *)data_ov007_021c69bc;
    } else {
        *(SZ *)(p + 0xb0) = *(SZ *)data_ov007_021c69c4;
    }
}
