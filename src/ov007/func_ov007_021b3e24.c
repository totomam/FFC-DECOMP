#include "ffc/types.h"

typedef struct {
    uint32_t w;
    uint32_t h;
} Size;

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void *func_0205681c(uint32_t size);
extern void *func_020159c8(void *obj, uint32_t id);
extern void func_02005988(void *buf, void *val);
extern void *func_02032d24(void *obj, Size sz, void *buf, uint32_t a, uint32_t b);
extern void *func_ov001_0218dde0(void *obj, uint32_t v);
extern void func_02056bc0(void *object, void *node);
extern void *func_020059cc(void *object);
extern void *data_020b8e44;
extern Pair data_ov007_021c63d0;

void func_ov007_021b3e24(uint8_t *p)
{
    uint32_t buf[3];
    void *obj;
    int used = 0;
    void *node = func_0205681c(0xb0);

    if (node != 0) {
        void *v = func_020159c8(data_020b8e44, 0xb0 + 0xa5);
        func_02005988(buf, v);
        Size s;
        s.w = 0x80;
        s.h = 0x60;
        used = 1;
        node = func_02032d24(node, s, buf, 4, 0);
    }

    obj = func_ov001_0218dde0(p, 2);
    func_02056bc0(obj, node);
    if (used) {
        func_020059cc(buf);
    }

    *(Pair *)(p + 0xb0) = data_ov007_021c63d0;
}
