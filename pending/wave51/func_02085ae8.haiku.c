#include "ffc/types.h"

extern int func_0208619c(void *a, void *b);
extern uint32_t func_02088978(void);
extern void func_0208898c(uint32_t s);
extern int func_020862c8(void *a, void *b, uint32_t c);
extern void func_02087058(void *p);
extern uint32_t data_02141400[];
extern uint32_t data_02141450[];

int func_02085ae8(void *a, void *b, uint32_t c, uint32_t d, uint32_t e) {
    uint32_t s;
    if (func_0208619c(a, b) == 0) {
        return 4;
    }
    s = func_02088978();
    if (data_02141400[0] != 0) {
        func_0208898c(s);
        return 1;
    }
    data_02141400[0] = 1;
    func_0208898c(s);
    data_02141400[1] = d;
    data_02141400[2] = e;
    data_02141400[0x10] = 0;
    s = func_02088978();
    if (func_020862c8(a, b, c) == 1) {
        func_0208898c(s);
        return 0;
    }
    data_02141400[0] = 0;
    func_0208898c(s);
    func_02087058(data_02141450);
    return 3;
}
