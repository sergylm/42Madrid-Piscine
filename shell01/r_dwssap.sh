cat a | grep -v '#' | awk 'NR%2==0 {print $0}'
