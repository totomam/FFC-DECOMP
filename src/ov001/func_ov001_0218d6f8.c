#include "ffc/types.h"

typedef struct { uint32_t a, b, c, d; } S16;
typedef struct { uint32_t a, b; } P2;

extern uint32_t data_020b93b8;
extern uint32_t data_ov001_0219492c[2];
extern void func_0201ffb8(uint32_t v, void *out);
extern void *func_0205681c(uint32_t size);
extern void *func_ov007_021b90f8(void *obj, int mode, S16 s, void *p);
extern void *func_ov001_0218dde0(void *self, int arg);
extern void func_02056bc0(void *object, void *node);

void func_ov001_0218d6f8(uint8_t *self)
{
    S16 buf;
    void *obj;
    int mode;
    uint32_t val;
    void *ret;

    func_0201ffb8(data_020b93b8, &buf);
    val = *(uint32_t *)(self + 0x66c);
    if (val == 0) {
        mode = 0;
    } else {
        mode = 1;
        if (val != 1) {
            mode = 2;
        }
    }
    obj = func_0205681c(0x98);
    if (obj != 0) {
        obj = func_ov007_021b90f8(obj, mode, buf, self + 0xe78);
    }
    ret = func_ov001_0218dde0(self, 1);
    func_02056bc0(ret, obj);
    {
        P2 *src = (P2 *)data_ov001_0219492c;
        P2 *dst = (P2 *)(self + 0xb0);
        *dst = *src;
    }
}
