#!/usr/bin/env sh


gcc load_metric.c -o load_metric -Wa,-adhln=load_metric.asm -g
