#include "ffc/types.h"
typedef struct N { uint8_t pad[0x20]; struct N *next; } N;
typedef struct B { uint8_t pad[0x5c4]; N *head; } B;
extern void func_ov001_0217b7a8(void *p, void *q);
void func_ov001_0217b7f4(B **self, N *node)
{ N *prev = 0; B *base = *self; N *cur = base->head; while (cur) { if (cur == node) { if (!prev) base->head = cur->next; else prev->next = node->next; func_ov001_0217b7a8(self, node); return; } prev = cur; cur = cur->next; } }
