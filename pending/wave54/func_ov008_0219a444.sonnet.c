#include "ffc/types.h"

typedef struct Loc { uint32_t w0; void *ptr; uint32_t w8; uint8_t flag; } Loc;
typedef struct Obj { uint8_t pad0[6]; uint8_t f6; uint8_t f7; uint8_t pad1[0x18]; uint32_t f20; uint32_t f24; } Obj;

extern void *data_020b93b8;
extern void *data_020b8e44;
extern void func_0201e954(void *a, uint32_t b, void *out);
extern uint32_t func_02036cd8(const void *object);
extern Obj *func_020197b4(void *a, uint32_t b);
extern uint32_t func_02036cfc(const void *object);
extern uint32_t func_02036d18(const void *object);
extern void func_02017828(void *out, void *obj);
extern void *func_02052d90(const void *mar, uint32_t index);
extern void func_02052d3c(void *a, uint32_t b);
extern void func_02052c04(void *a);
extern void *func_02053290(void *object);
extern uint32_t func_02036ce0(const void *object);
extern uint32_t func_02036d10(const void *object);
extern uint32_t func_0209a978(uint32_t a, uint32_t b);

uint32_t func_ov008_0219a444(uint32_t unused, uint32_t p1)
{
    uint32_t cur[6];
    Obj *o;
    uint32_t r5;
    uint32_t v;

    func_0201e954(data_020b93b8, p1, cur);
    v = func_02036cd8(cur);
    o = func_020197b4(data_020b8e44, v);
    r5 = o->f20;
    if (func_02036cfc(cur) == 0) {
        if (func_02036d18(cur) == 1) {
            if (o->f6 != 0) {
                Loc a; Loc *pa = &a;
                func_02017828(&a, data_020b8e44);
                r5 = *(uint16_t *)((uint8_t *)func_02052d90(a.ptr, a.w8) + 6);
                if (a.ptr != 0) {
                    if (pa->flag != 0) {
                        func_02052d3c(pa->ptr, pa->w8);
                    }
                    func_02052c04(pa->ptr);
                }
                func_02053290(pa);
            } else if (o->f7 != 0) {
                Loc b; Loc *pb = &b;
                func_02017828(&b, data_020b8e44);
                r5 = *(uint16_t *)((uint8_t *)func_02052d90(b.ptr, b.w8) + 8);
                if (b.ptr != 0) {
                    if (pb->flag != 0) {
                        func_02052d3c(pb->ptr, pb->w8);
                    }
                    func_02052c04(pb->ptr);
                }
                func_02053290(pb);
            } else {
                Loc c; Loc *pc = &c;
                func_02017828(&c, data_020b8e44);
                r5 = *(uint16_t *)((uint8_t *)func_02052d90(c.ptr, c.w8) + 4);
                if (c.ptr != 0) {
                    if (pc->flag != 0) {
                        func_02052d3c(pc->ptr, pc->w8);
                    }
                    func_02052c04(pc->ptr);
                }
                func_02053290(pc);
            }
        } else {
            if (func_02036ce0(cur) == 1) {
                r5 = o->f24;
            }
        }
    } else {
        if (func_02036ce0(cur) == 1) {
            if (func_02036d10(cur) < 100) {
                uint32_t h = 100;
                uint32_t r4 = func_0209a978(r5 * 0x4b, h);
                uint32_t t;
                t = func_0209a978(func_02036d10(cur) * r4, 99);
                t = func_0209a978(t + 99, h);
                r5 = t * h;
            }
        }
    }
    return r5;
}
