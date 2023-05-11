#include "f303.h"
#if defined(ENCODER_ENABLE)
bool encoder_update_kb(uint8_t index, bool clockwise) {
    return encoder_update_user(index, clockwise);
}
#endif
