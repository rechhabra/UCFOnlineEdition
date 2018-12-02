def matrix(X1, Y1, X2, Y2, X3, Y3):  
    return abs((X1*(Y2-Y3)-X2*(Y1-Y3)+X3*(Y1-Y2))/2.0)

def checkVertexes(X1, Y1, X2, Y2, X3, Y3, x, y): 
	return matrix(X1, Y1, X2, Y2, X3, Y3)==matrix(x, y, X2, Y2, X3, Y3)+matrix(X1, Y1, x, y, X3, Y3)+A3 = matrix(X1, Y1, X2, Y2, x, y)

tc = int(input())
for XX in range(tc):
  a,b,c,d,e,f = map(int, input().split())
  n = int(input())
  ans = 0
  for i in range(n):
    A,B,C,D = map(int,input().split())
    if (checkVertexes(a,b,c,d,e,f,A,B) and not checkVertexes(a,b,c,d,e,f,C,D)) or (checkVertexes(a,b,c,d,e,f,C,D) and not checkVertexes(a,b,c,d,e,f,A,B)):
      ans+=1
  print("Scenario "+str(XX+1)+": "+str(ans))
