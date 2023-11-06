find . -regex '.*\.sh' | awk -F/ '{print substr($NF,1,length($NF)-3)}'
