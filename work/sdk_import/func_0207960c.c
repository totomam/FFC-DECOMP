/* From libntr libntrsystem/libraries/g2d/src/load/g2d_NFT_load.c (thumb build): func_0207960c */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef signed char s8;
typedef struct NNSG2dBinaryFileHeader {
u32 signature;
u16 byteOrder;
u16 version;
u32 fileSize;
u16 headerSize;
u16 dataBlocks;
} NNSG2dBinaryFileHeader;
typedef struct NNSG2dBinaryBlockHeader {
u32 kind;
u32 size;
} NNSG2dBinaryBlockHeader;
typedef struct NNSG2dCharWidths {
s8 left;
u8 glyphWidth;
s8 charWidth;
} NNSG2dCharWidths;
typedef struct NNSG2dFontGlyph {
u8 cellWidth;
u8 cellHeight;
u16 cellSize;
s8 baselinePos;
u8 maxCharWidth;
u8 bpp;
u8 flags;
u8 glyphTable[];
} NNSG2dFontGlyph;
typedef struct NNSG2dFontWidth {
u16 indexBegin;
u16 indexEnd;
struct NNSG2dFontWidth * pNext;
NNSG2dCharWidths widthTable[];
} NNSG2dFontWidth;
typedef struct NNSG2dFontCodeMap {
u16 ccodeBegin;
u16 ccodeEnd;
u16 mappingMethod;
u16 reserved;
struct NNSG2dFontCodeMap * pNext;
u16 mapInfo[];
} NNSG2dFontCodeMap;
typedef struct NNSG2dFontInformation {
u8 fontType;
s8 linefeed;
u16 alterCharIndex;
NNSG2dCharWidths defaultWidth;
u8 encoding;
NNSG2dFontGlyph * pGlyph;
NNSG2dFontWidth * pWidth;
NNSG2dFontCodeMap * pMap;
} NNSG2dFontInformation;
void func_0207960c(NNSG2dBinaryFileHeader * pHeader);
static void inline ResolveOffset (void ** ppOffset, void * pBase)
{
*ppOffset = (void *)(*(u32 *)ppOffset + (u32)pBase);
}
void func_0207960c (NNSG2dBinaryFileHeader * pHeader)
{
NNSG2dBinaryBlockHeader * pBlock;
NNSG2dFontInformation * pInfo = 0L ;
((void) 0); ;
{
int nBlocks = 0;
pBlock = (NNSG2dBinaryBlockHeader *)((u8 *)pHeader + pHeader->headerSize);
while (nBlocks < pHeader->dataBlocks) {
switch (pBlock->kind) {
case (u32)'FINF' :
((void) 0) ;
{
pInfo = (NNSG2dFontInformation *)((u8 *)pBlock + sizeof(*pBlock));
((void) 0) ;
((void) 0) ;
ResolveOffset((void **)&(pInfo->pGlyph), pHeader);
((void) 0);
if (pInfo->pWidth != 0L ) {
ResolveOffset((void **)&(pInfo->pWidth), pHeader);
((void) 0);
}
if (pInfo->pMap != 0L ) {
ResolveOffset((void **)&(pInfo->pMap), pHeader);
((void) 0);
}
}
break;
case (u32)'CGLP' :
{
NNSG2dFontGlyph * pGlyph = (NNSG2dFontGlyph *)((u8 *)pBlock + sizeof(*pBlock));
((void) 0) ;
((void) 0) ;
((void) 0) ;
((void) 0) ;
}
break;
case (u32)'CWDH' :
{
NNSG2dFontWidth * pWidth = (NNSG2dFontWidth *)((u8 *)pBlock + sizeof(*pBlock));
((void) 0) ;
if (pWidth->pNext != 0L ) {
ResolveOffset((void **)&(pWidth->pNext), pHeader);
((void) 0);
}
}
break;
case (u32)'CMAP' :
{
NNSG2dFontCodeMap * pMap = (NNSG2dFontCodeMap *)((u8 *)pBlock + sizeof(*pBlock));
((void) 0) ;
((void) 0) ;
if (pMap->pNext != 0L ) {
ResolveOffset((void **)&(pMap->pNext), pHeader);
((void) 0);
}
}
break;
default:
((void) 0) ;
break;
}
pBlock = (NNSG2dBinaryBlockHeader *)((u8 *)pBlock + pBlock->size);
nBlocks++;
}
}
((void) 0) ;
((void) 0) ;
((void) 0) ;
}
