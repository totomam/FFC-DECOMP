#include "ffc/types.h"

extern void *data_0209de50;
extern void *data_0209de4c;
extern void *func_0203c0e4(void *a, void *b);
extern void func_02056bc0(void *object, void *node);

void func_ov010_021bd7a4(uint8_t *p) {
    void *n = func_0203c0e4(data_0209de50, data_0209de4c);
    func_02056bc0(p + 0x14, n);
}
