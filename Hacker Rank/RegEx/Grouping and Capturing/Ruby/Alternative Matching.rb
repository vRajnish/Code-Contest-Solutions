Regex_Pattern = '^(?:Mr|Mrs|Ms|Dr|Er)\.[a-zA-Z]+$'

print !!(gets =~ /#{Regex_Pattern}/)
