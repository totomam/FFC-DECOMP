/* cflags: -lang c++ */
#include "ffc/types.h"
extern "C" {
extern void func_0208763c(void *p);
extern void func_02087678(void *p);
extern void func_02056c4c(void *p);
struct Guard { void *p; int en; 
  Guard(void *q, int e) : p(q), en(e) { if (en) func_0208763c(p); }
  ~Guard() { if (en) func_02087678(p); } };
void func_ov007_021ae044(uint8_t *p);
void func_ov007_021ae044(uint8_t *p)
{
    uint8_t *r5 = p;
    uint8_t *r4 = r5 + 0x14;
    int flag;
    {
        Guard g(r4 + 0x1c, r4[0x12]);
        flag = (*(void **)(r4 + 0x14) == 0);
    }
    if (!flag) func_02056c4c(r5 + 0x14);
    *(uint32_t *)*(void **)(r5 + 0x88) = 0;
}
}
