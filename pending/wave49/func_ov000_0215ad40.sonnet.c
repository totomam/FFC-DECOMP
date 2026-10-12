#include "ffc/types.h"

typedef struct G { uint32_t a; uint8_t *p; } G;

extern G data_ov000_02170064;
extern void func_ov000_02153398(void);
extern int func_ov000_02159000(void);
extern int func_ov000_02164e1c(void);
extern void func_ov001_021758b4(uint8_t *a, uint32_t b, int c, int d);
extern int func_ov000_0215b7f4(void);
extern void func_ov001_02175910(uint8_t *a, int b, void *fn, int c);
extern void func_ov000_0215b7a4(int x);
extern int func_ov000_0215a578(void);
extern void func_ov000_0215a64c(int x, int y);
extern void func_ov000_0215a59c(void);
extern void func_ov000_0215968c(void);
extern void func_ov000_0215cb0c(int x);
extern void func_ov000_021641b0(void);
extern void func_ov001_021840ac(void);
extern void func_ov000_0215ba34(void);
extern void func_ov000_0215ba60(void);
extern void func_ov000_02159904(void);
extern void func_ov000_021598d8(void);
extern void func_ov000_02159924(void);

#define U32(p, off) (*(uint32_t *)((p) + (off)))
#define U8(p, off) (*(uint8_t *)((p) + (off)))

void func_ov000_0215ad40(void)
{
    uint8_t *p;
    int r;

    func_ov000_02153398();
    if (data_ov000_02170064.p == 0) return;
    if (U32(data_ov000_02170064.p, 0x24) == 0) return;
    if (func_ov000_02159000() != 0) return;

    switch (U32(data_ov000_02170064.p, 0x24)) {
    case 1:
        switch (func_ov000_02164e1c()) {
        case 1:{
            p = data_ov000_02170064.p;
            func_ov001_021758b4(p + 0x1c, U32(p, 0x98), 0x10, 0xb);
            if (func_ov000_0215b7f4() != 0) return;
            p = data_ov000_02170064.p;
            func_ov001_02175910(p + 0x1c, 0, func_ov000_0215ba34, 0);
            if (func_ov000_0215b7f4() != 0) return;
            p = data_ov000_02170064.p;
            func_ov001_02175910(p + 0x1c, 3, func_ov000_0215ba60, 0);
            if (func_ov000_0215b7f4() != 0) return;
            p = data_ov000_02170064.p;
            func_ov001_02175910(p + 0x1c, 7, func_ov000_02159904, 0);
            if (func_ov000_0215b7f4() != 0) return;
            p = data_ov000_02170064.p;
            func_ov001_02175910(p + 0x1c, 1, func_ov000_021598d8, 0);
            if (func_ov000_0215b7f4() != 0) return;
            p = data_ov000_02170064.p;
            func_ov001_02175910(p + 0x1c, 2, func_ov000_02159924, 0);
            if (func_ov000_0215b7f4() != 0) return;
            func_ov000_0215b7a4(2);
            if (func_ov000_0215a578() == 0) {
                func_ov000_0215a64c(2, (int)0xffffb17c);
            }
        break;}
        case 2:{
            func_ov000_0215a64c(3, (int)0xffffb172);
            return;}
        case 3:{
            func_ov000_0215a64c(4, (int)0xffffb17b);
            return;}
        }
        break;
    case 2:
        func_ov000_0215a59c();
        break;
    case 3:
        func_ov000_0215968c();
        func_ov000_0215cb0c(0);
        break;
    case 4:
        func_ov000_0215cb0c(1);
        func_ov000_0215968c();
        break;
    case 5:
        func_ov000_021641b0();
        func_ov000_0215968c();
        p = data_ov000_02170064.p;
        if (U8(p, 0x364) == 2 || *(volatile uint8_t *)(p + 0x364) == 3) {
            func_ov000_0215cb0c(1);
        } else if (U32(p, 0) != 0) {
            func_ov000_0215cb0c(0);
        }
        break;
    }
    p = data_ov000_02170064.p;
    if (U8(p, 0x39c) == 1) {
        if (U32(p, 0x360) != 0) {
            func_ov001_021840ac();
            p = data_ov000_02170064.p;
            *(uint32_t *)(p + 0x360) = 0;
        }
        p = data_ov000_02170064.p;
        U8(p, 0x39c) = 0;
    }
}
