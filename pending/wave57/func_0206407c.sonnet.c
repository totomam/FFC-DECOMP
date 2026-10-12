#include "ffc/types.h"

extern uint32_t data_020b16d8;
extern void func_02063bcc(void *obj);
extern void func_020642e8(void *obj, uint32_t v);
extern void func_0205847c(void *p);
extern void func_02056858(void *p);
extern void func_02063ba4(void *a, void *b);
extern void func_0205fd04(void *p);
extern void func_02063bbc(void *a, void *b);
extern uint32_t func_02063558(const void *object);
extern void func_0205ffd0(void *p);
extern void func_0205f898(void *a, void *b);
extern void func_02063530(void *p);
extern void func_02062868(void *p);
extern void func_02056844(void *p);

#define PTR(p, off) (*(void **)((uint8_t *)(p) + (off)))
#define WORD(p, off) (*(uint32_t *)((uint8_t *)(p) + (off)))

void *func_0206407c(void *a0)
{
    uint8_t *obj = (uint8_t *)a0;
    uint32_t i;

    *(void **)obj = &data_020b16d8;
    func_02063bcc(obj);
    func_020642e8(obj, 1);

    for (i = 0; i < WORD(obj, 0x28); i++) {
        uint32_t *e = (uint32_t *)((uint8_t *)PTR(obj, 0x24) + i * 0x28);
        *e = (*e & 0xfffffcffu) | 0x200u;
    }

    if (WORD(obj, 0x38) & 1) {
        for (i = 0; i < WORD(obj, 0x28); i++) {
            void **arr = (void **)PTR(obj, 0x6c);
            void *p = arr[i];
            if (p != 0) {
                func_0205847c(PTR(p, 0x10));
            }
        }
        func_02056858(PTR(obj, 0x6c));
    } else {
        func_02063ba4(obj + 0x18, PTR(obj, 0x14));
    }

    if (WORD(obj, 0x38) & 2) {
        for (i = 0; i < WORD(obj, 0x28); i++) {
            void **arr = (void **)PTR(obj, 0x70);
            void *p = arr[i];
            if (p != 0) {
                func_0205fd04(PTR(PTR(PTR(obj, 0x14), 0x18), 8));
            }
        }
        func_02056858(PTR(obj, 0x70));
    } else {
        func_02063bbc(obj + 0x18, PTR(obj, 0x14));
    }

    if (func_02063558(obj + 0x18) != 0) {
        for (i = 0; i < WORD(obj, 0x28); i++) {
            void **arr = (void **)PTR(obj, 0x74);
            void *p = arr[i];
            if (p != 0) {
                func_0205ffd0(PTR(PTR(PTR(obj, 0x14), 0x18), 0x18));
                ((void **)PTR(obj, 0x74))[i] = 0;
            }
        }
        func_02056858(PTR(obj, 0x74));
    }

    func_02056858(PTR(obj, 0x68));
    func_02056858(PTR(obj, 0x60));

    if (PTR(obj, 0x1c) != 0 && WORD(obj, 0x28) != 0) {
        func_0205f898(PTR(obj, 0x1c), PTR(obj, 0x20));
    }

    func_02063530(obj + 0x18);
    func_02062868(obj);
    func_02056844(obj);
    return obj;
}
