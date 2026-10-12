#include "ffc/types.h"

typedef struct {
    uint8_t pad[0x50];
    uint32_t f50;
    uint32_t f54;
} DataS;

extern void func_02088978(void);
extern void func_0208898c(void);
extern void func_020890f8(void);
extern int func_020891f4(int a, int b);
extern void func_020891a8(int a, void *b);
extern void func_02084a0c(int a, void *b, int c);
extern int func_02088280(void);
extern void func_0208823c(void);
extern int func_020883d8(void);
extern void func_020883b4(void);
extern void func_020883e4(void *p);
extern void func_020861b0(void);
extern uint32_t data_021413c0;
extern DataS data_02141400;
extern uint32_t data_0214140c;

void func_02085a68(void) {
    uint32_t *p;
    int n;
    func_02088978();
    p = &data_021413c0;
    if (*p != 0) {
        func_0208898c();
        return;
    }
    *p = 1;
    func_0208898c();
    func_020890f8();
    n = 4;
    if (func_020891f4(n, 1) != 0) {
        func_020891a8(n, (void *)func_020861b0);
        func_02084a0c(0, &data_02141400, 0x58);
        if (func_02088280() == 0) {
            func_0208823c();
        }
        if (func_020883d8() == 0) {
            func_020883b4();
        }
        func_020883e4(&data_0214140c);
    }
    data_02141400.f54 = 0;
    data_02141400.f50 = 0;
    *p = 2;
}
