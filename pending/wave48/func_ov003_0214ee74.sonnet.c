#include "ffc/types.h"

extern void func_02056c9c(void *object, uint32_t v);
extern void *func_0205681c(uint32_t size);
extern void *func_0206ac50(void *p, int32_t a, uint32_t b, uint32_t c);
extern void func_02056bc0(void *object, void *node);
extern uint64_t func_0209a76c(uint32_t a, uint32_t b);
extern uint32_t func_0204f7ec(const void *object);
extern void *func_02005858(void *obj, uint32_t a, const void *b, uint32_t c, void *d);
extern void func_0205f518(void *obj, uint32_t a, uint32_t b);
extern void func_0205f3e0(void *obj, uint32_t v);
extern void func_0205f498(void *obj);
extern void func_0205f2f0(void *object, uint32_t value);

extern char data_ov003_02179a28[];
extern uint32_t data_0209e064;
extern void *data_0213df18;
extern char data_ov003_02179a38[];

void *func_ov003_0214ee74(char *self, uint32_t val) {
    volatile uint32_t arr[12];
    char *sp18;
    int32_t sp14;
    void *sp10;
    uint32_t sp0c;
    int32_t sp8;
    int32_t r7, i;
    void *r5, *r6;
    void *tmp;
    uint64_t pr;

    func_02056c9c(self, 0);
    *(void **)self = data_ov003_02179a28;
    *(uint32_t *)(self + 0x84) = val;
    *(uint32_t *)(self + 0x88) = 0;
    tmp = func_0205681c(0x40);
    if (tmp != 0) {
        tmp = func_0206ac50(tmp, -1, 0x4000010, 4);
    }
    *(void **)(self + 0x80) = tmp;
    func_02056bc0(self + 0x48, tmp);

    sp14 = data_0209e064;
    sp10 = 0;
    sp8 = 0x100 - sp14;
    sp14 = sp14 - 8;
    sp18 = self;
    sp18 = self + 0x48;
    for (i = 0; i < 12; i++) {
        if (i < 6) {
            r7 = sp14;
        } else {
            r7 = sp8;
        }
        pr = func_0209a76c(i, 6);
        sp0c = ((uint32_t)(pr >> 32)) << 5;
        r5 = func_0205681c(0x54);
        if (r5 != 0) {
            r5 = func_02005858(r5, func_0204f7ec(data_0213df18), data_ov003_02179a38, 1, sp10);
        }
        r6 = *(void **)((char *)r5 + 0x50);
        arr[i] = (uint32_t)r5;
        func_0205f518(*(void **)((char *)r6 + 0x94), r7, sp0c);
        func_0205f3e0(*(void **)((char *)r6 + 0x94), 3);
        func_0205f498(*(void **)((char *)r6 + 0x94));
        func_02056bc0(sp18, r5);
        func_0205f2f0(*(void **)((char *)r6 + 0x94), 1);
        if (i == 0) {
            sp10 = r6;
        }
    }
    return self;
}
