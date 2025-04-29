#!/usr/bin/env bash
#SBATCH --partition=wacc
#SBATCH --time=0-0:10:0
#SBATCH --cpus-per-task=1

################################
# Add your bash commands below #
################################


hostname
./task2 1024
./task2 2048
./task2 4096
./task2 8192
./task2 16384
./task2 32768
./task2 65536
