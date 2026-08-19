#!/bin/bash

echo "Compiling Semaphore Program..."

gcc semaphore.c -o semaphore -pthread

echo "Running Semaphore Program..."

./semaphore
