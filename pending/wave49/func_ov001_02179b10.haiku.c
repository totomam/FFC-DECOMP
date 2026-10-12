#include "ffc/types.h"

extern void func_ov001_02178324(void *p, void *dst, void *src);
extern void func_ov001_02178340(void *p, void *dst, uint32_t v);
extern void func_ov001_02178678(void *p, uint32_t v, void *dst, void *out, uint32_t one, void *data);
extern void func_ov000_02165474(uint32_t v, uint32_t n);
extern void func_ov000_02165428(uint32_t v);
extern int func_ov000_02166a7c(void);
extern void func_ov000_02166fdc(void *a);
extern int func_ov000_02167060(void);
extern int func_ov000_02167094(void);
extern void func_ov000_02166ea8(void);
extern void func_ov000_021653f4(uint32_t v);
extern void func_ov001_0217b7f4(void *p);
extern void func_ov001_0217c004(void *p, void *node);
extern int func_ov001_0217ca70(void *p, void (*fn)(void), uint32_t arg);
extern void func_ov001_02179a44(void);
extern uint8_t data_ov001_02190b5c[];
extern uint8_t data_ov001_02190a38[];
extern uint8_t data_ov001_02190b70[];

void func_ov001_02179b10(void *p, uint32_t arg1)
{
    uint8_t *st = *(uint8_t **)p;
    uint32_t state = *(uint32_t *)(st + 0x1f4);
    uint32_t v;
    uint32_t off;
    uint8_t *node;
    uint32_t out;
    void *t;
    uint32_t k;

    if (state == 4) {
        return;
    }
    if (state != 0) {
        if (arg1 != 0 && state == 3) {
            func_ov001_02178324(p, st + 0x210, data_ov001_02190b5c);
            func_ov001_02178340(p, st + 0x210, *(uint32_t *)(st + 0x198));
            func_ov001_02178324(p, st + 0x210, data_ov001_02190a38);
        }
        v = *(uint32_t *)(st + 0x1f0);
        func_ov001_02178678(p, v, st + 0x210, &out, 1, data_ov001_02190b70);
        if (*(uint32_t *)(st + 0x1f0) != (uint32_t)-1) {
            func_ov000_02165474(*(uint32_t *)(st + 0x1f0), 2);
            func_ov000_02165428(*(uint32_t *)(st + 0x1f0));
            *(uint32_t *)(st + 0x1f0) = (uint32_t)-1;
        }
        *(uint32_t *)(st + 0x1f4) = 4;
        *(uint32_t *)(st + 0x19c) = 0;
        *(uint32_t *)(st + 0x1a0) = 0;
    }

    if (func_ov000_02166a7c()) {
        func_ov000_02166fdc(st + 0x220);
        if (func_ov000_02167060() && func_ov000_02167094()) {
            func_ov000_02166ea8();
        }
    }

    func_ov000_021653f4(*(uint32_t *)(st + 0x1f8));
    *(uint32_t *)(st + 0x1f8) = 0;
    func_ov000_021653f4(*(uint32_t *)(st + 0x208));
    *(uint32_t *)(st + 0x208) = 0;
    func_ov000_021653f4(*(uint32_t *)(st + 0x210));
    *(uint32_t *)(st + 0x210) = 0;
    func_ov000_021653f4(*(uint32_t *)(st + 0x5e4));
    *(uint32_t *)(st + 0x5e4) = 0;
    func_ov000_021653f4(*(uint32_t *)(st + 0x5f4));
    *(uint32_t *)(st + 0x5f4) = 0;

    off = 0x5e4;
    if (*(int32_t *)(st + off - 0x20) != 0) {
        off -= 0x20;
        do {
            func_ov001_0217b7f4(p);
        } while (*(int32_t *)(st + off) != 0);
    }

    *(uint32_t *)(st + 0x5c4) = 0;
    node = *(uint8_t **)(st + 0x5d8);
    while (node != 0) {
        uint8_t *cur = node;
        node = *(uint8_t **)(cur + 0x4c);
        func_ov001_0217c004(p, cur);
    }
    *(uint32_t *)(st + 0x5d8) = 0;

    do {
    } while (func_ov001_0217ca70(p, func_ov001_02179a44, 0) == 0);
}
