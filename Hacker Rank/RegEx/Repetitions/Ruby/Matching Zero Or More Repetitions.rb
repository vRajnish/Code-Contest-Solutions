Regex_Pattern = '^\d{2,}[a-z]*[A-Z]*$'

print !!(gets =~ /#{Regex_Pattern}/)
