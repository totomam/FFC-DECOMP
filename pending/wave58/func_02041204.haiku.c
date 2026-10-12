#include "ffc/types.h"

extern void func_0203758c(void *object);
extern void *func_0205681c(uint32_t size);
extern void *func_021bd180(void *p);
extern int32_t func_02015a58(void *a);
extern void func_02035f58(void *object);
extern void func_0201f36c(const void *object, uint32_t index, void *output);
extern uint32_t func_02035ff4(void *object);
extern void *func_02035fd0(void *object);
extern void func_0203be8c(void);
extern void func_0203bea0(void);
extern void func_0203bed8(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f);
extern void *func_0203c2e4(void);
extern void func_0205947c(void *a, uint32_t b);
extern void func_0203c33c(void);
extern void func_0203c264(void);
extern void func_0203bf28(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f);
extern void func_0203c354(void);
extern void func_0203c270(void);
extern void func_0204f550(void *a);
extern void func_0203c380(void);
extern void func_0203c394(void);
extern uint32_t func_0203c23c(void);
extern void func_02060e80(void *object);
extern uint32_t func_0203c250(void);
extern void func_ov011_021bd290(void *object, uint32_t idx);
extern uint32_t func_02035eb0(const void *object);
extern uint32_t func_02035eb8(const void *object);
extern void *func_02019d68(void *a, uint32_t b, uint32_t c);
extern uint32_t func_0201b924(const void *object);
extern void *func_ov011_021bf0f8(void *a, uint8_t b, void *c, uint32_t d);
extern void func_02056bc0(void *object, void *node);

extern void *data_020b8e44;
extern void *data_020b93b8;
extern uint32_t data_020af350[2];
extern void *data_0213df18;
extern uint32_t data_020af358[2];

void func_02041204(uint8_t *a)
{
    volatile uint32_t flag;
    uint32_t tmp[0x18];
    int32_t n;
    int32_t i;
    void *p;
    void *q;

    func_0203758c(a);
    p = func_0205681c(0x84);
    if (p != 0) {
        p = func_021bd180(p);
    }
    *(void **)(a + 0x1bc) = p;
    *(int32_t *)((uint8_t *)p + 0x7c) = -1;
    flag = 0;
    a[0x1a4] = (uint8_t)flag;

    n = func_02015a58(data_020b8e44);
    for (i = 1; i < n; i++) {
        func_02035f58(tmp);
        func_0201f36c(data_020b93b8, i, tmp);
        if (func_02035ff4(tmp)) {
            flag = 1;
            func_02035fd0(tmp);
            break;
        }
        func_02035fd0(tmp);
    }

    if (flag == 0) {
        *(uint32_t *)(a + 0x80) = data_020af350[0];
        *(uint32_t *)(a + 0x84) = data_020af350[1];
        a[0x1a4] = 1;
        return;
    }

    func_0203be8c();
    func_0203bea0();
    func_0203bed8(5, 0, 3, 1, 1, 1);
    func_0205947c(func_0203c2e4(), 1);
    func_0203c33c();
    func_0203c264();
    func_0203bf28(5, 2, 4, 1, 0, 0);
    func_0203c354();
    func_0203c270();
    func_0204f550(data_0213df18);
    func_0203c380();
    func_0203c394();
    func_0203c23c();
    func_02060e80(0);
    func_0203c250();
    func_02060e80(0);

    p = *(void **)(a + 0x1bc);
    func_ov011_021bd290(p, 0);
    *(int32_t *)((uint8_t *)p + 0x70) = 1;
    *(uint32_t *)((uint8_t *)p + 0x74) = func_02035eb0(a + 0x164);
    q = func_02019d68(data_020b8e44, *(uint32_t *)(a + 0x90), func_02035eb8(a + 0x164));
    *(void **)((uint8_t *)p + 0x78) = q;
    *(void **)((uint8_t *)p + 0x80) = a + 0x164;

    q = func_0205681c(0x344);
    if (q != 0) {
        uint32_t v = func_0201b924(data_020b93b8);
        q = func_ov011_021bf0f8(q, (uint8_t)v, p, 0);
    }
    func_02056bc0(a + 0x14, q);

    *(uint32_t *)(a + 0x80) = data_020af358[0];
    *(uint32_t *)(a + 0x84) = data_020af358[1];
}
