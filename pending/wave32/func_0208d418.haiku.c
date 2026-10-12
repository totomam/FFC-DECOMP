#include "ffc/types.h"

typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef int s32;

extern void *func_0208ceec(void);
extern u32 func_0208cf38(u32 a, u32 b, u32 c);
extern void func_02087874(void *p, u32 n);

typedef struct Inner {
    u8 pad0[0xc];
    s32 f0c;
    u8 pad1[0x3c - 0x10];
    u16 f3c;
} Inner;

typedef struct Outer {
    u8 pad0[4];
    Inner *inner;
} Outer;

u32 func_0208d418(void) {
    Outer *o = (Outer *)func_0208ceec();
    if (func_0208cf38(2, 7, 8) != 0) {
        return 0;
    }
    func_02087874((u8 *)o->inner + 0xc, 4);
    if (o->inner->f0c == 1) {
        return 0;
    }
    func_02087874((u8 *)o->inner + 0x3c, 4);
    return (u32)((o->inner->f3c + 0x1f) & ~0x1f);
}
