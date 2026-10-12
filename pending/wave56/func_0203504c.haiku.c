#include "ffc/types.h"

typedef struct { uint32_t heap : 1; uint32_t rest : 31; } Flag;

extern void *data_020b93b8;
extern void func_0201d1d0(void *a, void *b);
extern void func_0201ba14(void *out, void *a, void *b, int c);
extern void func_020511e8(void *dst, void *src);
extern void *func_020059cc(void *object);
extern void func_0200a5dc(void *a, void *b);
extern void func_020394fc(void *a, void *b);
extern void func_0200a7b0(void *a, void *b);
extern void *func_0200a678(void *object);
extern void func_02068b70(void *a, uint16_t v);

void func_0203504c(int dummy, void *a, int c)
{
    uint8_t buf40[0x18];
    uint8_t s34[0xc];
    uint8_t s28[0xc];
    uint8_t s1c[0xc];
    uint8_t s10[0xc];
    volatile uint8_t pad[0x10];
    uint16_t *end;
    uint32_t cnt;
    uint16_t *ptr;

    (void)pad;
    func_0201d1d0(data_020b93b8, buf40);
    func_0201ba14(s28, data_020b93b8, buf40, 1);
    func_020511e8(s34, s28);
    func_020059cc(s28);
    if (c != 0) {
        func_0200a5dc(s1c, s34);
        func_020394fc(s10, s1c);
        func_0200a7b0(s34, s10);
        func_0200a678(s10);
        func_0200a678(s1c);
    }
    if (!((Flag *)s34)->heap) {
        cnt = (((uint32_t)s34[0]) << 24) >> 25;
        ptr = (uint16_t *)(s34 + 2);
    } else {
        cnt = *(uint32_t *)(s34 + 4);
        ptr = *(uint16_t **)(s34 + 8);
    }
    end = ptr + cnt;
    while (end != ((((Flag *)s34)->heap) ? *(uint16_t **)(s34 + 8) : (uint16_t *)(s34 + 2))) {
        func_02068b70(a, end[-1]);
        end--;
    }
    func_0200a678(s34);
}
