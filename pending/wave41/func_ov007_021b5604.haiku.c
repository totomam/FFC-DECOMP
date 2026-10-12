#include "ffc/types.h"

extern void func_ov001_0218dde0(void *obj, int v);
extern void func_02056c4c(void);
extern void *func_0205681c(uint32_t size);
extern void func_02005988(void *dst, void *src);
extern void *func_02032d24(void *obj, uint32_t a, uint32_t b, void *c, uint32_t d, uint32_t e);
extern void func_02056bc0(void *object, void *node);
extern void *func_020059cc(void *object);
extern uint32_t data_ov007_021c69bc[2];
extern uint32_t data_ov007_021c69c4[2];

void func_ov007_021b5604(uint8_t *p)
{
    struct {
        uint32_t sz[2];
        uint32_t local[3];
    } s;
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
            s.sz[0] = 0x80;
            s.sz[1] = 0x60;
            flag = 1;
            obj = func_02032d24(obj, s.sz[0], s.sz[1], s.local, 4, zero);
        }
        func_ov001_0218dde0(p, 2);
        func_02056bc0(p, obj);
        if (flag) {
            func_020059cc(s.local);
        }
        *(uint32_t *)(p + 0xb0) = data_ov007_021c69bc[0];
        *(uint32_t *)(p + 0xb4) = data_ov007_021c69bc[1];
    } else {
        *(uint32_t *)(p + 0xb0) = data_ov007_021c69c4[0];
        *(uint32_t *)(p + 0xb4) = data_ov007_021c69c4[1];
    }
}
