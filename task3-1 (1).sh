#!/usr/bin/env bash
#SBATCH --partition=wacc
#SBATCH --time=0-0:10:0
#SBATCH --cpus-per-task=1

################################
# Add your bash commands below #
################################

module load matlab
hostname
matlab -batch "task3(1024)"
matlab -batch "task3(2048)"
matlab -batch "task3(4096)"
matlab -batch "task3(8192)"
matlab -batch "task3(16384)"
matlab -batch "task3(32768)"
matlab -batch "task3(65536)"
