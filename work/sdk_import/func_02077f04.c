/* From libntr libntrsystem/libraries/fnd/src/expheap.c (thumb build): func_02077f04 */
typedef unsigned short int u16;
typedef unsigned long u32;
typedef int BOOL;
typedef struct NNSiFndExpHeapMBlockHead NNSiFndExpHeapMBlockHead;
struct NNSiFndExpHeapMBlockHead {
u16 signature;
u16 attribute;
u32 blockSize;
NNSiFndExpHeapMBlockHead * pMBHeadPrev;
NNSiFndExpHeapMBlockHead * pMBHeadNext;
};
typedef struct NNSiFndExpMBlockList NNSiFndExpMBlockList;
struct NNSiFndExpMBlockList {
NNSiFndExpHeapMBlockHead * head;
NNSiFndExpHeapMBlockHead * tail;
};
typedef struct NNSiFndExpHeapHead NNSiFndExpHeapHead;
struct NNSiFndExpHeapHead {
NNSiFndExpMBlockList mbFreeList;
NNSiFndExpMBlockList mbUsedList;
u16 groupID;
u16 feature;
};
typedef u32 NNSiUIntPtr;
inline NNSiUIntPtr NNSiGetUIntPtr(const void* ptr)
{
return (NNSiUIntPtr)ptr;
}
inline u32 GetOffsetFromPtr(const void* start, const void* end)
{
return NNSiGetUIntPtr(end) - NNSiGetUIntPtr(start);
}
inline void* AddU32ToPtr(void* ptr, u32 val)
{
return (void*)( NNSiGetUIntPtr(ptr) + val );
}
typedef struct NNSiMemRegion NNSiMemRegion;
struct NNSiMemRegion {
void * start;
void * end;
};
static inline void * GetMemPtrForMBlock (NNSiFndExpHeapMBlockHead * pMBlkHd)
{
return AddU32ToPtr(pMBlkHd, sizeof(NNSiFndExpHeapMBlockHead));
}
static inline void * GetMBlockEndAddr (NNSiFndExpHeapMBlockHead * pMBHead)
{
return AddU32ToPtr(GetMemPtrForMBlock(pMBHead), pMBHead->blockSize);
}
NNSiFndExpHeapMBlockHead * func_02077c6c (NNSiFndExpMBlockList * list, NNSiFndExpHeapMBlockHead * block);
NNSiFndExpHeapMBlockHead * func_02077c88 (NNSiFndExpMBlockList * list, NNSiFndExpHeapMBlockHead * target, NNSiFndExpHeapMBlockHead * prev);
NNSiFndExpHeapMBlockHead * func_02077ca8 (const NNSiMemRegion * pRegion, u16 signature);
static inline NNSiFndExpHeapMBlockHead * InitFreeMBlock (const NNSiMemRegion * pRegion)
{
return func_02077ca8(pRegion, ('FR') );
}
BOOL func_02077f04 (NNSiFndExpHeapHead * pEHHead, const NNSiMemRegion * pRegion)
{
NNSiFndExpHeapMBlockHead * pBlkPrFree = 0L ;
NNSiMemRegion freeRgn = *pRegion;
{
NNSiFndExpHeapMBlockHead * pBlk;
for (pBlk = pEHHead->mbFreeList.head; pBlk; pBlk = pBlk->pMBHeadNext)
{
if (pBlk < pRegion->start) {
pBlkPrFree = pBlk;
continue;
}
if (pBlk == pRegion->end) {
freeRgn.end = GetMBlockEndAddr(pBlk);
(void)func_02077c6c(&pEHHead->mbFreeList, pBlk);
((void) 0) ;
}
break;
}
}
if (pBlkPrFree && GetMBlockEndAddr(pBlkPrFree) == pRegion->start) {
freeRgn.start = pBlkPrFree;
pBlkPrFree = func_02077c6c(&pEHHead->mbFreeList, pBlkPrFree);
}
if (GetOffsetFromPtr(freeRgn.start, freeRgn.end) < sizeof(NNSiFndExpHeapMBlockHead)) {
return 0 ;
}
((void) 0) ;
(void)func_02077c88(&pEHHead->mbFreeList, InitFreeMBlock(&freeRgn), pBlkPrFree);
return 1 ;
}
