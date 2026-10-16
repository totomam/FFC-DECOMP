#include "ffc/types.h"
typedef struct { uint32_t a; uint32_t flag; uint64_t cnt; } S;
extern S data_02141858;
extern void func_0208668c(int a, void (*f)(void), int c);
void func_0208828c(void);
void func_0208828c(void)
{
    S *s = &data_02141858;
    s->cnt++;
    if (s->flag != 0) {
        *(volatile uint16_t *)0x4000102 = 0;
        *(volatile uint16_t *)0x4000100 = 0;
        *(volatile uint16_t *)0x4000102 = 0xc1;
        s->flag = 0;
    }
    func_0208668c(0, (void (*)(void))((uint32_t)func_0208828c & ~1u), 0);
}
