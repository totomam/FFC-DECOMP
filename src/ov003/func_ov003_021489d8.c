
typedef signed char int8_t;
typedef unsigned char uint8_t;
typedef signed short int16_t;
typedef unsigned short uint16_t;
typedef signed int int32_t;
typedef unsigned int uint32_t;
typedef signed long long int64_t;
typedef unsigned long long uint64_t;
typedef unsigned int uintptr_t;
extern void func_02056c4c(void *p);
extern void func_02084b2c(void *dst, int val, int size);
extern void func_ov003_0214e1f8(void *p);
extern void *func_ov003_02153470(void *p);
extern void func_ov003_021534e4(void *p);
extern int func_020192f4(void *a, uint32_t b);
extern void func_0201cf34(void *a, uint32_t *b);
extern void *data_020b8e44;
extern void *data_020b93b8;
void func_ov003_021489d8(uint8_t *self, uint32_t arg)
{
  uint32_t tmp[0x26];
  uint32_t i;
  uint32_t j;
  int z;
  uint8_t *arr;
  void **vt;
  void *obj;
  func_02056c4c(*((void **) (self + 0x334)));
  func_02056c4c(*((void **) (self + 0x338)));
  func_02056c4c(*((void **) (self + 0x18c)));
  func_02056c4c(*((void **) (self + 0x190)));
  arr = self;
  arr = arr + 0x26c;
  for (i = 0; i < 5; i++)
  {
    j = 0;
    func_02084b2c(arr + (i * 0x14), j, 0x14);
  }

  j = 0;
  func_ov003_0214e1f8(self + 0x3d4);
  z = 0;
  for (; j < 5; j++)
  {
    func_02084b2c((self + 0x2d0) + (j * 0x14), z, 0x14);
  }

  func_ov003_0214e1f8(self + 0x3e0);
  *((uint32_t *) (self + 0x33c)) = z;
  *((uint32_t *) (self + 0x340)) = 1;
  *((uint32_t *) (self + 0x408)) = z;
  *((uint32_t *) func_ov003_02153470(*((void **) (self + 0x9c)))) = arg;
  func_ov003_021534e4(*((void **) (self + 0x9c)));
  if (func_020192f4(data_020b8e44, arg) == 0)
  {
    obj = *((void **) (self + 0x20c));
    vt = *((void ***) obj);
    ((void (*)(void *)) vt[0x2c / 4])(obj);
    func_0201cf34(data_020b93b8, tmp);
    uint32_t b = (tmp[7] << 27) >> 31;
    if (b == 0)
    {
      obj = *((void **) (self + 0x20c));
      vt = *((void ***) obj);
      ((void (*)(void *, int, int)) vt[0x38 / 4])(obj, 5, z);
      return;
    }
    if (b == 1)
    {
      obj = *((void **) (self + 0x20c));
      vt = *((void ***) obj);
      ((void (*)(void *, int, int)) vt[0x38 / 4])(obj, 4, z);
      return;
    }
  }
  else
  {
    obj = *((void **) (self + 0x20c));
    vt = *((void ***) obj);
    ((void (*)(void *)) vt[0x28 / 4])(obj);
  }
}
