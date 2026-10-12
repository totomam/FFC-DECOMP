#include "ffc/types.h"

extern void func_0208eb4c(void);
extern void func_020890f8(void);
extern int32_t func_020891f4(int32_t a, int32_t b);
extern void func_020891a8(int32_t a, void (*fn)(void));
extern void func_0208edd8(void);
extern void func_0208ef94(void *p);
extern void func_0208ecf8(int32_t a);
extern void func_0208ef24(void);
extern void func_0208ef40(void);
extern void func_0208ef88(void);
extern uint32_t data_021440c8[];
extern uint32_t data_021441c0[];

void func_0208ed60(void) {
    if (data_021440c8[2] != 0) {
        return;
    }
    data_021440c8[2] = 1;
    func_0208eb4c();
    data_021440c8[3] = 0;
    func_020890f8();
    while (func_020891f4(13, 1) == 0) {
    }
    func_020891a8(13, func_0208ef24);
    func_0208edd8();
    func_020891a8(13, 0);
    func_020891a8(13, func_0208ef40);
    data_021440c8[6] = 0;
    func_0208ef94(data_021441c0);
    func_020891a8(0x11, func_0208ef88);
    func_0208ecf8(0);
}
