Regex_Pattern = '^([a-z]\w\s\W\d\D[A-Z][a-zA-Z][aeiouAEIOU]\S)\1$'

print !!(gets =~ /#{Regex_Pattern}/)
