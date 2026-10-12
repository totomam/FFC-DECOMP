#include "ffc/types.h"

extern int func_ov003_02156948(void *self, void *arr, uint16_t idx, int flag, int extra);
extern int func_ov003_02156d10(void *self, void *arr);
extern void *func_020059cc(void *object);
extern void func_02028e70(void *obj);
extern void func_0202a004(void *dst, void *src);
extern void func_0202984c(void *obj);
extern void func_02005988(void *obj, void *src);
extern void func_ov003_021564e8(void *obj);
extern void func_02028f0c(void *a, void *b, int c, void *d);
extern void func_02035c18();
extern void func_02029bb0(void *a, void *b);
extern int func_ov003_02146464(void *p);
extern void *func_ov003_02156728(void *self, void *arr);

void func_ov003_021565ac(uint8_t *self) {
    uint32_t a1[3];
    uint32_t a2[3];
    uint32_t a3[3];
    uint8_t o1[0xa8];
    uint8_t o2[0xa8];
    uint8_t o3[0xc], o4[0xc];
    uint8_t o5[0x48];
    uint32_t tmpA;
    uint32_t i;
    int r4, r6, r7;
    uint32_t tmp;

    for (i = 0; i < 3; i++) a1[i] = i;
    for (i = 0; i < 3; i++) a2[i] = 0;
    r7 = func_ov003_02156948(self, a1, *(uint16_t *)(self + 0xbe), 1, 0);
    r6 = func_ov003_02156948(self, a2, *(uint16_t *)(self + 0xbe), 0, 0);
    for (i = 0; i < 3; i++) a3[i] = 0;
    r4 = func_ov003_02156d10(self, a3);

    if (r7 == 0 && r6 == 0) {
        func_020059cc(a3);
        func_020059cc(a2);
        func_020059cc(a1);
        return;
    }

    func_02028e70(o1);
    if (r7 != 0) {
        func_02028e70(o2);
        func_0202a004(o1, o2);
        func_0202984c(o2);
        func_02005988(o3, (void *)r7);
        func_ov003_021564e8(&tmpA);
        func_02028f0c(o1, o3, r4, &tmpA);
        func_02035c18(&tmpA);
        func_020059cc(o3);
        if (r6 != 0) {
            func_02005988(o4, (void *)r6);
            func_02029bb0(o1, o4);
            func_020059cc(o4);
        }
    } else {
        func_02028e70(o5);
        func_0202a004(o1, o5);
        func_0202984c(o5);
        func_02005988(o4, (void *)r6);
        func_ov003_021564e8(&tmpA);
        func_02028f0c(o1, o4, 0, &tmpA);
        func_02035c18(&tmpA);
        func_020059cc(o4);
    }

    if (func_ov003_02146464(*(void **)(self + 0x108)) != 0) {
        tmp = *(uint16_t *)(self + 0xbe);
        r4 = (int)func_ov003_02156728(self + 0x15c, &tmp);
    } else {
        tmp = *(uint16_t *)(self + 0xbe);
        r4 = (int)func_ov003_02156728(self + 0x14c, &tmp);
    }
    func_0202a004((void *)(r4 + 4), o1);
    func_0202984c(o1);
    func_020059cc(a3);
    func_020059cc(a2);
    func_020059cc(a1);
}
