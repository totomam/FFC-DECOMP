/* From libntr libntrsystem/libraries/g2d/src/g2d_TextCanvas.c (thumb build): func_020792dc */
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
typedef char NNSG2dChar;
typedef struct NNSG2dFont {
NNSG2dFontInformation * pRes;
NNSiG2dSplitCharCallback cbCharSpliter;
} NNSG2dFont;
typedef struct NNSG2dGlyph {
const NNSG2dCharWidths * pWidths;
const u8 * image;
} NNSG2dGlyph;
inline s8 NNS_G2dFontGetLineFeed (const NNSG2dFont * pFont)
{
((void) 0) ;
return pFont->pRes->linefeed;
}
int func_02078400(const NNSG2dFont * pFont, int hSpace, const void * str, const void ** pPos);
inline int NNS_G2dFontGetStringWidth (const NNSG2dFont * pFont, int hSpace, const NNSG2dChar * str, const NNSG2dChar ** pPos)
{
return func_02078400(pFont, hSpace, str, (const void **)pPos);
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
typedef enum NNSG2dHorizontalAlign {
NNS_G2D_HORIZONTALALIGN_LEFT = 0x200,
NNS_G2D_HORIZONTALALIGN_CENTER = 0x400,
NNS_G2D_HORIZONTALALIGN_RIGHT = 0x800
} NNSG2dHorizontalAlign;
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
void func_020792dc(const NNSG2dTextCanvas * pTxn, int x, int y, int areaWidth, int cl, u32 flags, const void * txt
, NNSiG2dTextDirection d
);
inline int NNS_G2dTextCanvasGetStringWidth (const NNSG2dTextCanvas * pTxn, const NNSG2dChar * str, const NNSG2dChar ** pPos)
{
return NNS_G2dFontGetStringWidth(
pTxn->pFont,
pTxn->hSpace,
str,
pPos);
}
void func_02079260 (const NNSG2dTextCanvas * pTxn, int x, int y, int cl, const void * str, const void ** pPos
, NNSiG2dTextDirection d
);
void func_020792dc (const NNSG2dTextCanvas * pTxn, int x, int y, int areaWidth, int cl, u32 flags, const void * txt
, NNSiG2dTextDirection d
)
{
const void * str;
int linefeed;
int linefeedx;
int linefeedy;
int line;
int charSpace;
const NNSG2dFont * pFont;
int px, py;
((void) 0) ;
((void) 0); ;
((void) 0) ;
((void) 0) ;
charSpace = pTxn->hSpace;
linefeed = NNS_G2dFontGetLineFeed(pTxn->pFont) + pTxn->vSpace;
pFont = pTxn->pFont;
str = txt;
linefeedx = linefeed * -d.y;
linefeedy = linefeed * d.x;
line = 0;
while (str != 0L ) {
px = x + line * linefeedx;
py = y + line * linefeedy;
if (flags & NNS_G2D_HORIZONTALALIGN_RIGHT) {
const int width = NNS_G2dTextCanvasGetStringWidth(pTxn, str, 0L );
const int offset = areaWidth - width;
px += offset * d.x;
py += offset * d.y;
} else if (flags & NNS_G2D_HORIZONTALALIGN_CENTER) {
const int width = NNS_G2dTextCanvasGetStringWidth(pTxn, str, 0L );
const int offset = (areaWidth + 1) / 2 - (width + 1) / 2;
px += offset * d.x;
py += offset * d.y;
}
func_02079260(pTxn, px, py, cl, str, &str, d);
line++;
}
}
