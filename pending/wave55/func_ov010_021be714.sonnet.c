#include "ffc/types.h"

typedef struct {
    uint32_t unk0;
    void *mar;
    uint32_t idx;
    uint8_t flag;
} FfcSlot;

typedef struct {
    uint32_t sp0c;
    uint32_t sp10[2];
    uint32_t sp18[2];
    uint32_t obj20[3];
    uint32_t obj2c[3];
    FfcSlot slot;
    uint32_t arr[3];
} Frame;


extern uint32_t data_0209de68;
extern uint32_t data_0209de64;
extern uint32_t data_0209de60;
extern uint32_t data_020b8e44;
extern uint32_t data_020b93b8;
extern uint32_t data_0213df18;
extern uint32_t data_0209de3c;

extern uint32_t func_0203c0e4(uint32_t a, uint32_t b);
extern void func_02056bc0(void *object, void *node);
extern void *func_ov005_02195df0(void *obj);
extern void *func_02062a30(void *owner);
extern uint32_t func_0203b708(uint32_t x);
extern void func_ov010_021bd7a4(void *self);
extern uint32_t func_020159c8(uint32_t a, uint32_t b);
extern uint32_t func_0201c9ac(uint32_t a, uint32_t b);
extern void func_02019ac8(void *out, uint32_t x);
extern void *func_02052d90(void *mar, uint32_t index);
extern uint32_t func_02005efc(void *object, uint32_t first, ...);
extern void *func_0205681c(uint32_t size);
extern void func_020095b8(void *out, void *in);
extern uint32_t func_0204f7ec(const void *object);
extern void *func_02032d7c(void *obj, uint32_t a, uint32_t b, uint32_t c, void *d, uint32_t e, uint32_t f);
extern void *func_020059cc(void *object);
extern void func_02052d3c(void *mar, uint32_t idx);
extern void func_02052c04(void *mar);
extern void *func_02053290(void *object);
extern uint32_t func_020367bc(uint32_t a, uint32_t b);
extern void func_02005988(void *out, uint32_t x);
extern void *func_02032d24(void *obj, uint32_t a, uint32_t b, void *c, uint32_t d, uint32_t e);

void func_ov010_021be714(uint8_t *self)
{
    Frame fr;
    uint8_t *ent;
    uint32_t i, k;
    uint32_t r4, r6;
    uint8_t *r5;
    uint8_t *m;

    if (**(uint32_t **)(self + 0xe0) == 0x63) {
        uint32_t t = func_0203c0e4(data_0209de68, data_0209de64);
        void *f;
        func_02056bc0(*(void **)(self + 0xf0), (void *)t);
        f = *(void **)(self + 0xf4);
        ((void (*)(void *))(*(void ***)f)[11])(f);
        r5 = (uint8_t *)func_ov005_02195df0(*(void **)(self + 0xf4));
        r6 = (uint32_t)func_02062a30(*(void **)(self + 0xf4));
        t = func_0203b708(data_0209de60);
        r4 = (uint32_t)(self + 0x14);
        func_02056bc0((void *)r4, (void *)t);
        func_02056bc0((void *)r4, (void *)r6);
        func_02056bc0((void *)r4, r5);
    } else {
        func_ov010_021bd7a4(self);
    }

    if (self[0x134]) {
        self[0x134] = 0;
        fr.sp0c = func_020159c8(data_020b8e44, 0x93);
        ent = 0;
        for (i = 0; i < 3; i++) {
            fr.arr[i] = (uint32_t)ent;
        }
        k = func_0201c9ac(data_020b93b8, 1);
        func_02019ac8(&fr.slot, data_020b8e44);
        i = 0;
        if (*(uint32_t *)((uint8_t *)func_02052d90(fr.slot.mar, fr.slot.idx) + 4) != 0) {
            do {
                m = (uint8_t *)func_02052d90(fr.slot.mar, fr.slot.idx);
                ent = m + *(uint32_t *)(m + 8) + (i << 4);
                if (k == *(uint16_t *)ent) {
                    break;
                }
                i++;
                m = (uint8_t *)func_02052d90(fr.slot.mar, fr.slot.idx);
            } while (i < *(uint32_t *)(m + 4));
        }
        func_02005efc(fr.arr, fr.sp0c, *(uint16_t *)(ent + 6), *(uint16_t *)(ent + 4));
        r6 = 0;
        r4 = 0;
        r5 = (uint8_t *)func_0205681c(0xb0);
        if (r5 != 0) {
            func_020095b8(fr.obj2c, fr.arr);
            fr.sp18[0] = 0x80;
            fr.sp18[1] = 0x60;
            r4 = 1;
            {
                uint32_t tmp = func_0204f7ec(data_0213df18);
                r5 = (uint8_t *)func_02032d7c(r5, tmp, fr.sp18[0], fr.sp18[1], fr.obj2c, 4, r6);
            }
        }
        func_02056bc0(self + 0x14, r5);
        if (r4 != 0) {
            func_020059cc(fr.obj2c);
        }
        if (fr.slot.mar != 0) {
            if (fr.slot.flag != 0) {
                func_02052d3c(fr.slot.mar, fr.slot.idx);
            }
            func_02052c04(fr.slot.mar);
        }
        func_02053290(&fr.slot);
        func_020059cc(fr.arr);
    }

    if (**(uint32_t **)(self + 0xe0) == 0x62) {
        if (func_020367bc(*(uint32_t *)(self + 0xe4), 0) == 0) {
            r4 = 0;
            r5 = (uint8_t *)func_0205681c(0xb0);
            if (r5 != 0) {
                func_02005988(fr.obj20, func_020159c8(data_020b8e44, 0xb4));
                fr.sp10[0] = 0x80;
                fr.sp10[1] = 0x60;
                r4 = 1;
                r5 = (uint8_t *)func_02032d24(r5, fr.sp10[0], fr.sp10[1], fr.obj20, 4, data_0209de3c);
            }
            func_02056bc0(self + 0x14, r5);
            if (r4 != 0) {
                func_020059cc(fr.obj20);
            }
        }
    }
}
