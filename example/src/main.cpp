#include <display/SegmentDisplay.h>

#include <display/animations/Animations.h>

SegmentDisplay::SegmentDisplaySettings settings = SegmentDisplay::Create(pio0, 2, 3, 0, 7, 0);

int main()
{

    SegmentDisplay display = SegmentDisplay(settings);

    while (1)
    {
        display.DisplayAnimationOnceAll(animations::onedisplay::anim_looping, 33.33f, false);
        tight_loop_contents();
    }

}