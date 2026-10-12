#include "ffc/types.h"

extern void func_02056c4c(void *x);
extern void *func_0205681c(uint32_t size);
extern void *func_020159c8(void *h, uint32_t n);
extern void func_02005988(void *a, void *b);
typedef struct { uint32_t a, b; } S;
extern void *func_02032d24(void *obj, S v, void *c, uint32_t d, uint32_t e);
extern void *func_020059cc(void *object);
extern void *func_0206cd68(void *x);
extern void *func_0203b6fc(void);
extern void func_02056bc0(void *object, void *node);
extern void *data_020b8e44;
extern S data_ov007_021c3c30;
extern S data_ov007_021c42a0;

void func_ov007_021a54b8(uint8_t *p)
{
    uint32_t buf[3];
    void *obj;
    void *c;
    void *x;
    int flag;
    uint32_t zero;

    func_02056c4c(*(void **)(p + 0xdc));
    zero = 0;
    flag = 0;
    obj = func_0205681c(0xb0);
    if (obj != 0) {
        func_02005988(buf, func_020159c8(data_020b8e44, 0x32));
        flag = 1;
        obj = func_02032d24(obj, data_ov007_021c3c30, buf, 4, zero);
    }
    if (flag != 0) {
        func_020059cc(buf);
    }
    c = func_0206cd68(*(void **)(p + 0xc8));
    x = func_0203b6fc();
    func_02056bc0(x, obj);
    func_02056bc0(x, c);
    func_02056bc0(p + 0x14, x);
    {
        uint32_t b = data_ov007_021c42a0.b;
        uint32_t a = data_ov007_021c42a0.a;
        *(uint32_t *)(p + 0xb8) = a;
        *(uint32_t *)(p + 0xbc) = b;
    }
}
