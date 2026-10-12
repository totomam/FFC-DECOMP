#include "ffc/types.h"

extern void *func_02052d90(void *mar, uint32_t index);
extern uint32_t func_02092864(const uint8_t *text);
extern void *func_02056830(uint32_t size);
extern uint32_t func_02086ad4(void *object, uint32_t first, ...);
extern void *func_0205681c(uint32_t size);
extern void func_02005988(void *dst, void *src);
extern uint32_t func_0204f7ec(const void *object);
typedef struct { uint32_t a, b; } P2;
extern void *func_02032d7c(void *obj, uint32_t a, P2 c, void *d, uint32_t e, uint32_t f);
extern void *func_020059cc(void *object);
extern void *func_0203be48(uint32_t a, void *b, uint32_t c, uint32_t d);
extern void func_0200ac24(void *obj, uint32_t b, P2 c, uint32_t e, uint32_t f, uint32_t g);
extern void func_02056bc0(void *object, void *node);
extern void func_02056858(void *p);
extern void *data_0213df18;

typedef struct { uint32_t lng:1; uint32_t x:31; } W;
typedef struct { uint8_t lng:1; uint8_t n:7; } B;

void func_ov004_02145e04(uint8_t *a, uint32_t idx, uint8_t *s, uint32_t p3, uint32_t e, uint32_t f)
{
    uint8_t tmpA[12];
    uint8_t tmpB[12];
    uint8_t *base;
    uint8_t *r7;
    uint32_t off;
    uint32_t len;
    uint8_t *buf;
    void *node;
    int flag;
    P2 c1, c2;

    base = func_02052d90(*(void **)(a + 0x98), *(void **)(a + 0x9c));
    r7 = base + *(uint32_t *)(base + *(uint32_t *)(base + 8) + idx * 4);
    off = *(uint32_t *)(r7 + 4);

    len = !((W *)s)->lng ? ((B *)s)->n : *(uint32_t *)(s + 4);

    buf = func_02056830(func_02092864(r7 + off) + len + 1);

    if (((W *)s)->lng) {
        func_02086ad4(buf, r7 + off, *(void **)(s + 8));
    } else {
        func_02086ad4(buf, r7 + off, s + 1);
    }

    if ((int8_t)buf[0] == 10) {
        flag = 0;
        node = func_0205681c(0xb0);
        if (node != 0) {
            func_02005988(tmpA, buf);
            c1.a=0x80;c1.b=0x60;
            node = func_02032d7c(node, func_0204f7ec(data_0213df18), c1, tmpA, 4, 0);
            flag = 1;
        }
        if (flag) {
            func_020059cc(tmpA);
        }
        a += 0x14;
        func_02056bc0(a, node);
    } else {
        func_02005988(tmpB, buf);
        node = func_0203be48(func_0204f7ec(data_0213df18), tmpB,
                             *(uint32_t *)(*(uint8_t **)(a + 0x88) + 0xe0), 0);
        func_020059cc(tmpB);
        c2.a=0xfe;c2.b=0x8e;
        func_0200ac24(node, p3, c2, 3, e, f);
        a += 0x14;
        func_02056bc0(a, node);
    }
    func_02056858(buf);
}
