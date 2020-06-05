#1001	Extremamente Básico	Accepted	Python	0.012	29/09/2017 13:05:38
A = None
B = None

def read_integer():
  try:
    # read for Python 2.x
    return int(raw_input())
  except NameError:
    # read for Python 3.x
    return int(input())


A = read_integer()
B = read_integer()
print(str("X = ") + str(A + B))
