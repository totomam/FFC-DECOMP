/* From libntr libntrsystem/libraries/g2d/src/g2d_CharCanvas.c (thumb build): func_02078880 */
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
inline u8 NNS_G2dFontGetCellHeight (const NNSG2dFont * pFont)
{
((void) 0) ;
return pFont->pRes->pGlyph->cellHeight;
}
inline u8 NNS_G2dFontGetCellWidth (const NNSG2dFont * pFont)
{
((void) 0) ;
return pFont->pRes->pGlyph->cellWidth;
}
inline u8 NNS_G2dFontGetBpp (const NNSG2dFont * pFont)
{
((void) 0) ;
return pFont->pRes->pGlyph->bpp;
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
typedef struct LC_INFO {
const u8 * dst;
const u8 * src;
int ofs_x;
int ofs_y;
int width;
int height;
int dsrc;
int srcBpp;
int dstBpp;
u32 cl;
} LC_INFO;
void func_02078880(const NNSG2dCharCanvas * pCC, const NNSG2dFont * pFont, int x, int y, int cl, const NNSG2dGlyph * pGlyph);
static inline int GetCharacterSize (const NNSG2dCharCanvas * pCC)
{
((void) 0) ;
return 8 * 8 * pCC->dstBpp / 8;
}
void func_020786d0 (LC_INFO * i);
void func_02078880 (const NNSG2dCharCanvas * pCC, const NNSG2dFont * pFont, int x, int y, int cl, const NNSG2dGlyph * pGlyph)
{
int ofs_x_base;
int ofs_x;
int ofs_y;
int ofs_x_end;
int ofs_y_end;
unsigned int nextLineOffset;
u8 * pChar;
u8 glyphWidth;
u8 charHeight;
int charSize;
((void) 0) ;
((void) 0) ;
((void) 0) ;
((void) 0) ;
((void) 0) ;
charSize = GetCharacterSize(pCC);
{
int chara_x_num;
int chara_y_num;
const unsigned int areaWidth = (unsigned int)pCC->areaWidth;
const unsigned int areaHeight = (unsigned int)pCC->areaHeight;
u8 * const charBase = pCC->charBase;
const NNSG2dCharWidths * const pWidth = pGlyph->pWidths;
unsigned int chara_x_begin;
unsigned int chara_x_last;
unsigned int chara_y_begin;
unsigned int chara_y_last;
glyphWidth = pWidth->glyphWidth;
charHeight = NNS_G2dFontGetCellHeight(pFont);
if ( glyphWidth <= 0 ) {
return;
}
if ((x + glyphWidth < 0) || (y + charHeight) < 0 ) {
return;
}
chara_x_begin = (x <= 0) ? 0: ((u32)x / 8 );
chara_y_begin = (y <= 0) ? 0: ((u32)y / 8 );
chara_x_last = (u32)(x + glyphWidth + (8 - 1)) / 8 ;
if ( chara_x_last >= areaWidth ) {
chara_x_last = areaWidth;
}
chara_y_last = (u32)(y + charHeight + (8 - 1)) / 8 ;
if ( chara_y_last >= areaHeight ) {
chara_y_last = areaHeight;
}
chara_x_num = (int)(chara_x_last - chara_x_begin);
chara_y_num = (int)(chara_y_last - chara_y_begin);
if ((chara_x_num < 0) || (chara_y_num < 0)) {
return;
}
pChar = charBase + (pCC->param * chara_y_begin + chara_x_begin) * charSize;
nextLineOffset = (pCC->param - chara_x_num) * charSize;
ofs_x_base = (x < 0) ? x: x & 0x7;
ofs_y = (y < 0) ? y: y & 0x7;
ofs_x_end = ofs_x_base - 8 * chara_x_num;
ofs_y_end = ofs_y - 8 * chara_y_num;
}
{
LC_INFO i;
i.src = pGlyph->image;
i.width = glyphWidth;
i.height = charHeight;
i.cl = (u32)(cl - 1);
i.srcBpp = NNS_G2dFontGetBpp(pFont);
i.dstBpp = pCC->dstBpp;
i.dsrc = NNS_G2dFontGetCellWidth(pFont) * i.srcBpp;
for ( ; ofs_y > ofs_y_end; ofs_y -= 8 ) {
i.ofs_y = ofs_y;
for (ofs_x = ofs_x_base; ofs_x > ofs_x_end; ofs_x -= 8 ) {
i.dst = pChar;
i.ofs_x = ofs_x;
func_020786d0(&i);
pChar += charSize;
}
pChar += nextLineOffset;
}
}
}
