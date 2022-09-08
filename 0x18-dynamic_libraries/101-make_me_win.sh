#!/bin/bash
wget -P /tmp/ https://raw.github.com/PrincessRuth90/alx-low_level_programming/master/0x18-dynamic_libraries/my_functions.so
export LD_PRELOAD=/tmp/my_functions.so
