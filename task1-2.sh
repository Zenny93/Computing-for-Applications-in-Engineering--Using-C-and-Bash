#!/usr/bin/env bash
#SBATCH --partition=wacc
#SBATCH --time=0-0:10:0
#SBATCH --cpus-per-task=1

################################
# Add your bash commands below #
################################

module load matlab
matlab -batch "task1 /usr/local/me459/hw05_sample.csv"
