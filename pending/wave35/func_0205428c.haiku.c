#include "ffc/types.h"

extern uint32_t *data_0213df18;
extern void func_02060e88(void *p, uint32_t v);
extern void func_02060ea4(void *p, uint32_t v);
extern void func_02060ebc(void *p);
extern void func_02088a94(void *p);

void func_0205428c(void *p) {
    func_02060e88((void *)((uint32_t *)data_0213df18[8])[9], 1);
    func_02060ea4((void *)((uint32_t *)data_0213df18[8])[9], 0x10);
    func_02060ebc((void *)((uint32_t *)data_0213df18[8])[9]);
    func_02060e88((void *)((uint32_t *)data_0213df18[9])[9], 1);
    func_02060ea4((void *)((uint32_t *)data_0213df18[9])[9], 0x10);
    func_02060ebc((void *)((uint32_t *)data_0213df18[9])[9]);
    func_02088a94(p);
}
