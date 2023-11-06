find . -regex '.*\.sh' | awk -F/ '{print $NF}'  | awk -F. '{printf "%s\n",$1}'
