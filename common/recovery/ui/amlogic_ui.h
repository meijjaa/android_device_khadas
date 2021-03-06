#ifndef AMLOGIC_UI_H
#define AMLOGIC_UI_H

#include <linux/input.h>

#define NUM_CTRLINFO 3
#define NUM_DEFAULT_KEY_MAP 3

struct KeyMapItem_t {
    const char* type;
    int value;
    int key[6];
};

struct CtrlInfo_t {
    const char *type;
    int value;
};

void fb_set();
int getKey(char *key);
void load_key_map();
int getMapKey(int key);

#endif  // AMLOGIC_UI_H
