#include "ffc/types.h"
extern void *func_ov000_02165744(void);
extern int func_ov000_02165798(void *p);
typedef struct { uint32_t pad[3]; uint32_t **tab; } Obj;

uint32_t func_ov001_02182390(void){
 int i; uint32_t ret = 0; Obj *o = (Obj*)func_ov000_02165744();
 if (!o) return ret;
 for (i=0;;i++){ uint32_t *e=o->tab[i]; if(!e) break; if(*e!=0x100007f){ ret=*e; if(func_ov000_02165798(e)) break; } }
 return ret; }
