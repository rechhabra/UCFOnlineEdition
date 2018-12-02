tc = int(input())
vals = ["Straight flush", "Four of a kind", "Full house", "Flush","Straight","Three of a kind","Two pair","Pair","High card"][::-1]
for i in range(tc):
  ryan = input()
  tyler = input()
  if vals.index(ryan)>vals.index(tyler):
    print("Game #"+str(i+1)+": Ryan")
  else:
    print("Game #"+str(i+1)+": Tyler")
