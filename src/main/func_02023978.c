#include "ffc/types.h"

extern void func_02023e0c(void *p);
extern void func_02024108(void *p);
extern void func_02024c80(void *p);
extern void func_020258a0(void *p);
extern uint8_t data_020ad80c[];

void *func_02023978(void *self) {
    uint8_t *p = (uint8_t *)self;
    *(uint8_t **)self = data_020ad80c;
    func_02023e0c(self);
    func_02024108(self);
    func_02024c80(self);
    func_020258a0(p + 0x194);
    return self;
}
