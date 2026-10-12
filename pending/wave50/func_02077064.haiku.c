#include "ffc/types.h"

typedef struct VT { void *s0; void *s1; void *s2; void *s3; } VT;
typedef struct Obj { const VT *vt; } Obj;

#define P(o, off) (*(void **)((uint8_t *)(o) + (off)))

extern int func_02076404(void *obj);
extern void *func_02076314(void *obj);
extern void func_02056bc0(void *object, void *node);
extern void *func_02076434(void *obj);
extern void func_02056c4c(void *obj);
extern void func_02076424(void *obj);
extern void func_0208763c(void *obj);
extern void func_02087678(void *obj);
extern void *func_02075a60(void *obj);
extern void *func_02056b10(void *owner);
extern void *func_02056aec(void *obj);
extern void *func_02075be8(void *obj);
extern void func_02076e0c(void *obj, void *arg);

void func_02077064(uint8_t *self)
{
    volatile uint32_t pad[4];
    if (func_02076404(P(self, 0x80))) {
        void *t = func_02076314(P(self, 0x80));
        func_02056bc0(self + 0x14, t);
        t = func_02076434(P(self, 0x80));
        Obj *o = (Obj *)P(self, 0x90);
        t = ((void *(*)(void *, void *))o->vt->s3)(o, t);
        o = (Obj *)P(self, 0x90);
        t = ((void *(*)(void *, void *))o->vt->s1)(o, t);
        func_02056bc0(self + 0x14, t);
        func_02056c4c(P(self, 0xb4));
        func_02056c4c(P(self, 0xb8));
        func_02076424(P(self, 0x80));
        *(uint32_t *)P(self, 0x94) = 0;
        {
            uint32_t f = *(uint32_t *)(self + 0xc);
            *(uint32_t *)(self + 0xc) = (f & ~0xffu) | 2;
        }
        return;
    } else {
        uint8_t *b8 = (uint8_t *)P(self, 0xb8);
        uint8_t r7 = *(uint8_t *)(b8 + 0x12);
        uint8_t *r6 = b8 + 0x1c;
        int flag;
        void *t;
        if (r7) {
            func_0208763c(r6);
        }
        flag = (*(uint32_t *)(b8 + 0x14) == 0);
        if (r7) {
            func_02087678(r6);
        }
        if (flag) {
            t = func_02075a60(P(P(self, 0x80), 0x88));
            func_02056bc0(P(self, 0xb4), t);
            t = func_02056b10(P(self, 0xb4));
            func_02056bc0(self + 0x14, t);
            *(uint32_t *)P(self, 0x94) = 0;
            t = func_02056aec(self);
            func_02056bc0(self + 0x14, t);
            return;
        } else {
            t = func_02075be8(P(P(self, 0x80), 0x88));
            func_02076e0c(P(self, 0xbc), t);
            {
                uint8_t *b4 = (uint8_t *)P(self, 0xb4);
                r7 = *(uint8_t *)(b4 + 0x12);
                r6 = b4 + 0x1c;
                if (r7) {
                    func_0208763c(r6);
                }
                flag = (*(uint32_t *)(b4 + 0x14) == 0);
                if (r7) {
                    func_02087678(r6);
                }
                if (flag) {
                    func_02056c4c(P(self, 0xb8));
                    *(uint32_t *)P(self, 0x94) = 1;
                    {
                        uint32_t f = *(uint32_t *)(self + 0xc);
                        *(uint32_t *)(self + 0xc) = (f & ~0xffu) | 2;
                    }
                }
            }
            return;
        }
    }
}
