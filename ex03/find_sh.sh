find . -name "*.sh" -type f | rev | cut -f 1 -d "/" | rev | sed 's/.sh$//'
