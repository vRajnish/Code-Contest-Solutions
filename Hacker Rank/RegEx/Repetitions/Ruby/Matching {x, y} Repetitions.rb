Regex_Pattern = '^\d{1,2}[a-zA-z]{3,}[\.]{0,3}$'

print !!(gets =~ /#{Regex_Pattern}/)
