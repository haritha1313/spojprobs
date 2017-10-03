t = gets.to_i
for i in 1..t
  sum = 0
  n = gets.to_i
  sum = (n * (n + 2) * (2 * n + 1) / 8)
  puts sum
end
