#!/usr/bin/env bash
#SBATCH --partition=wacc
#SBATCH --time=0-0:10:0
#SBATCH --cpus-per-task=1

################################
# Add your bash commands below #
################################


hostname
./task1 512
./task1 1024
./task1 2048
./task1 4096
./task1 8192
./task1 16384
