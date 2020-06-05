#1003	Soma Simples	Accepted	Python	0.028	29/09/2017 15:39:34
a = None
b = None

def read_integer():
  try:
    # read for Python 2.x
    return int(raw_input())
  except NameError:
    # read for Python 3.x
    return int(input())


a = read_integer()
b = read_integer()
print(str("SOMA = ") + str(a + b))
