ifconfig | grep -oP '(?<=ether ).* ' | sed 's/ .*//'
