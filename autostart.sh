#!/bin/bash

setxkbmap -model thinkpad60 -layout br abnt2
picom --daemon
dwmblocks &
