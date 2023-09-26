#!/bin/bash

cat /etc/passwd | sed -e '/^#/d' | sed 's/:.*$//' | awk 'NR%2==0' | rev | sort -r | awk 'FNR>= ENVIRON["FT_LINE1"] && FNR<= ENVIRON["FT_LINE2"]' | paste -sd "," - | sed 's/,/, /g' | sed 's/$/./' | tr -d "\n"
