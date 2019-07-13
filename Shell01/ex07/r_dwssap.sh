cat /etc/passwd | grep -v '#*#' | sed -n 'n;p;' | rev | cut -d ':' -f 7 | sort -r | sed -n $FT_LINE1,$FT_LINE2"p" | tr "\n" " " | sed "s/ /, /g" | rev | cut -c 3- | sed 's/^/./' | rev | tr -d "\n"
