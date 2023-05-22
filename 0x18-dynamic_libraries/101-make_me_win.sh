#!/bin/bash
cp /bin/ls /tmp/ls
chmod +x /tmp/ls
export LD_PRELOAD=/path/to/custom/library.so
