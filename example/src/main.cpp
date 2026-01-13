#include <display/SegmentDisplay.h>

SegmentDisplay::SegmentDisplaySettings settings = SegmentDisplay::Create(pio0, 2, 3, 0, 7, 0);

int main()
{

    SegmentDisplay display = SegmentDisplay(settings);

    while (1)
    {
        tight_loop_contents();
    }

}