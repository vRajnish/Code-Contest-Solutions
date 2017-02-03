Regex_Pattern = '^[^0-9][^aeiou][^bcDF][^\s\r\n\t\f][^AEIOU][^\.,]$'

print !!(gets =~ /#{Regex_Pattern}/)