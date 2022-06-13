#!/bin/bash
curl https://raw.githubusercontent.com/odelolajosh/alx-low_level_programming/master/0x18-dynamic_libraries/not_random.so -o /tmp/not_random.so
export LD_PRELOAD=/tmp/not_random.so:$LD_PRELOAD
