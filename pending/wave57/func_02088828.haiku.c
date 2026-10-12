#include "ffc/types.h"
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;

typedef struct Node {
    void (*cb)(void *);
    void *arg;
    u32 pad8;
    u32 id;
    s16 line;
    u8 pad12[0x6];
    u8 pad14[0x8];
    u32 f1c;
    u32 pad20;
    u32 f24;
} Node;

extern u32 func_02086700(u32);
extern u32 func_0208893c(u32);
extern s32 func_02088908(Node *, u32, u32);
extern void func_020887cc(Node *);
extern void func_02086724(u32);
extern void func_020886e0(Node *);
extern void func_02088670(Node *);
extern u8 data_02fe0000[];
extern u8 data_02141874[];

void func_02088828(void) {
    volatile u16 *r6 = (volatile u16 *)0x4000004;
    Node *n;
    u32 m = 4;
    u32 r7;
    u32 line;
    void (*cb)(void *);
    s32 k;
    u16 d;

    func_02086700(m);
    d = *r6;
    *r6 = d & 0xffdf;
    *(u32 *)(data_02fe0000 + 0x3ff8) |= m;
    d = *r6;
    func_0208893c((((d >> 8) & 0xff) | ((d << 1) & 0x100)) - 1);

    n = *(Node **)(data_02141874 + 0xc);
    while (n != 0) {
        line = r6[1];
        r7 = func_0208893c(line);
        k = func_02088908(n, r7, line);
        switch (k) {
        case 0:
            func_020887cc(n);
            if (n->line != (s16)r6[1] || n->id != r7) {
                return;
            }
            func_02086700(4);
            *r6 = *r6 & 0xffdf;
            func_02086724(4);
            /* fall through */
        case 1:
            cb = n->cb;
            func_020886e0(n);
            n->cb = 0;
            if (cb != 0) {
                cb(n->arg);
            }
            if (n->f1c != 0 && n->f24 == 0) {
                n->cb = cb;
            } else {
                n = *(Node **)(data_02141874 + 0xc);
                continue;
            }
            break;
        case 2:
            func_020886e0(n);
            break;
        default:
            n = *(Node **)(data_02141874 + 0xc);
            continue;
        }
        n->id = *(u32 *)(data_02141874 + 8) + 1;
        func_02088670(n);
        n = *(Node **)(data_02141874 + 0xc);
    }
}
