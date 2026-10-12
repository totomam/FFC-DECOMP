#include "ffc/types.h"

typedef struct {
    uint32_t x;
    uint32_t y;
} Pair;

typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t c;
} Buf3;

extern void *func_ov001_0218dde0(void *obj, int idx);
extern void func_02056c4c(void);
extern void *func_0205681c(uint32_t size);
extern void func_02005988(Buf3 *dst, void *src);
extern void *func_02032d24(void *obj, Pair size, Buf3 *c, uint32_t d, uint32_t e);
extern void func_02056bc0(void *object, void *node);
extern void *func_020059cc(void *object);
extern Pair data_ov007_021c6074;

void func_ov007_021b27d4(void *self, void *param)
{
    uint8_t *obj = (uint8_t *)self;
    Pair pair;
    Buf3 buf;
    void *node;
    int flag;
    uint32_t off;

    obj[0xb5] = 1;
    func_ov001_0218dde0(self, 0);
    func_02056c4c();
    func_ov001_0218dde0(self, 2);
    func_02056c4c();
    func_ov001_0218dde0(self, 3);
    func_02056c4c();

    flag = 0;
    node = func_0205681c(0xb0);
    if (node != 0) {
        func_02005988(&buf, param);
        pair.x = 0x80;
        pair.y = 0x60;
        flag = 1;
        node = func_02032d24(node, pair, &buf, 4, 0);
    }
    func_02056bc0(func_ov001_0218dde0(self, 2), node);
    if (flag) {
        func_020059cc(&buf);
    }
    *(Pair *)(obj + 0x3114) = data_ov007_021c6074;
}
