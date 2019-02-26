str = gets
str = str.gsub(/sh$/,'ti')
str = str.gsub(/SH$/,'ti')
str = str.gsub(/^[f]/,'gh')
str = str.gsub(/^[F]/,'Gh')
str = str.gsub(/(?!^)i(?!$)/,'o')
puts str
