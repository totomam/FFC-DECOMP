#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void func_02056c9c(void *obj, uint32_t x);
extern void func_02087620(void *object);
extern void func_0200a5dc(void *a, void *b);
extern void func_02051248(void *a, void *b);
extern void func_020095b8(void *a, void *b);
extern void func_020059cc(void *object);
extern void func_0200a678(void *object);
extern char data_020ae6d4[];
extern char data_ov013_021c4d24[];
extern char data_ov013_021c4d40[];
extern Pair data_ov013_021c4e34;
extern Pair data_ov013_021c4e3c;

void *func_ov013_021c2224(void *self, void *p1, void *p2, void *p3)
{
    uint8_t tmp[0x18];
    uint8_t *s = (uint8_t *)self;
    uint8_t *b;
    uint8_t *c;
    uint32_t a1;
    uint32_t a2;
    Pair *pp;

    func_02056c9c(self, 0);
    b = s + 0x80;
    *(uint32_t *)b = (uint32_t)data_020ae6d4;
    *(uint32_t *)(b + 4) = 0;
    *(uint32_t *)(b + 8) = 0;
    *(uint32_t *)(b + 0xc) = 0;
    c = b + 0x10;
    *(uint32_t *)(b + 0x10) = 0;
    *(uint32_t *)(c + 4) = 0;
    *(uint32_t *)(c + 8) = 0;
    func_02087620(b + 0x1c);
    *(uint32_t *)s = (uint32_t)data_ov013_021c4d24;
    *(uint32_t *)(s + 0x80) = (uint32_t)data_ov013_021c4d40;
    *(void **)(s + 0xc8) = p1;
    *(void **)(s + 0xcc) = p2;
    *(void **)(s + 0xd0) = p3;
    *(uint32_t *)(s + 0xd4) = *(uint32_t *)((uint8_t *)p3 + 0x98);
    a2 = *(uint32_t *)((uint8_t *)p3 + 0xa0);
    a1 = *(uint32_t *)((uint8_t *)p3 + 0x9c);
    *(uint32_t *)(s + 0xd8) = a1;
    *(uint32_t *)(s + 0xdc) = a2;
    func_0200a5dc(tmp + 0xc, (uint8_t *)p3 + 0xac);
    func_02051248(tmp, tmp + 0xc);
    func_020095b8(s + 0xe0, tmp);
    func_020059cc(tmp);
    func_0200a678(tmp + 0xc);
    *(Pair *)(s + 0xb8) = data_ov013_021c4e34;



    *(Pair *)(s + 0xc0) = data_ov013_021c4e3c;
    return self;
}
