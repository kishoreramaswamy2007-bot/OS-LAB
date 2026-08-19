#!/bin/bash

echo "Compiling IPC program..."

gcc ipc_pipe.c -o ipc

echo "Running IPC program..."

./ipc
