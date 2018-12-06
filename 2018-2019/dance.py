tc = int(input())
for x in range(tc):
  input()
  s = input()
  a = 0
  for i in range(len(s)-1):
    if s[i:i+2]=="LL" or s[i:i+2]=="RR":
      a+=1
  print("Dance #"+str(x+1)+": "+str(a))
