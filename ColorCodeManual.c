#include <stdio.h>
#include <assert.h>
#include "main.h"
#include "task.h"

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
            colorpairreference.majorColor = (MajorColor)majorColorCount;
            colorpairreference.minorColor = (MinorColor)minorColorCount;
            int pairNumberReference = GetPairNumberFromColor(&colorPairReference);
            ColorPairToString(&colorPairReference, colorPairManual);
            printf(" %s\t%d\n", colorPairManual,pairNumberReference );

        }
    }
}

