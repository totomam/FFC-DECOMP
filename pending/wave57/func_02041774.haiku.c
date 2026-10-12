#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair2;

#define FIELD_U32(p, off) (*(uint32_t *)((uint8_t *)(p) + (off)))
#define FIELD_U8(p, off) (*(uint8_t *)((uint8_t *)(p) + (off)))

extern void func_02037598(void *p);
extern void *func_0205681c(uint32_t size);
extern void func_02056c9c(void *obj, uint32_t arg);
extern void *func_0203f784(void *p, uint32_t size);
extern void func_02056bc0(void *object, void *node);
extern void *func_02056aec(void *p);
extern char data_020af198[];
extern char data_020af210[];
extern uint32_t data_020af368[];
extern uint32_t data_020af370[];

void func_02041774(void *self)
{
    uint8_t *p = (uint8_t *)self;
    uint8_t *A;
    uint8_t *B;
    uint8_t *sp;
    uint8_t *node;
    uint32_t v;
    uint32_t t;

    func_02037598(self);
    if (FIELD_U32(p, 0x1C0) != 0) {
        if (FIELD_U8(p, 0x1A4) != 0) {
            A = func_0205681c(0x88);
            if (A != 0) {
                v = FIELD_U32(p, 0x88);
                func_02056c9c(A, 0);
                *(void **)A = data_020af198;
                FIELD_U32(A, 0x80) = v;
                FIELD_U32(A, 0x84) = 0;
            }
            sp = func_0203f784(self, 0x34);
            B = func_0205681c(0x88);
            if (B != 0) {
                v = FIELD_U32(p, 0x88);
                func_02056c9c(B, 0);
                *(void **)B = data_020af210;
                FIELD_U32(B, 0x80) = v;
                FIELD_U32(B, 0x84) = 0;
            }
            {
                uint8_t *list = p + 0x14;
                func_02056bc0(list, B);
                func_02056bc0(list, sp);
                func_02056bc0(list, A);
            }
        }
        node = func_02056aec(self);
        func_02056bc0(p + 0x14, node);
        return;
    }

    t = FIELD_U32(p, 0x1A0);
    if (t == 0) {
        *(Pair2 *)(p + 0x80) = *(Pair2 *)data_020af368;
        return;
    }
    if (t == 3) {
        B = func_0205681c(0x88);
        if (B != 0) {
            v = FIELD_U32(p, 0x88);
            func_02056c9c(B, 0);
            *(void **)B = data_020af210;
            FIELD_U32(B, 0x80) = v;
            FIELD_U32(B, 0x84) = 0;
        }
        func_02056bc0(p + 0x14, B);
        if (FIELD_U8(p, 0x1A4) != 0) {
            sp = func_0203f784(self, 0x34);
            func_02056bc0(p + 0x14, sp);
        }
        node = func_02056aec(self);
        func_02056bc0(p + 0x14, node);
        return;
    }

    B = func_0205681c(0x88);
    if (B != 0) {
        v = FIELD_U32(p, 0x88);
        func_02056c9c(B, 0);
        *(void **)B = data_020af210;
        FIELD_U32(B, 0x80) = v;
        FIELD_U32(B, 0x84) = 0;
    }
    func_02056bc0(p + 0x14, B);
    if (FIELD_U8(p, 0x1A4) != 0) {
        sp = func_0203f784(self, 0x34);
        func_02056bc0(p + 0x14, sp);
    }
    *(Pair2 *)(p + 0x80) = *(Pair2 *)data_020af370;
}
