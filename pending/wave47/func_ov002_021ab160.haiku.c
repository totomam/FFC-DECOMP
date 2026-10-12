#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_ov002_021ac088(int32_t *out, void *p);
extern void func_ov002_021ac198(int32_t *out, void *p);
extern void func_ov002_021ac2a8(int32_t *out, void *p);
extern void func_ov002_021ac39c(int32_t *out, void *p);
extern uint32_t func_ov002_021aa18c(void *p);
extern uint32_t func_ov002_021aac90(void *p, int32_t flag);
extern uint32_t func_ov002_021aaa88(void *p);
extern uint32_t func_ov002_021aa820(void *p);
extern uint32_t func_ov002_021aa830(void *p);
extern void func_02055914(void *obj, void *arg);
extern char data_020ab8b8[];

void func_ov002_021ab160(uint8_t *r5, uint32_t a, uint32_t b)
{
    int32_t r6, r7;
    int32_t t34, t38, t3c, t40;
    volatile uint32_t va = a;
    volatile uint32_t vb = b;
    uint8_t *r4 = (uint8_t *)func_0205681c(0x44);
    if (r4 != 0) {
        uint32_t v8, vc, v10, v14, v18, v1c, v20, v24;

        func_ov002_021ac088(&t34, r5);
        r6 = t34;
        func_ov002_021ac198(&t38, r5);
        r7 = t38;
        func_ov002_021ac2a8(&t3c, r5);
        v1c = t3c;
        func_ov002_021ac39c(&t40, r5);
        v20 = t40;
        v8 = func_ov002_021aa18c(r5 + 0x190);
        vc = func_ov002_021aac90(r5, 1);
        v10 = func_ov002_021aac90(r5, 0);
        v14 = func_ov002_021aaa88(r5);
        v18 = func_ov002_021aa820(r5);
        v24 = func_ov002_021aa830(r5);

        *(uint32_t *)(r4 + 0x08) = 0;
        *(uint32_t *)(r4 + 0x0c) = 0x100fd;
        *(uint32_t *)(r4 + 0x00) = (uint32_t)data_020ab8b8;
        *(uint32_t *)(r4 + 0x10) = vb;
        *(uint32_t *)(r4 + 0x14) = *(uint32_t *)(r5 + 0xc4);
        *(uint32_t *)(r4 + 0x18) = v24;
        *(uint32_t *)(r4 + 0x1c) = v18;
        *(int32_t *)(r4 + 0x20) = r6 >> 12;
        *(int32_t *)(r4 + 0x24) = r7 >> 12;
        *(int32_t *)(r4 + 0x28) = (int32_t)v1c >> 12;
        *(int32_t *)(r4 + 0x2c) = (int32_t)v20 >> 12;
        *(uint32_t *)(r4 + 0x30) = v14;
        *(uint8_t *)(r4 + 0x34) = (uint8_t)v10;
        *(uint8_t *)(r4 + 0x35) = (uint8_t)vc;
        *(uint32_t *)(r4 + 0x38) = 0;
        *(uint32_t *)(r4 + 0x3c) = v8;
        *(uint8_t *)(r4 + 0x40) = (uint8_t)va;
    }
    func_02055914(*(void **)(r5 + 0xb8), r4);
}
