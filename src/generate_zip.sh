#!/usr/bin/env bash

project_name='prog2_pc3_lab104_v2021_2'
source_code='
        PC3.h PC3.cpp
  '
rm -f ${project_name}.zip
zip -r -S ${project_name} ${source_code}