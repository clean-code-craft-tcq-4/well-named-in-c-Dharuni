#include <stdio.h>
#include <assert.h>
#include "task.h"

void ColorPairToString(const ColorPair* colorPair, char* buffer) {
    sprintf(buffer, "%s %s",
        MajorColorNames[colorPair->majorColor],
        MinorColorNames[colorPair->minorColor]);
}

ColorPair GetColorFromPairNumber(int pairNumber) {
    ColorPair colorPair;
    int zeroBasedPairNumber = pairNumber - 1;
    colorPair.majorColor = 
        (MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
    colorPair.minorColor =
        (MinorColor)(zeroBasedPairNumber % numberOfMinorColors);
    return colorPair;
}

int GetPairNumberFromColor(const ColorPair* colorPair) {
    return colorPair->majorColor * numberOfMinorColors +
            colorPair->minorColor + 1;
}

void colorCodingReferenceManual(void)
{
    int majorColorCount,minorColorCount;
    ColorPair colorPairReference;
    char colorPairManual[MAX_COLORPAIR_NAME_CHARS];
    printf("ColorPair Coding Reference Manual\n");
    for(majorColorCount=0;majorColorCount<numberOfMajorColors;majorColorCount++)
    {
        for(minorColorCount=0;minorColorCount<numberOfMinorColors;minorColorCount++)
        {
            colorPairReference.majorColor = (MajorColor)majorColorCount;
            colorPairReference.minorColor = (MinorColor)minorColorCount;
            int pairNumberReference = GetPairNumberFromColor(&colorPairReference);
            ColorPairToString(&colorPairReference, colorPairManual);
            printf(" %s\t%d\n", colorPairManual,pairNumberReference );

        }
    }
}
