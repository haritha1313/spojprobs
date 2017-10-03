n = gets.to_i
if n == 1
  print "TAK"
else
  while n % 2 == 0 && n > 0
    n /= 2
    if n == 1
      print "TAK"
      break
    end
  end
  print "NIE" if n > 1
end
