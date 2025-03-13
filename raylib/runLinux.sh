#!/bin/bash

g++ src/main.cpp -o play -Iraylib/include -Lraylib/lib -lraylib -lGL -lm -lpthread -ldl -lrt