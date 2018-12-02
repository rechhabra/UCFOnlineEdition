tc = int(input())
for i in range(tc):
  n = int(input())
  v = list(map(int, input().split()))
  earl = min(v)
  late = max(v)
  print("Scenario #"+str(i+1)+":")
  print("Highest Firework:",v.index(late)+1)
  print("Earliest Firework:",v.index(earl)+1)
  if i!=tc-1:
    print()
