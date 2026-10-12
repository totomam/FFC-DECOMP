#include "ffc/types.h"

extern uint32_t func_ov000_021456f8(void *p, uint32_t n, void *q, uint32_t k);
extern uint32_t func_02088978(void);
extern void func_02084e04(void *dst, void *src, uint32_t n);
extern void func_020870a0(void *object);
extern void func_0208898c(uint32_t saved);
extern uint32_t data_02141510[];

#define BS16(x) ((uint16_t)((((uint16_t)(x)) >> 8) | (((uint16_t)(x)) << 8)))
#define U16(p, off) (*(uint16_t *)((uint8_t *)(p) + (off)))
#define U32(p, off) (*(uint32_t *)((uint8_t *)(p) + (off)))
#define PTR(p, off) (*(uint8_t **)((uint8_t *)(p) + (off)))

void func_ov000_02147260(uint8_t *a, uint8_t *b, uint32_t size)
{
    uint32_t saved;
    uint8_t *node;
    uint8_t *obj;
    uint32_t v;

    if (size < 8) {
        return;
    }
    if (U16(b, 6) != 0) {
        if (func_ov000_021456f8(b, size, a, 0x11) != 0) {
            return;
        }
    }

    saved = func_02088978();
    node = (uint8_t *)data_02141510[2];
    while (node != 0) {
        obj = PTR(node, 0xa4);
        if (obj != 0 && *(uint8_t **)obj != 0 && obj[8] == 10
            && U16(obj, 0xa) == BS16(U16(b, 2))
            && (U16(obj, 0x18) == 0 || U16(obj, 0x18) == BS16(U16(b, 0)))) {
            v = U32(obj, 0x1c);
            if (v == 0 || v == 0xffffffff
                || v == ((((uint32_t)BS16(U16(a, 0xc))) << 16) | BS16(U16(a, 0xe)))) {
                U32(obj, 0x14) = (((uint32_t)BS16(U16(a, 0x10))) << 16) | BS16(U16(a, 0x12));
                if (U32(obj, 0x1c) == 0) {
                    U32(obj, 0x1c) = (((uint32_t)BS16(U16(a, 0xc))) << 16) | BS16(U16(a, 0xe));
                    U16(obj, 0x18) = BS16(U16(b, 0));
                }
                if (U32(obj, 0x50) == 0) {
                    size -= 8;
                    if (size > U32(obj, 0x48)) {
                        U32(obj, 0x50) = U32(obj, 0x48);
                    } else {
                        U32(obj, 0x50) = size;
                    }
                    b += 8;
                    func_02084e04(b, (void *)U32(obj, 0x4c), U32(obj, 0x50));
                    if (U32(obj, 0x4) == 3) {
                        U32(obj, 0x4) = 0;
                        func_020870a0(*(void **)obj);
                    } else {
                        uint32_t (*fn)(void *, uint32_t, void *);
                        fn = (uint32_t (*)(void *, uint32_t, void *))U32(obj, 0x44);
                        if (fn != 0) {
                            if (fn((void *)U32(obj, 0x4c), U32(obj, 0x50), obj) != 0) {
                                U32(obj, 0x50) = 0;
                            }
                        }
                    }
                }
                break;
            }
        }
        node = PTR(node, 0x68);
    }
    func_0208898c(saved);
}
