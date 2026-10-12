#include "ffc/types.h"

extern void func_02008500(void);
extern int func_02008530(void);
extern void func_02008510(void);
extern int func_02008520(void);
extern int16_t *func_02008550(void);
extern void func_02007ebc(int a, int b, int c);
extern void func_020080d0(int a, int b);
extern void func_02008284(int a, int b, int c, int d);
extern void func_02008328(int a);
extern void func_020081b8(int a);
extern void func_020081c0(int a);
extern void func_020081c8(int a);
extern void func_02008540(void);
extern void func_020084f0(void);
extern void func_02008560(void);

void func_02007c7c(void) {
    int16_t *p;
    func_02008500();
    if (func_02008530() != 0) {
        return;
    }
    do {
        func_02008510();
        if (func_02008520() == 0) {
            p = func_02008550();
            switch (p[0]) {
            case 0:
                func_02007ebc(p[1], p[2], 0);
                break;
            case 1:
                func_020080d0(p[1], p[2]);
                break;
            case 2:
                func_02008284(p[1], p[2], p[3], p[4]);
                break;
            case 3:
                func_02008328(p[1]);
                break;
            case 4:
                func_020081b8(p[1]);
                break;
            case 5:
                func_020081c0(p[1]);
                break;
            case 6:
                func_020081c8(p[1]);
                break;
            default:
                break;
            }
            func_02008540();
            func_020084f0();
        } else {
            func_02008560();
        }
    } while (func_02008530() == 0);
}
