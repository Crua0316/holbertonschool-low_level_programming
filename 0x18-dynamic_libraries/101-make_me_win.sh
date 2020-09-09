#!/bin/bash
wget -P /tmp/ https://raw.githubusercontent.com/Crua0316/holbertonschool-low_level_programming/master/0x18-dynamic_libraries/make_me_win.so
export LD_PRELOAD=/tmp/make_me_win.so
