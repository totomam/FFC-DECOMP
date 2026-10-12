#include "ffc/types.h"

extern void *data_020b93b8;
extern uint32_t func_020367bc(void *a, uint32_t b, uint32_t c);
extern uint32_t func_0201b924(const void *object);
extern void func_0201f1a8(void *a, uint32_t b, void *c);
extern void *func_0205681c(uint32_t a);
extern void *func_ov010_021bdf7c(void *a, void *b, void *c, void *d, uint32_t e, uint32_t f);
extern void func_02056bc0(void *object, void *node);
extern void func_0201c220(void *a, uint32_t b, uint32_t c);
extern uint32_t func_0203c23c(void);
extern void func_02060e80(void *object);
extern uint32_t func_0203c250(void);
extern void *func_02056aec(void *object);
extern void *func_ov010_021be9f8(void *a, void *b, void *c, void *d);
extern void *func_ov010_021bf608(void *a, void *b, void *c, void *d);
extern void *func_ov010_021bff40(void *a, void *b);

void func_ov010_021bdd04(void *p, uint32_t a, uint32_t b) {
    uint8_t *s = (uint8_t *)p;
    uint32_t st = *(uint32_t *)(s + 0x8c);
    void *res;

    switch (st) {
    case 0:
        if (func_020367bc(s + 0x90, 0, b)) {
            func_0201f1a8(data_020b93b8, func_0201b924(data_020b93b8), s + 0x90);
        } else if (s[0x140]) {
            *(uint32_t *)(s + 0x8c) = 0x62;
            res = func_0205681c(0x62 + 0xd6);
            if (res) {
                res = func_ov010_021bdf7c(res, s + 0x8c, s + 0x90, s + 0xe8, 0,
                                          ((uint8_t *)*(void **)(s + 0x168))[4]);
            }
            func_02056bc0(s + 0x14, res);
            func_0201c220(data_020b93b8, 0xf, 0);
            return;
        }
        func_02060e80((void *)func_0203c23c());
        func_02060e80((void *)func_0203c250());
        res = func_02056aec(s);
        func_02056bc0(s + 0x14, res);
        return;
    case 1:
        res = func_0205681c(0x138);
        if (res) {
            res = func_ov010_021bdf7c(res, s + 0x8c, s + 0x90, s + 0xe8, 0,
                                      ((uint8_t *)*(void **)(s + 0x168))[4]);
        }
        func_02056bc0(s + 0x14, res);
        func_0201c220(data_020b93b8, 0xf, 0);
        return;
    case 2:
        res = func_0205681c(0x13c);
        if (res) {
            res = func_ov010_021be9f8(res, s + 0x8c, s + 0x90, s + 0xe8);
        }
        func_02056bc0(s + 0x14, res);
        func_0201c220(data_020b93b8, 0xf, 1);
        return;
    case 3:
        res = func_0205681c(0x154);
        if (res) {
            res = func_ov010_021bf608(res, s + 0x8c, s + 0x90, s + 0xe8);
        }
        func_02056bc0(s + 0x14, res);
        func_0201c220(data_020b93b8, 0xf, 2);
        return;
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
        *(uint32_t *)(s + 0x144) = 0;
        *(uint32_t *)(s + 0x148) = st - 4;
        *(void **)(s + 0x158) = s + 0x90;
        res = func_0205681c(0x184);
        if (res) {
            res = func_ov010_021bff40(res, s + 0x144);
        }
        func_02056bc0(s + 0x14, res);
        *(uint32_t *)(s + 0x8c) = 1;
        return;
    case 10:
        **(uint32_t **)(s + 0x168) = 1;
        func_0201c220(data_020b93b8, 0xf, 3);
        *(uint32_t *)(s + 0xc) = (*(uint32_t *)(s + 0xc) & ~0xffu) | 2;
        return;
    default:
        **(uint32_t **)(s + 0x168) = 0;
        *(uint32_t *)(s + 0xc) = (*(uint32_t *)(s + 0xc) & ~0xffu) | 2;
        return;
    }
}
