cat /etc/passwd | grep -v '#' | awk 'NR%2==0' | cut -d : -f 1 | rev | sort -r | awk 'NR>= ENVRION["FT_LINE1"] && NR<=ENVIRON["FT_LINE2"]' | tr '\n' ' ' | sed '$ s/ $/./' | sed 's/ /, /g' | tr -d '\n'
