#include "ffc/types.h"

typedef struct { uint32_t x; uint32_t y; } Pair8;

extern void *data_020b8e44;
extern Pair8 data_ov007_021c4eb8;
extern void func_02075b24(void *a, uint32_t b, void *c);
extern void func_ov007_021ae63c(uint32_t x);
extern void *func_02075a6c(void *a);
extern void *func_ov001_0218dde0(void *a, uint32_t b);
extern void func_02056bc0(void *object, void *node);
extern void *func_0205681c(uint32_t size);
extern void *func_ov001_0218ed2c(void *a, void *b, uint32_t c, void *d, uint32_t e, uint32_t f);
extern void func_ov007_021ab440(void *a);
extern uint32_t func_020159c8(void *a, uint32_t b);
extern void func_02005988(void *a, uint32_t b);
extern void *func_02032d24(void *a, Pair8 p, void *d, uint32_t e, uint32_t f);
extern void *func_020059cc(void *object);
extern void *func_02056aec(void *object);

void func_ov007_021ab248(uint8_t *a)
{
    void *node;
    uint32_t zero = 0;
    uint32_t obj[3];
    Pair8 pair;
    uint32_t tmp;
    int flag;

    if (*(uint32_t *)(a + 0xd4) == 1) {
        *(uint32_t *)(a + 0xd4) = zero;
        func_02075b24(*(void **)((uint8_t *)(*(void **)data_020b8e44) + 0x88), (void *)0x0218e711, a);
        func_ov007_021ae63c(3);
        node = func_02075a6c(*(void **)((uint8_t *)(*(void **)data_020b8e44) + 0x88));
        func_02056bc0(func_ov001_0218dde0(a, 0), node);
        node = func_0205681c(0xb8);
        if (node != 0) {
            node = func_ov001_0218ed2c(node, *(void **)data_020b8e44, *(uint32_t *)(a + 0xbc), a + 0xd4, 1, zero);
        }
        func_02056bc0(func_ov001_0218dde0(a, 0), node);
        *(Pair8 *)(a + 0xb0) = data_ov007_021c4eb8;
    } else if (*(uint32_t *)(a + 0xd4) == 2) {
        func_ov007_021ab440(a);
        zero = 0;
        flag = 0;
        pair.y = 0x60;
        node = func_0205681c(0xb0);
        if (node != 0) {
            tmp = func_020159c8(data_020b8e44, pair.y);
            func_02005988(obj, tmp);
            pair.x = 0x80;
            node = func_02032d24(node, pair, obj, 4, zero);
            flag = 1;
        }
        func_02056bc0(a + 0x14, node);
        if (flag) {
            func_020059cc(obj);
        }
        node = func_02056aec(a);
        func_02056bc0(a + 0x14, node);
    } else {
        func_ov007_021ab440(a);
        node = func_02056aec(a);
        func_02056bc0(a + 0x14, node);
    }
}
