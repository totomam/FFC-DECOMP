
typedef signed char int8_t;
typedef unsigned char uint8_t;
typedef signed short int16_t;
typedef unsigned short uint16_t;
typedef signed int int32_t;
typedef unsigned int uint32_t;
typedef signed long long int64_t;
typedef unsigned long long uint64_t;
typedef unsigned int uintptr_t;
extern void func_02084b2c(void *p, uint32_t v, uint32_t n);
extern void func_0201ce28(void *a, void *b);
extern void *func_02052d90(void *mar, uint32_t index);
extern int func_0201c00c(void *a, uint16_t b);
extern void func_0202a9ac(void *cursor);
extern void *data_020b93b8;
typedef struct 
{
  uint32_t pad;
  void *mar;
  uint32_t idx;
} X;
void func_02043608(uint8_t *self)
{
  uint32_t head;
  uint32_t cursor;
  uint32_t i;
  uint32_t j;
  uint32_t v;
  uint32_t n;
  uint8_t *mar;
  uint8_t *e;
  uint8_t *sub;
  if (self[0x133] == 0)
  {
    return;
  }
  self[0x133] = 0;
  func_02084b2c(*((void **) (self + 0xd4)), 0, ((*((uint32_t *) (self + 0xd0))) + 7) >> 3);
  func_0201ce28(data_020b93b8, self + 0xc8);
  cursor = *((uint32_t *) (self + 0x9c));
  head = (uint32_t) (self + 0x94);
  while (cursor != head)
  {
    for (i = 0; i < ((uint32_t *) func_02052d90(((X *) (cursor + 0x10))->mar, ((X *) (cursor + 0x10))->idx))[1]; i++)
    {
      mar = func_02052d90(((X *) (cursor + 0x10))->mar, ((X *) (cursor + 0x10))->idx);
      e = mar + ((uint32_t *) (mar + (*((uint32_t *) (mar + 8)))))[i];
      if (func_0201c00c(data_020b93b8, *((uint16_t *) (e + 2))) == 0)
      {
        n = *((uint32_t *) (e + 4));
        for (j = 0; j < (*((uint32_t *) (e + 4))); j++)
        {
          sub = e + ((uint32_t *) (e + (*((uint32_t *) (e + 8)))))[j];
          if (((*((uint16_t *) sub)) == 5) && ((*((uint32_t *) (sub + 4))) <= 1))
          {
            v = *((uint32_t *) (sub + (*((uint32_t *) (sub + 8)))));
            ((uint8_t *) (*((void **) (self + 0xd4))))[v >> 3] |= (uint8_t) (1 << (v & 7));
            break;
          }
        }

      }
    }

    func_0202a9ac(&cursor);
  }

}
