#include "ffc/types.h"
extern int func_02088978(void);
extern void func_0208898c(int);
typedef struct { uint32_t a; uint8_t *p; } S;
extern S data_ov000_0216e214;
uint8_t func_ov000_0214f964(void){ int t = func_02088978(); S *d=&data_ov000_0216e214; uint8_t r=0; uint8_t*q=d->p; if(q){r=q[0x12de];} func_0208898c(t); return r; }
