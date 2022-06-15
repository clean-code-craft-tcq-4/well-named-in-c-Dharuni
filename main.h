typedef enum { WHITE, RED, BLACK, YELLOW, VIOLET } MajorColor;
 
typedef enum { BLUE, ORANGE, GREEN, BROWN, SLATE } MinorColor;

typedef struct {
    MajorColor majorColor;
    MinorColor minorColor;
} ColorPair;

extern ColorPair colorpairExtern;
extern MajorColor majorcolor;
extern MinorColor minorcolor;

const int MAX_COLORPAIR_NAME_CHARS = 16;

ColorPair GetColorFromPairNumber(int pairNumber);
int GetPairNumberFromColor(const ColorPair* colorPair);
void colorCodingReferenceManual(void);
void testNumberToPair(int pairNumber,MajorColor expectedMajor,MinorColor expectedMinor);
void testPairToNumber(MajorColor major,MinorColor minor,int expectedPairNumber);
void ColorPairToString(const ColorPair* colorPair, char* buffer);
