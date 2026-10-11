#include "ffc/types.h"

typedef struct {
    uint32_t f0;
    uint32_t flag;
    uint64_t cnt;
} S;

extern S data_02141858;
extern void func_0208828c(void);
extern void func_0208668c(uint32_t a, void *b, uint32_t c);

void func_0208828c(void) {
    data_02141858.cnt += 1;
    if (data_02141858.flag != 0) {
        *(volatile uint16_t *)0x4000102 = 0;
        *(volatile uint16_t *)0x4000100 = 0;
        *(volatile uint16_t *)0x4000102 = 0xc1;
        data_02141858.flag = 0;
    }
    func_0208668c(0, (void *)func_0208828c, 0);
}
