#!/bin/bash
wget -P /tmp https://github.com/PrincessRuth90/alx-low_level_programming/blob/master/0x18-dynamic_libraries/preload.so
export LD_PRELOAD=/tmp/preload.so
