Regex_Pattern = '\b[aeiouAEIOU][a-zA-Z]*\b'

print !!(gets =~ /#{Regex_Pattern}/)
