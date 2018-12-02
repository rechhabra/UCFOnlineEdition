from math import ceil,log
tc = int(input())
for i in range(tc):
  ans = 0
  num = int(input())
  rounder = max(2,2**ceil(log(num,2)))
  if num==rounder:
    rounder=rounder*2
  print("Pokemon "+str(i+1)+": "+str(rounder-num))
