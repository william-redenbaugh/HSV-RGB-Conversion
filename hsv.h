/* hsv library by Julien Vanier <jvanier@gmail.com>
 *
 * Original code from StackOverflow
 * http://stackoverflow.com/a/6930407/1901924
 */
#include "stdio.h"

struct RgbColor
{
    uint8_t r;
    uint8_t g;
    uint8_t b;
};

struct HsvColor
{
    uint8_t h;
    uint8_t s;
    uint8_t v;
};

struct HsvColor RgbToHsv(struct RgbColor in);
struct RgbColor HsvToRgb(struct HsvColor in);
