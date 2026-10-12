#include "ffc/types.h"

extern uint8_t data_020b8f68[];
extern uint8_t data_020b8f70[];
extern uint8_t data_020b8f4c[];
extern uint8_t data_020b8f7c[];

extern uint32_t func_0207e920(void *a, uint32_t b);
extern void func_0208763c(void);
extern void func_0207e890(void *object);
typedef struct { uint32_t a, b; } P2;
extern uint32_t func_0207e990(void *object, P2 s);
extern uint32_t func_0207ea98(void *object, uint32_t first, uint32_t second);
extern uint32_t func_0207eab0(void *object, void *a, uint32_t b);
extern uint32_t func_0207ea0c(void *object);
extern void func_02084ca4(void *dst, void *src, uint32_t n);
extern void func_02087678(void *p);

typedef struct {
    uint16_t ret;
    uint16_t pad;
    void *vt;
    uint8_t flag;
} Local;

uint16_t func_020192f4(int unused, uint32_t val)
{
    Local l;
    uint8_t obj[0x48];

    l.ret = 0;
    if (data_020b8f68[0] == 0) {
        func_0207e920(data_020b8f70, *(uint32_t *)(data_020b8f68 + 4));
        *(int32_t *)(data_020b8f68 + 0x10) = -1;
        data_020b8f68[0] = 1;
    }

    l.vt = data_020b8f4c;
    l.flag = 1;
    if (l.flag) {
        func_0208763c();
    }

    val <<= 1;
    if ((val >> 8) != *(uint32_t *)(data_020b8f68 + 0x10)) {
        *(uint32_t *)(data_020b8f68 + 0x10) = val >> 8;
        func_0207e890(obj);
        func_0207e990(obj, *(P2 *)data_020b8f70);
        func_0207ea98(obj, *(uint32_t *)(data_020b8f68 + 0x10) << 8, 0);
        func_0207eab0(obj, data_020b8f7c, 1 << 8);
        func_0207ea0c(obj);
    }

    func_02084ca4(data_020b8f7c + (uint8_t)val, &l, 2);

    if (l.flag) {
        func_02087678(l.vt);
    }
    return l.ret;
}
