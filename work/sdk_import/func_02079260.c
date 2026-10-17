/* From libntr libntrsystem/libraries/g2d/src/g2d_TextCanvas.c (thumb build): func_02079260 */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef signed char s8;
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
typedef u16 (*NNSiG2dSplitCharCallback)(const void ** ppChar);
typedef struct NNSG2dFont {
NNSG2dFontInformation * pRes;
NNSiG2dSplitCharCallback cbCharSpliter;
} NNSG2dFont;
typedef struct NNSG2dGlyph {
const NNSG2dCharWidths * pWidths;
const u8 * image;
} NNSG2dGlyph;
inline NNSiG2dSplitCharCallback NNSi_G2dFontGetSpliter (const NNSG2dFont * pFont)
{
((void) 0) ;
return pFont->cbCharSpliter;
}
struct NNSG2dCharCanvas;
typedef void (*NNSiG2dDrawGlyphFunc)(const struct NNSG2dCharCanvas * pCC, const NNSG2dFont * pFont, int x, int y, int cl, const NNSG2dGlyph * pGlyph);
typedef void (*NNSiG2dClearFunc)(const struct NNSG2dCharCanvas * pCC, int cl);
typedef void (*NNSiG2dClearAreaFunc)(const struct NNSG2dCharCanvas * pCC, int cl, int x, int y, int w, int h);
typedef struct NNSiG2dCharCanvasVTable {
NNSiG2dDrawGlyphFunc pDrawGlyph;
NNSiG2dClearFunc pClear;
NNSiG2dClearAreaFunc pClearArea;
} NNSiG2dCharCanvasVTable;
typedef struct NNSG2dCharCanvas {
u8 * charBase;
int areaWidth;
int areaHeight;
u8 dstBpp;
u8 reserved[3];
u32 param;
const NNSiG2dCharCanvasVTable * vtable;
} NNSG2dCharCanvas;
int func_02078de4(const NNSG2dCharCanvas * pCC, const NNSG2dFont * pFont, int x, int y, int cl, u16 ccode);
typedef struct NNSG2dTextCanvas {
const NNSG2dCharCanvas * pCanvas;
const NNSG2dFont * pFont;
int hSpace;
int vSpace;
} NNSG2dTextCanvas;
typedef struct NNSiG2dTextDirection {
s8 x;
s8 y;
} NNSiG2dTextDirection;
void func_02079260(const NNSG2dTextCanvas * pTxn, int x, int y, int cl, const void * str, const void ** pPos
, NNSiG2dTextDirection d
);
void func_02079260 (const NNSG2dTextCanvas * pTxn, int x, int y, int cl, const void * str, const void ** pPos
, NNSiG2dTextDirection d
)
{
const void * pos;
int charSpace;
const NNSG2dFont * pFont;
u16 c;
NNSiG2dSplitCharCallback getNextChar;
((void) 0) ;
((void) 0); ;
((void) 0) ;
((void) 0) ;
charSpace = pTxn->hSpace;
pFont = pTxn->pFont;
pos = str;
getNextChar = NNSi_G2dFontGetSpliter(pFont);
while ((c = getNextChar((const void **)&pos)) != 0) {
if (c == '\n') {
break;
}
{
const int w = func_02078de4(pTxn->pCanvas, pFont, x, y, cl, c) + charSpace;
x += w * d.x;
y += w * d.y;
}
}
if (pPos != 0L ) {
*pPos = (c == '\n') ? pos: 0L ;
}
}
