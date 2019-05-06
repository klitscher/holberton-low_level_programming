#!/bin/bash
wget https://github.com/klitscher/holbertonschool-low_level_programming/raw/master/0x17-dynamic_libraries/win.so
export LD_PRELOAD=PWD/win.so
