t = gets.to_i
t.times do
  sum = 0
  n = gets.to_i
  sum = n * (n + 2) * (2 * n + 1) / 8
  puts sum
end
